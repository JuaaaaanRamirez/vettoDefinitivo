#include "pch.h"

#include "SalesPersistance.h"

using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace SalesModel;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;
using namespace System::Globalization;

#pragma region FILES
void SalesPersistance::Persistance::Persist(String^ fileName, Object^ persistObject)
{
    FileStream^ archivo;
    StreamWriter^ escritor;
    try {
        archivo = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        escritor = gcnew StreamWriter(archivo);
        if (persistObject->GetType() == List<Product^>::typeid) {
            for (int i = 0; i < ((List<Product^>^)persistObject)->Count; i++) {
                escritor->WriteLine(((List<Product^>^)persistObject)[i]->Id + "," +
                    ((List<Product^>^)persistObject)[i]->Name + "," +
                    ((List<Product^>^)persistObject)[i]->Description + "," +
                    ((List<Product^>^)persistObject)[i]->PriceMin + "," +
                    ((List<Product^>^)persistObject)[i]->PriceMaj + "," +
                    ((List<Product^>^)persistObject)[i]->Stock);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (escritor != nullptr) escritor->Close();
        if (archivo != nullptr) archivo->Close();
    }
}
void SalesPersistance::Persistance::PersistXML(String^ fileName, Object^ persistObject)
{
    StreamWriter^ output;
    try {
        output = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Product^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Product^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<String^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<String^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
        /**if (persistObject->GetType() == List<DeliveryMan^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<DeliveryMan^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }*/
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (output != nullptr) output->Close();
    }
}
void SalesPersistance::Persistance::PersistBinary(String^ fileName, Object^ persistObject)
{
    FileStream^ output;
    try {
        output = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        BinaryFormatter^ formateador = gcnew BinaryFormatter();
        //if (persistObject->GetType() == List<Product^>::typeid) {
        formateador->Serialize(output, persistObject);
        //}
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (output != nullptr) output->Close();
    }

}
Object^ SalesPersistance::Persistance::LoadData(String^ fileName)
{
    Object^ res;
    FileStream^ archivo;
    StreamReader^ lector;
    try {
        if (File::Exists(fileName)) {
            archivo = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            lector = gcnew StreamReader(archivo);
        }
        if (fileName->Equals("products.txt")) {
            res = gcnew List<Product^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    Product^ p = gcnew Product();
                    p->Id = Convert::ToInt32(record[0]);
                    p->Name = record[1];
                    p->Description = record[2];
                    p->PriceMin = Convert::ToDouble(record[3]);
                    p->PriceMaj = Convert::ToDouble(record[4]);
                    p->Stock = Convert::ToInt32(record[5]);
                    p->Status = 'A';
                    ((List<Product^>^)res)->Add(p);
                }
            }
        }
        if (fileName->Equals("stores.txt")) {
            res = gcnew List<String^>();
            if (File::Exists(fileName)) {
                while (true) {
                    String^ linea = lector->ReadLine();
                    if (linea == nullptr) break;
                    array<String^>^ record = linea->Split(',');
                    res = gcnew List<String^>(record);
                }
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (lector != nullptr) lector->Close();
        if (archivo != nullptr) archivo->Close();
    }
    return res;
}
Object^ SalesPersistance::Persistance::LoadXMLData(String^ fileName)
{
    Object^ res;
    StreamReader^ sr;
    XmlSerializer^ serializadorXML;
    try {
        if (File::Exists(fileName)) {
            sr = gcnew StreamReader(fileName);
        }
        if (fileName->Equals("products.xml")) {
            res = gcnew List<Product^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Product^>::typeid);
                res = (List<Product^>^)serializadorXML->Deserialize(sr);
            }
        }
        if (fileName->Equals("stores.xml")) {
            res = gcnew List<String^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<String^>::typeid);
                res = (List<String^>^)serializadorXML->Deserialize(sr);
            }
        }
        /*if (fileName->Equals("salesmen.xml")) {
            res = gcnew List<DeliveryMan^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<DeliveryMan^>::typeid);
                res = (List<DeliveryMan^>^)serializadorXML->Deserialize(sr);
            }
        }*/
        if (fileName->Equals("career.xml")) {
            res = gcnew List<String^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<String^>::typeid);
                res = (List<String^>^)serializadorXML->Deserialize(sr);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
    return res;
}
Object^ SalesPersistance::Persistance::LoadBinaryData(String^ fileName)
{
    Object^ res;
    FileStream^ input;
    BinaryFormatter^ formateador;
    try {
        if (File::Exists(fileName)) {
            input = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formateador = gcnew BinaryFormatter();
        }
        if (fileName->Equals("products.bin")) {
            res = gcnew List<Product^>();
            if (File::Exists(fileName)) {
                res = (List<Product^>^)formateador->Deserialize(input);
            }
        }
        /*if (fileName->Equals("salesmen.bin")) {
            res = gcnew List<DeliveryMan^>();
            if (File::Exists(fileName)) {
                res = (List<DeliveryMan^>^)formateador->Deserialize(input);
            }
        }*/
        if (fileName->Equals("users.bin")) {
            res = gcnew List<Person^>();
            if (File::Exists(fileName)) {
                res = (List<Person^>^)formateador->Deserialize(input);
            }
        }
        if (fileName->Equals("customer.bin")) {
            res = gcnew List<Customer^>();
            if (File::Exists(fileName)) {
                res = (List<Customer^>^)formateador->Deserialize(input);
            }
        }

        if (fileName->Equals("sales.bin")) {
            res = gcnew List<Sale^>();
            if (File::Exists(fileName)) {
                res = (List<Sale^>^)formateador->Deserialize(input);
            }
        }


    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (input != nullptr) input->Close();
    }

    return res;
}
#pragma endregion


//FOR DB.
SqlConnection^ SalesPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "AH564OB";
    conn->ConnectionString = "Server=200.16.7.140;Database=a20203924;User ID=a20203924;Password=" + password + ";"; //anteponer 'a' a nuestros codigos ....:C
    conn->Open();
    return conn;
}

#pragma region PRODUCT
// For Product
List<Product^>^ SalesPersistance::Persistance::QueryAllActiveProducts()
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlCommand^ comm2;
    SqlDataReader^ reader;
    List<Product^>^ activeProductsList = gcnew List<Product^>();
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM PRODUCT WHERE status='A'", conn); //WHERE status='A
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        while (reader->Read()) {
            Product^ p = gcnew Product();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->Name = reader["name"]->ToString();
            p->Description = reader["description"]->ToString();
            p->PriceMin = Convert::ToDouble(reader["priceMin"]->ToString());
            p->PriceMaj = Convert::ToDouble(reader["priceMaj"]->ToString());
            p->Stock = Convert::ToInt32(reader["stock"]->ToString());
            if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];//SOLUCIONA PROBLEMAS CON CHAR
            if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            if (!DBNull::Value->Equals(reader["starts"])) p->Starts = Convert::ToDouble(reader["starts"]->ToString());
            if (!DBNull::Value->Equals(reader["searches"])) p->Searches = Convert::ToInt32(reader["searches"]->ToString());
            if (!DBNull::Value->Equals(reader["sales"])) p->Sales = Convert::ToInt32(reader["sales"]->ToString());
            if (!DBNull::Value->Equals(reader["salesByTime"])) p->SalesByTime = Convert::ToInt32(reader["salesByTime"]->ToString());
            activeProductsList->Add(p);
        }
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();


        for (int i = 0; i < activeProductsList->Count; i++) {
            //Paso 1: Se obtiene la conexión
            conn = GetConnection();
            //Paso 2: Se prepara la sentencia
            comm2 = gcnew SqlCommand("SELECT * FROM CARRER WHERE product_id=" + activeProductsList[i]->Id, conn);
            //Paso 3: Se ejecuta la sentencia
            reader = comm2->ExecuteReader();
            //Paso 4: Se procesan los resultados        
            while (reader->Read()) {

                activeProductsList[i]->Career->Add(reader["carrer"]->ToString());
            }

            if (reader != nullptr) reader->Close();
            if (conn != nullptr) conn->Close();
        }




    }
    catch (Exception^ ex) {}
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeProductsList;
}
Product^ SalesPersistance::Persistance::QueryProductById(int productId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    Product^ activeProduct;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM PRODUCT WHERE id=" + productId +
            " AND status = 'A'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            Product^ p = gcnew Product();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->Name = reader["name"]->ToString();
            p->Description = reader["description"]->ToString();
            p->PriceMin = Convert::ToDouble(reader["priceMin"]->ToString());
            p->PriceMaj = Convert::ToDouble(reader["priceMaj"]->ToString());
            p->Stock = Convert::ToInt32(reader["stock"]->ToString());
            if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];//SOLUCIONA PROBLEMAS CON CHAR
            if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            if (!DBNull::Value->Equals(reader["starts"])) p->Starts = Convert::ToDouble(reader["starts"]->ToString());
            if (!DBNull::Value->Equals(reader["searches"])) p->Searches = Convert::ToInt32(reader["searches"]->ToString());
            if (!DBNull::Value->Equals(reader["sales"])) p->Sales = Convert::ToInt32(reader["sales"]->ToString());
            if (!DBNull::Value->Equals(reader["salesByTime"])) p->SalesByTime = Convert::ToInt32(reader["salesByTime"]->ToString());

            //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
            if (reader != nullptr) reader->Close();
            if (conn != nullptr) conn->Close();

            //Paso 1: Se obtiene la conexión
            conn = GetConnection();
            //Paso 2: Se prepara la sentencia
            comm = gcnew SqlCommand("SELECT * FROM CARRER WHERE product_id=" + p->Id, conn);
            //Paso 3: Se ejecuta la sentencia
            reader = comm->ExecuteReader();
            //Paso 4: Se procesan los resultados        
            while (reader->Read()) {
                p->Career->Add(reader["carrer"]->ToString());
            }
            activeProduct = p;
        }
    }
    catch (Exception^ ex) {}
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeProduct;
}
List<Product^>^ SalesPersistance::Persistance::QueryProductsByNameOrDescription(String^ value)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlCommand^ comm2;
    SqlDataReader^ reader;
    List<Product^>^ activeProductsList = gcnew List<Product^>();
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM PRODUCT WHERE " +
            "(name LIKE '%" + value + "%' OR " +
            "description LIKE '%" + value + "%') AND " +
            "status = 'A'", conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        while (reader->Read()) {
            Product^ p = gcnew Product();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->Name = reader["name"]->ToString();
            p->Description = reader["description"]->ToString();
            p->PriceMin = Convert::ToDouble(reader["priceMin"]->ToString());
            p->PriceMaj = Convert::ToDouble(reader["priceMaj"]->ToString());
            p->Stock = Convert::ToInt32(reader["stock"]->ToString());
            if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];//SOLUCIONA PROBLEMAS CON CHAR
            if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            if (!DBNull::Value->Equals(reader["starts"])) p->Starts = Convert::ToDouble(reader["starts"]->ToString());
            if (!DBNull::Value->Equals(reader["searches"])) p->Searches = Convert::ToInt32(reader["searches"]->ToString());
            if (!DBNull::Value->Equals(reader["sales"])) p->Sales = Convert::ToInt32(reader["sales"]->ToString());
            if (!DBNull::Value->Equals(reader["salesByTime"])) p->SalesByTime = Convert::ToInt32(reader["salesByTime"]->ToString());
            activeProductsList->Add(p);
        }
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();


        for (int i = 0; i < activeProductsList->Count; i++) {
            //Paso 1: Se obtiene la conexión
            conn = GetConnection();
            //Paso 2: Se prepara la sentencia
            comm2 = gcnew SqlCommand("SELECT * FROM CARRER WHERE product_id=" + activeProductsList[i]->Id, conn);
            //Paso 3: Se ejecuta la sentencia
            reader = comm2->ExecuteReader();
            //Paso 4: Se procesan los resultados        
            while (reader->Read()) {

                activeProductsList[i]->Career->Add(reader["carrer"]->ToString());
            }

            if (reader != nullptr) reader->Close();
            if (conn != nullptr) conn->Close();
        }




    }
    catch (Exception^ ex) {}
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeProductsList;
}
List<Product^>^ SalesPersistance::Persistance::QueryProductsByStockLimit(int stock)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlCommand^ comm2;
    SqlDataReader^ reader;
    List<Product^>^ activeProductsList = gcnew List<Product^>();
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM PRODUCT WHERE " +
            "stock <=" + stock, conn);
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        while (reader->Read()) {
            Product^ p = gcnew Product();
            p->Id = Convert::ToInt32(reader["id"]->ToString());
            p->Name = reader["name"]->ToString();
            p->Description = reader["description"]->ToString();
            p->PriceMin = Convert::ToDouble(reader["priceMin"]->ToString());
            p->PriceMaj = Convert::ToDouble(reader["priceMaj"]->ToString());
            p->Stock = Convert::ToInt32(reader["stock"]->ToString());
            if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];//SOLUCIONA PROBLEMAS CON CHAR
            if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            if (!DBNull::Value->Equals(reader["starts"])) p->Starts = Convert::ToDouble(reader["starts"]->ToString());
            if (!DBNull::Value->Equals(reader["searches"])) p->Searches = Convert::ToInt32(reader["searches"]->ToString());
            if (!DBNull::Value->Equals(reader["sales"])) p->Sales = Convert::ToInt32(reader["sales"]->ToString());
            if (!DBNull::Value->Equals(reader["salesByTime"])) p->SalesByTime = Convert::ToInt32(reader["salesByTime"]->ToString());
            activeProductsList->Add(p);
        }
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();


        for (int i = 0; i < activeProductsList->Count; i++) {
            //Paso 1: Se obtiene la conexión
            conn = GetConnection();
            //Paso 2: Se prepara la sentencia
            comm2 = gcnew SqlCommand("SELECT * FROM CARRER WHERE product_id=" + activeProductsList[i]->Id, conn);
            //Paso 3: Se ejecuta la sentencia
            reader = comm2->ExecuteReader();
            //Paso 4: Se procesan los resultados        
            while (reader->Read()) {

                activeProductsList[i]->Career->Add(reader["carrer"]->ToString());
            }

            if (reader != nullptr) reader->Close();
            if (conn != nullptr) conn->Close();
        }




    }
    catch (Exception^ ex) {}
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeProductsList;
}
int SalesPersistance::Persistance::AddProduct(Product^ p)
{
    SqlConnection^ conn;
     SqlCommand^ comm;
     int id_product_aux;
     
     try {
         //Paso 1: Se obtiene la conexión
         conn = GetConnection();
         //Paso 2: Se prepara la sentencia
         comm = gcnew SqlCommand("dbo.usp_AddProduct", conn);
         comm->CommandType = System::Data::CommandType::StoredProcedure;
         comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
         comm->Parameters->Add("@description", System::Data::SqlDbType::VarChar, 500);
         comm->Parameters->Add("@priceMin", System::Data::SqlDbType::Decimal, 10);
         comm->Parameters["@priceMin"]->Precision = 10;
         comm->Parameters["@priceMin"]->Scale = 2;
         comm->Parameters->Add("@priceMaj", System::Data::SqlDbType::Decimal, 10);
         comm->Parameters["@priceMaj"]->Precision = 10;
         comm->Parameters["@priceMaj"]->Scale = 2;
         comm->Parameters->Add("@stock", System::Data::SqlDbType::Int);
         comm->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
         comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);
         comm->Parameters->Add("@starts", System::Data::SqlDbType::Decimal, 10);
         comm->Parameters["@starts"]->Precision = 10;
         comm->Parameters["@starts"]->Scale = 2;
         comm->Parameters->Add("@searches", System::Data::SqlDbType::Int);
         comm->Parameters->Add("@sales", System::Data::SqlDbType::Int);
         comm->Parameters->Add("@salesByTime", System::Data::SqlDbType::Int);
         SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
         outputIdParam->Direction = System::Data::ParameterDirection::Output;
         comm->Parameters->Add(outputIdParam);
         comm->Prepare();
         comm->Parameters["@name"]->Value = p->Name;
         comm->Parameters["@description"]->Value = p->Description;
         comm->Parameters["@priceMin"]->Value = p->PriceMin;
         comm->Parameters["@priceMaj"]->Value = p->PriceMaj;
         comm->Parameters["@stock"]->Value = p->Stock;
         comm->Parameters["@status"]->Value = Char::ToString(p->Status);
         if (p->Photo == nullptr)
             comm->Parameters["@photo"]->Value = DBNull::Value;
         else
             comm->Parameters["@photo"]->Value = p->Photo;
         comm->Parameters["@starts"]->Value = p->Starts;
         comm->Parameters["@searches"]->Value = p->Searches;
         comm->Parameters["@sales"]->Value = p->Sales;
         comm->Parameters["@salesByTime"]->Value = p->SalesByTime;
         //Paso 3: Se ejecuta la sentencia
         comm->ExecuteNonQuery();
         //Paso 4: Se procesan los resultados
         id_product_aux = Convert::ToInt32(comm->Parameters["@id"]->Value);
         if (conn != nullptr) conn->Close();

         for (int i = 0; i < p->Career->Count; i++) {
             //Paso 1: Se obtiene la conexión
             conn = GetConnection();
             //Paso 2: Se prepara la sentencia
             comm = gcnew SqlCommand("dbo.usp_AddCarrer", conn);
             comm->CommandType = System::Data::CommandType::StoredProcedure;
             comm->Parameters->Add("@product_id", System::Data::SqlDbType::Int);
             comm->Parameters->Add("@carrer", System::Data::SqlDbType::VarChar, 50);
             SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
             outputIdParam->Direction = System::Data::ParameterDirection::Output;
             comm->Parameters->Add(outputIdParam);
             comm->Prepare();
             comm->Parameters["@product_id"]->Value = id_product_aux;
             comm->Parameters["@carrer"]->Value = p->Career[i];

             //Paso 3: Se ejecuta la sentencia
             comm->ExecuteNonQuery();
             //Paso 4: Se procesan los resultados
            

             if (conn != nullptr) conn->Close();
           
         }
     }
     catch (Exception^ ex) {}
     finally {
         //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
         if (conn != nullptr) conn->Close();
     }
     return id_product_aux;
   // return 1;
}
int SalesPersistance::Persistance::UpdateProduct(Product^ p)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;

    SqlDataReader^ reader;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_UpdateProduct", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
        comm->Parameters->Add("@description", System::Data::SqlDbType::VarChar, 500);
        comm->Parameters->Add("@priceMin", System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@priceMin"]->Precision = 10;
        comm->Parameters["@priceMin"]->Scale = 2;
        comm->Parameters->Add("@priceMaj", System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@priceMaj"]->Precision = 10;
        comm->Parameters["@priceMaj"]->Scale = 2;
        comm->Parameters->Add("@stock", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);
        comm->Parameters->Add("@starts", System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@starts"]->Precision = 10;
        comm->Parameters["@starts"]->Scale = 2;
        comm->Parameters->Add("@searches", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@sales", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@salesByTime", System::Data::SqlDbType::Int);
        
        comm->Prepare();
        comm->Parameters["@id"]->Value = p->Id;
        comm->Parameters["@name"]->Value = p->Name;
        comm->Parameters["@description"]->Value = p->Description;
        comm->Parameters["@priceMin"]->Value = p->PriceMin;
        comm->Parameters["@priceMaj"]->Value = p->PriceMaj;
        comm->Parameters["@stock"]->Value = p->Stock;
        comm->Parameters["@status"]->Value = Char::ToString(p->Status);
        if (p->Photo == nullptr)
            comm->Parameters["@photo"]->Value = DBNull::Value;
        else
            comm->Parameters["@photo"]->Value = p->Photo;
        comm->Parameters["@starts"]->Value = p->Starts;
        comm->Parameters["@searches"]->Value = p->Searches;
        comm->Parameters["@sales"]->Value = p->Sales;
        comm->Parameters["@salesByTime"]->Value = p->SalesByTime;
        //Paso 3: Se ejecuta la sentencia
        comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados
        output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
        if (conn != nullptr) conn->Close();

        
        
        
            //Paso 1: Se obtiene la conexión
            conn = GetConnection();
            //Paso 2: Se prepara la sentencia
            comm = gcnew SqlCommand("DELETE FROM CARRER WHERE product_id="+p->Id, conn); 
            //Paso 3: Se ejecuta la sentencia
            reader = comm->ExecuteReader();
            //Paso 4: Se procesan los resultados
            //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
            if (reader != nullptr) reader->Close();
            if (conn != nullptr) conn->Close();

            for (int i = 0; i < p->Career->Count; i++) {
                //Paso 1: Se obtiene la conexión
                conn = GetConnection();
                //Paso 2: Se prepara la sentencia
                comm = gcnew SqlCommand("dbo.usp_AddCarrer", conn);
                comm->CommandType = System::Data::CommandType::StoredProcedure;
                comm->Parameters->Add("@product_id", System::Data::SqlDbType::Int);
                comm->Parameters->Add("@carrer", System::Data::SqlDbType::VarChar, 50);
                SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
                outputIdParam->Direction = System::Data::ParameterDirection::Output;
                comm->Parameters->Add(outputIdParam);
                comm->Prepare();
                comm->Parameters["@product_id"]->Value = p->Id;
                comm->Parameters["@carrer"]->Value = p->Career[i];

                //Paso 3: Se ejecuta la sentencia
                comm->ExecuteNonQuery();
                //Paso 4: Se procesan los resultados
                //--
                if (conn != nullptr) conn->Close();

            }



    }
    catch (Exception^ ex) {}
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}
int SalesPersistance::Persistance::DeleteProduct(int id)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;

    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_DeleteProduct", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);

        comm->Prepare();
        comm->Parameters["@id"]->Value = id;
        comm->Parameters["@status"]->Value = Char::ToString('I');
        //Paso 3: Se ejecuta la sentencia
        comm->ExecuteNonQuery();
        //Paso 4: Se procesan los resultados
        output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
    }
    catch (Exception^ ex) {}
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}
#pragma endregion

#pragma region SALE
// For Sale
int SalesPersistance::Persistance::AddSale(Sale^ sale)
{
    SqlConnection^ conn;    SqlCommand^ comm;   int output_id;
    
    try {
        // Connection+Command
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_AddSale", conn);   comm->CommandType = System::Data::CommandType::StoredProcedure;
        
#pragma region PUT DATA
        comm->Parameters->Add("@status",            System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@total",             System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@total"]->Precision = 10;
        comm->Parameters["@total"]->Scale = 2;

        comm->Parameters->Add("@address",           System::Data::SqlDbType::VarChar, 500);
        comm->Parameters->Add("@reference",         System::Data::SqlDbType::VarChar, 500);
        comm->Parameters->Add("@paidmode",          System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@saledate",          System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@customer_id",       System::Data::SqlDbType::Int);
        comm->Parameters->Add("@storemanager_id",   System::Data::SqlDbType::Int);
        comm->Parameters->Add("@id",                System::Data::SqlDbType::Int);
        /*// ID
        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;

        // Push
        comm->Parameters->Add(outputIdParam);*/
        comm->Prepare();
        comm->Parameters["@status"]->Value          = Char::ToString(sale->Status);
        comm->Parameters["@total"]->Value           = sale->Total;
        comm->Parameters["@address"]->Value         = sale->Address;
        comm->Parameters["@reference"]->Value       = sale->Reference;
        comm->Parameters["@paidmode"]->Value        = sale->PaidMode;
        comm->Parameters["@saledate"]->Value        = sale->SaleDate;
        if (sale->Customer != nullptr) comm->Parameters["@customer_id"]->Value = sale->Customer->Id;
        else comm->Parameters["@customer_id"]->Value = DBNull::Value;
        comm->Parameters["@storemanager_id"]->Value = sale->StoreManager->Id;
        comm->Parameters["@id"]->Value              = sale->Id;
#pragma endregion

        // Run + GetId
        comm->ExecuteNonQuery(); output_id = Convert::ToInt32(comm->Parameters["@id"]->Value); 
    }
    catch (Exception^ ex) {}
    finally {
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}
Sale^ SalesPersistance::Persistance::QuerySaleById(int saleId)
{
    SqlConnection^ conn;    SqlCommand^ comm;   SqlDataReader^ reader;
    Sale^ activeSale;
    try {
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_QuerySaleById", conn); comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@id", System::Data::SqlDbType::Int); comm->Prepare();    comm->Parameters["@id"]->Value = saleId;

        // Read!
        reader = comm->ExecuteReader();        
        if (reader->Read()) {
            Sale^ mySale = gcnew Sale();

            mySale->Id          =   Convert::ToInt32(reader["id"]->ToString());
            mySale->Status      =   reader["status"]->ToString()[0];
            mySale->Total       =   Convert::ToDouble(reader["total"]->ToString());
            mySale->Address     =   reader["address"]->ToString();
            mySale->Reference   =   reader["reference"]->ToString();
            mySale->PaidMode    =   reader["paidmode"]->ToString();
            mySale->SaleDate    =   reader["saledate"]->ToString();
            mySale->SaleDetails = QuerySalesDetailsBySaleId(mySale->Id);

            // Relation
            if (!DBNull::Value->Equals(reader["customer_id"])) {
                Customer^ myCustomer = gcnew Customer();   
                myCustomer->Id = Convert::ToInt32(reader["customer_id"]->ToString()); 
                mySale->Customer = myCustomer; 
            }
            StoreManager^ mySM = gcnew StoreManager(); mySM->Id = Convert::ToInt32(reader["storemanager_id"]->ToString());
            if (mySM->Id == 0) { mySM->Name = "Asistente Virtual"; mySM->Username = "Asistente Virtual"; }
            mySale->StoreManager = mySM;
            //if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];
            //if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            activeSale = mySale;
        }
    }
    catch (Exception^ ex) { throw ex; }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeSale;
}
Sale^ SalesPersistance::Persistance::QueryLastSale()
{
    SqlConnection^ conn;    SqlCommand^ comm;   SqlDataReader^ reader;
    Sale^ activeSale;
    try {
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_QueryLastSale", conn); comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Prepare(); 

        // Read!
        reader = comm->ExecuteReader();
        if (reader->Read()) {
            Sale^ mySale = gcnew Sale();

            mySale->Id = Convert::ToInt32(reader["id"]->ToString());
            mySale->Status = reader["status"]->ToString()[0];
            mySale->Total = Convert::ToDouble(reader["total"]->ToString());
            mySale->Address = reader["address"]->ToString();
            mySale->Reference = reader["reference"]->ToString();
            mySale->PaidMode = reader["paidmode"]->ToString();
            mySale->SaleDate = reader["saledate"]->ToString();

            // Relation
            Customer^ myCustomer = gcnew Customer(); StoreManager^ mySM = gcnew StoreManager();
            myCustomer->Id = Convert::ToInt32(reader["customer_id"]->ToString());   mySM->Id       = Convert::ToInt32(reader["storemanager_id"]->ToString());
            mySale->Customer = myCustomer;  mySale->StoreManager = mySM;

            //if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];
            //if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            activeSale = mySale;
        }
    }
    catch (Exception^ ex) {}
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeSale;
}
List<Sale^>^ SalesPersistance::Persistance::QuerySaleByCustomerId(int customerId)
{
    SqlConnection^ conn;    SqlCommand^ comm;   SqlDataReader^ reader;
    List<Sale^>^ activeSaleList = gcnew List<Sale^>();
    try {
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_QuerySaleByCustomerId", conn); comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@customer_id", System::Data::SqlDbType::Int); comm->Prepare();   
        comm->Parameters["@customer_id"]->Value = customerId; reader = comm->ExecuteReader();

        // Read
        while (reader->Read()) {
            Sale^ mySale = gcnew Sale();

            mySale->Id = Convert::ToInt32(reader["id"]->ToString());
            mySale->Status = reader["status"]->ToString()[0];
            mySale->Total = Convert::ToDouble(reader["total"]->ToString());
            mySale->Address = reader["address"]->ToString();
            mySale->Reference = reader["reference"]->ToString();
            mySale->PaidMode = reader["paidmode"]->ToString();
            mySale->SaleDate = reader["saledate"]->ToString();

            // Relation
            Customer^ myCustomer = gcnew Customer(); StoreManager^ mySM = gcnew StoreManager();
            if (!DBNull::Value->Equals(reader["customer_id"])) myCustomer->Id = Convert::ToInt32(reader["customer_id"]->ToString());
            mySM->Id = Convert::ToInt32(reader["storemanager_id"]->ToString()); if (mySM->Id == 0) { mySM->Name = "Asistente Virtual"; mySM->Username = "Asistente Virtual"; }

            mySale->Customer = myCustomer; mySale->StoreManager = mySM;


            // GetSaleDetail
            mySale->SaleDetails = QuerySalesDetailsBySaleId(mySale->Id);

            //if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];
            //if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            activeSaleList->Add(mySale);
        }
    }
    catch (Exception^ ex) { throw ex; }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeSaleList;
}
List<Sale^>^ SalesPersistance::Persistance::QueryAllSales()
{
    SqlConnection^ conn;    SqlCommand^ comm;   SqlDataReader^ reader;
    List<Sale^>^ activeSaleList = gcnew List<Sale^>();
    try {
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_QueryAllSales", conn); comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Prepare();    reader = comm->ExecuteReader();
        
        // Read
        while (reader->Read()) {
            Sale^ mySale = gcnew Sale();

            mySale->Id = Convert::ToInt32(reader["id"]->ToString());
            mySale->Status = reader["status"]->ToString()[0];
            mySale->Total = Convert::ToDouble(reader["total"]->ToString());
            mySale->Address = reader["address"]->ToString();
            mySale->Reference = reader["reference"]->ToString();
            mySale->PaidMode = reader["paidmode"]->ToString();
            mySale->SaleDate = reader["saledate"]->ToString();

            // Relation
            Customer^ myCustomer = gcnew Customer(); StoreManager^ mySM = gcnew StoreManager();
            if (!DBNull::Value->Equals(reader["customer_id"])) myCustomer->Id = Convert::ToInt32(reader["customer_id"]->ToString()); 
            mySM->Id= Convert::ToInt32(reader["storemanager_id"]->ToString()); if (mySM->Id == 0) { mySM->Name = "Asistente Virtual"; mySM->Username = "Asistente Virtual"; }
            
            mySale->Customer = myCustomer; mySale->StoreManager = mySM;


            // GetSaleDetail
            mySale->SaleDetails = QuerySalesDetailsBySaleId(mySale->Id);

            //if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];
            //if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            activeSaleList->Add(mySale);
        }
    }
    catch (Exception^ ex) { throw ex; }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activeSaleList;
}
int SalesPersistance::Persistance::UpdateSale(Sale^ sale)
{
    SqlConnection^ conn;    SqlCommand^ comm;   int result;
    try {
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_UpdateSale", conn); comm->CommandType = System::Data::CommandType::StoredProcedure;
        
#pragma region PUT DATA
        comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@total", System::Data::SqlDbType::Decimal, 10);
        comm->Parameters["@total"]->Precision = 10;
        comm->Parameters["@total"]->Scale = 2;

        comm->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 500);
        comm->Parameters->Add("@reference", System::Data::SqlDbType::VarChar, 500);
        comm->Parameters->Add("@paidmode", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@saledate", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@customer_id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@storemanager_id", System::Data::SqlDbType::Int);

        comm->Prepare();

        comm->Parameters["@id"]->Value = sale->Id;
        comm->Parameters["@status"]->Value = Char::ToString(sale->Status);
        comm->Parameters["@total"]->Value = sale->Total;
        comm->Parameters["@address"]->Value = sale->Address;
        comm->Parameters["@reference"]->Value = sale->Reference;
        comm->Parameters["@paidmode"]->Value = sale->PaidMode;
        comm->Parameters["@saledate"]->Value = sale->SaleDate;
        if (sale->Customer != nullptr) comm->Parameters["@customer_id"]->Value = sale->Customer->Id;
        else comm->Parameters["@customer_id"]->Value = DBNull::Value;
        comm->Parameters["@storemanager_id"]->Value = sale->StoreManager->Id;


#pragma endregion
        result = comm->ExecuteNonQuery(); // Affedted rows       
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}
int SalesPersistance::Persistance::GetSalesCounter()
{
    SqlConnection^ conn;    SqlCommand^ comm;   SqlDataReader^ reader; int count;
    try {
        conn = GetConnection(); comm = gcnew SqlCommand("SELECT COUNT(*) FROM SALE", conn); reader = comm->ExecuteReader();

        // Read
        while (reader->Read()) {
            count = Convert::ToInt32(reader[""]->ToString());
        }
    }
    catch (Exception^ ex) {}
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return count;
}
int SalesPersistance::Persistance::DeleteSale(int saleId)
{
    SqlConnection^ conn;    SqlCommand^ comm;   int result;
    try {
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_DeleteSale", conn); comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@id", System::Data::SqlDbType::Int); comm->Prepare(); comm->Parameters["@id"]->Value = saleId;
        result = comm->ExecuteNonQuery();       // Affected rows
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}
#pragma endregion

#pragma region SALE DETAIL
int SalesPersistance::Persistance::AddSaleDetail(SaleDetail^ saleDetail, int saleId)
{
    SqlConnection^ conn;    SqlCommand^ comm;   int output_id;

    try {
        // Connection+Command
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_AddSaleDetail", conn);   comm->CommandType = System::Data::CommandType::StoredProcedure;

#pragma region PUT DATA
        comm->Parameters->Add("@quantity",      System::Data::SqlDbType::Int);
        comm->Parameters->Add("@subtotal",      System::Data::SqlDbType::Decimal,10); comm->Parameters["@subtotal"]->Precision = 10; comm->Parameters["@subtotal"]->Scale = 2;
        comm->Parameters->Add("@unit_price",    System::Data::SqlDbType::Decimal,10); comm->Parameters["@unit_price"]->Precision = 10; comm->Parameters["@unit_price"]->Scale = 2;
        comm->Parameters->Add("@sale_id",       System::Data::SqlDbType::Int);
        comm->Parameters->Add("@product_id",    System::Data::SqlDbType::Int);
        // ID
        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;

        // Push
        comm->Parameters->Add(outputIdParam);
        comm->Prepare();
        comm->Parameters["@quantity"]->Value = saleDetail->Quantity;
        comm->Parameters["@subtotal"]->Value = saleDetail->SubTotal;
        comm->Parameters["@unit_price"]->Value = saleDetail->UnitPrice;
        comm->Parameters["@sale_id"]->Value = saleId;
        comm->Parameters["@product_id"]->Value = saleDetail->Product->Id;
#pragma endregion

        // Run + GetId
        comm->ExecuteNonQuery(); output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
    }
    catch (Exception^ ex) {}
    finally {
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}
List<SaleDetail^>^ SalesPersistance::Persistance::QuerySalesDetailsBySaleId(int saleid)
{
    SqlConnection^ conn;    SqlCommand^ comm;   SqlDataReader^ reader;
    List<SaleDetail^>^ mySaleDetailList = gcnew List<SaleDetail^>();
    try {
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_QuerySalesDetailsBySaleId", conn); comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@sale_id", System::Data::SqlDbType::Int); comm->Prepare();    comm->Parameters["@sale_id"]->Value = saleid;
        reader = comm->ExecuteReader();

        // Read
        while (reader->Read()) {
            SaleDetail^ mySD = gcnew SaleDetail();

            mySD->Id = Convert::ToInt32(reader["product_id"]->ToString());
            mySD->Quantity = Convert::ToInt32(reader["quantity"]->ToString());
            mySD->SubTotal = Convert::ToDouble(reader["subtotal"]->ToString());
            mySD->UnitPrice = Convert::ToDouble(reader["unit_price"]->ToString());
            // Product
            mySD->Product = QueryProductById(mySD->Id);
            //if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString()[0];
            //if (!DBNull::Value->Equals(reader["photo"])) p->Photo = (array<Byte>^)reader["photo"];
            mySaleDetailList->Add(mySD);
        }
    }
    catch (Exception^ ex) {}
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return mySaleDetailList;
}
SaleDetail^ SalesPersistance::Persistance::QuerySaleDetailBySaleIdAndProductId(int saleid, int productid)
{
    SqlConnection^ conn;    SqlCommand^ comm;   SqlDataReader^ reader;
    SaleDetail^ mySaleDetail;
    try {
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_QuerySaleDetailBySaleIdAndProductId", conn); comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@sale_id",   System::Data::SqlDbType::Int); 
        comm->Parameters->Add("@product_d", System::Data::SqlDbType::Int);
        comm->Prepare();    comm->Parameters["@sale_id"]->Value = saleid; comm->Parameters["@product_d"]->Value = productid;

        // Read!
        reader = comm->ExecuteReader();
        if (reader->Read()) {
            SaleDetail^ mySD = gcnew SaleDetail();

            mySD->Id = Convert::ToInt32(reader["product_id"]->ToString());
            mySD->Quantity = Convert::ToInt32(reader["quantity"]->ToString());
            mySD->SubTotal = Convert::ToDouble(reader["subtotal"]->ToString());
            mySD->UnitPrice = Convert::ToDouble(reader["unit_price"]->ToString());
            mySD->Product = QueryProductById(mySD->Id);
            mySaleDetail = mySD;
        }
    }
    catch (Exception^ ex) {}
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return mySaleDetail;
}
int SalesPersistance::Persistance::UpdateSaleDetail(SaleDetail^ saleDetail, int saleId)
{
    SqlConnection^ conn;    SqlCommand^ comm;   int result;
    try {
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_UpdateSaleDetail", conn); comm->CommandType = System::Data::CommandType::StoredProcedure;

#pragma region PUT DATA
        comm->Parameters->Add("@quantity",      System::Data::SqlDbType::Int);
        comm->Parameters->Add("@subtotal",      System::Data::SqlDbType::Decimal,10);        comm->Parameters["@subtotal"]->Precision = 10; comm->Parameters["@subtotal"]->Scale = 2;

        comm->Parameters->Add("@unit_price",    System::Data::SqlDbType::Decimal,10);        comm->Parameters["@unit_price"]->Precision = 10; comm->Parameters["@unit_price"]->Scale = 2;
        comm->Parameters->Add("@sale_id",       System::Data::SqlDbType::Int);
        comm->Parameters->Add("@product_id",    System::Data::SqlDbType::Int);
        comm->Prepare();
        comm->Parameters["@quantity"]->Value = saleDetail->Quantity;
        comm->Parameters["@subtotal"]->Value = saleDetail->SubTotal;
        comm->Parameters["@unit_price"]->Value = saleDetail->UnitPrice;
        comm->Parameters["@sale_id"]->Value = saleId;
        comm->Parameters["@product_id"]->Value = saleDetail->Id;
#pragma endregion
        result = comm->ExecuteNonQuery(); // Affedted rows       
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (conn != nullptr) conn->Close();
    }
    return result;
}
int SalesPersistance::Persistance::DeleteSaleDetail(int saleid, int productid)
{
    SqlConnection^ conn;    SqlCommand^ comm;

    try {
        // Connection+Command
        conn = GetConnection(); comm = gcnew SqlCommand("dbo.usp_DeleteSaleDetail", conn);   comm->CommandType = System::Data::CommandType::StoredProcedure;

#pragma region PUT DATA
        comm->Parameters->Add("@sale_id", System::Data::SqlDbType::Int); comm->Parameters->Add("@product_id", System::Data::SqlDbType::Int);
        comm->Prepare();
        comm->Parameters["@sale_id"]->Value = saleid;  comm->Parameters["@product_id"]->Value = productid;
#pragma endregion

        // Run + GetId
        comm->ExecuteNonQuery();
    }
    catch (Exception^ ex) {}
    finally {
        if (conn != nullptr) conn->Close();
    }
    return saleid;
}
List<Person^>^ SalesPersistance::Persistance::QueryAllActivePerson()
{
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí

    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Person^>^ activePersonsList = gcnew List<Person^>();
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM PERSON", conn); //
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        while (reader->Read()) {

            if (reader["profile"]->ToString()->Equals("S")) {
                Customer^ p = gcnew Customer();

                p->Id = Convert::ToInt32(reader["id"]->ToString());
                p->Name = reader["name"]->ToString();
                p->LastName = reader["last_name"]->ToString();
                if (!DBNull::Value->Equals(reader["doc_number"]))p->DocNumber = reader["doc_number"]->ToString();
                if (!DBNull::Value->Equals(reader["phone_number"]))p->PhoneNumber = reader["phone_number"]->ToString();
                if (!DBNull::Value->Equals(reader["email"]))p->Email = reader["email"]->ToString();
                if (!DBNull::Value->Equals(reader["username"]))p->Username = reader["username"]->ToString();
                if (!DBNull::Value->Equals(reader["password"]))p->Password = reader["password"]->ToString();
                if (!DBNull::Value->Equals(reader["birthday"])) {
                    DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
                    p->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
                }
                if (!DBNull::Value->Equals(reader["gender"])) p->Gender = reader["gender"]->ToString()[0];
                if (!DBNull::Value->Equals(reader["photo"]))p->Photo = (array<Byte>^)reader["photo"];
                if (!DBNull::Value->Equals(reader["profile"])) p->Profile = reader["profile"]->ToString()[0];

                if (!DBNull::Value->Equals(reader["customer_points"])) p->CustomerPoints = Convert::ToInt32(reader["customer_points"]->ToString());
                if (!DBNull::Value->Equals(reader["address"])) p->Address = reader["address"]->ToString();

                activePersonsList->Add(p);
            }
            else if (reader["profile"]->ToString()->Equals("A")) {
                Announcer^ p = gcnew Announcer();
                    
                p->Id = Convert::ToInt32(reader["id"]->ToString());
                p->Name = reader["name"]->ToString();
                p->LastName = reader["last_name"]->ToString();
                if (!DBNull::Value->Equals(reader["doc_number"]))p->DocNumber = reader["doc_number"]->ToString();
                if (!DBNull::Value->Equals(reader["phone_number"]))p->PhoneNumber = reader["phone_number"]->ToString();
                if (!DBNull::Value->Equals(reader["email"]))p->Email = reader["email"]->ToString();
                if (!DBNull::Value->Equals(reader["username"]))p->Username = reader["username"]->ToString();
                if (!DBNull::Value->Equals(reader["password"]))p->Password = reader["password"]->ToString();
                if (!DBNull::Value->Equals(reader["birthday"])) {
                    DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
                    p->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
                }
                if (!DBNull::Value->Equals(reader["gender"])) p->Gender = reader["gender"]->ToString()[0];
                if (!DBNull::Value->Equals(reader["photo"]))p->Photo = (array<Byte>^)reader["photo"];
                if (!DBNull::Value->Equals(reader["profile"])) p->Profile = reader["profile"]->ToString()[0];

                if (!DBNull::Value->Equals(reader["ad"])) p->Ad = (array<Byte>^)reader["ad"];
                if (!DBNull::Value->Equals(reader["ad_in_sistem"]))p->AdInSistem = Convert::ToBoolean(reader["ad_in_sistem"]->ToString());
                if (!DBNull::Value->Equals(reader["number_picture_box"]))p->NumberPictureBox = Convert::ToInt32(reader["number_picture_box"]->ToString());
                if (!DBNull::Value->Equals(reader["web_site_link"])) p->WebSiteLink = reader["web_site_link"]->ToString();
                if (!DBNull::Value->Equals(reader["company_name"])) p->CompanyName = reader["company_name"]->ToString();

                activePersonsList->Add(p);
            }
            else
            {
                StoreManager^ p = gcnew StoreManager();

                p->Id = Convert::ToInt32(reader["id"]->ToString());
                p->Name = reader["name"]->ToString();
                p->LastName = reader["last_name"]->ToString();
                if (!DBNull::Value->Equals(reader["doc_number"]))p->DocNumber = reader["doc_number"]->ToString();
                if (!DBNull::Value->Equals(reader["phone_number"]))p->PhoneNumber = reader["phone_number"]->ToString();
                if (!DBNull::Value->Equals(reader["email"]))p->Email = reader["email"]->ToString();
                if (!DBNull::Value->Equals(reader["username"]))p->Username = reader["username"]->ToString();
                if (!DBNull::Value->Equals(reader["password"]))p->Password = reader["password"]->ToString();
                if (!DBNull::Value->Equals(reader["birthday"])) {
                    DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
                    p->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
                }
                if (!DBNull::Value->Equals(reader["gender"])) p->Gender = reader["gender"]->ToString()[0];
                if (!DBNull::Value->Equals(reader["photo"]))p->Photo = (array<Byte>^)reader["photo"];
                if (!DBNull::Value->Equals(reader["profile"])) p->Profile = reader["profile"]->ToString()[0];

                if (!DBNull::Value->Equals(reader["goal"])) p->Goals = Convert::ToDouble(reader["goal"]->ToString());
                if (!DBNull::Value->Equals(reader["salary"])) p->Salary = reader["salary"]->ToString();
                if (!DBNull::Value->Equals(reader["store"])) p->Store = reader["store"]->ToString();
                if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString();


                activePersonsList->Add(p);
            }


        }
    }
    catch (Exception^ ex) { throw 
        ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activePersonsList;
}
Person^ SalesPersistance::Persistance::QueryPersonById(int personId)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    Person^ activePerson;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("SELECT * FROM PERSON WHERE id=" + personId, conn); //
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            if (!DBNull::Value->Equals(reader["profile"]) && reader["profile"]->ToString()->Equals("S")) {
                Customer^ p = gcnew Customer();
                p->Id = Convert::ToInt32(reader["id"]->ToString());
                p->Name = reader["name"]->ToString();
                p->LastName = reader["last_name"]->ToString();
                if (!DBNull::Value->Equals(reader["doc_number"]))p->DocNumber = reader["doc_number"]->ToString();
                if (!DBNull::Value->Equals(reader["phone_number"]))p->PhoneNumber = reader["phone_number"]->ToString();
                if (!DBNull::Value->Equals(reader["email"]))p->Email = reader["email"]->ToString();
                if (!DBNull::Value->Equals(reader["username"]))p->Username = reader["username"]->ToString();
                if (!DBNull::Value->Equals(reader["password"]))p->Password = reader["password"]->ToString();
                if (!DBNull::Value->Equals(reader["birthday"])) {
                    DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
                    p->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
                }
                if (!DBNull::Value->Equals(reader["gender"])) p->Gender = reader["gender"]->ToString()[0];
                if (!DBNull::Value->Equals(reader["photo"]))p->Photo = (array<Byte>^)reader["photo"];
                if (!DBNull::Value->Equals(reader["profile"])) p->Profile = reader["profile"]->ToString()[0];

                if (!DBNull::Value->Equals(reader["customer_points"])) p->CustomerPoints = Convert::ToInt32(reader["customer_points"]->ToString());
                if (!DBNull::Value->Equals(reader["address"])) p->Address = reader["address"]->ToString();
                activePerson = p;
            }
            else  if (!DBNull::Value->Equals(reader["profile"]) && reader["profile"]->ToString()->Equals("A")) {
                Announcer^ p = gcnew Announcer();
                p->Id = Convert::ToInt32(reader["id"]->ToString());
                p->Name = reader["name"]->ToString();
                p->LastName = reader["last_name"]->ToString();
                if (!DBNull::Value->Equals(reader["doc_number"]))p->DocNumber = reader["doc_number"]->ToString();
                if (!DBNull::Value->Equals(reader["phone_number"]))p->PhoneNumber = reader["phone_number"]->ToString();
                if (!DBNull::Value->Equals(reader["email"]))p->Email = reader["email"]->ToString();
                if (!DBNull::Value->Equals(reader["username"]))p->Username = reader["username"]->ToString();
                if (!DBNull::Value->Equals(reader["password"]))p->Password = reader["password"]->ToString();
                if (!DBNull::Value->Equals(reader["birthday"])) {
                    DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
                    p->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
                }
                if (!DBNull::Value->Equals(reader["gender"])) p->Gender = reader["gender"]->ToString()[0];
                if (!DBNull::Value->Equals(reader["photo"]))p->Photo = (array<Byte>^)reader["photo"];
                if (!DBNull::Value->Equals(reader["profile"])) p->Profile = reader["profile"]->ToString()[0];

                if (!DBNull::Value->Equals(reader["ad"])) p->Ad = (array<Byte>^)reader["ad"];
                if (!DBNull::Value->Equals(reader["ad_in_sistem"]))p->AdInSistem = Convert::ToBoolean(reader["ad_in_sistem"]->ToString());
                if (!DBNull::Value->Equals(reader["number_picture_box"]))p->NumberPictureBox = Convert::ToInt32(reader["number_picture_box"]->ToString());
                if (!DBNull::Value->Equals(reader["web_site_link"])) p->WebSiteLink = reader["web_site_link"]->ToString();
                if (!DBNull::Value->Equals(reader["company_name"])) p->CompanyName = reader["company_name"]->ToString();
                activePerson = p;
            }
            else  {
                StoreManager^ p = gcnew StoreManager();
                p->Id = Convert::ToInt32(reader["id"]->ToString());
                p->Name = reader["name"]->ToString();
                p->LastName = reader["last_name"]->ToString();
                if (!DBNull::Value->Equals(reader["doc_number"]))p->DocNumber = reader["doc_number"]->ToString();
                if (!DBNull::Value->Equals(reader["phone_number"]))p->PhoneNumber = reader["phone_number"]->ToString();
                if (!DBNull::Value->Equals(reader["email"]))p->Email = reader["email"]->ToString();
                if (!DBNull::Value->Equals(reader["username"]))p->Username = reader["username"]->ToString();
                if (!DBNull::Value->Equals(reader["password"]))p->Password = reader["password"]->ToString();
                if (!DBNull::Value->Equals(reader["birthday"])) {
                    DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
                    p->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
                }
                if (!DBNull::Value->Equals(reader["gender"])) p->Gender = reader["gender"]->ToString()[0];
                if (!DBNull::Value->Equals(reader["photo"]))p->Photo = (array<Byte>^)reader["photo"];
                if (!DBNull::Value->Equals(reader["profile"])) p->Profile = reader["profile"]->ToString()[0];

                if (!DBNull::Value->Equals(reader["goal"])) p->Goals = Convert::ToDouble(reader["goal"]->ToString());
                if (!DBNull::Value->Equals(reader["salary"])) p->Salary = reader["salary"]->ToString();
                if (!DBNull::Value->Equals(reader["store"])) p->Store = reader["store"]->ToString();
                if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString();
                activePerson = p;
            }

            if (reader != nullptr) reader->Close();
            if (conn != nullptr) conn->Close();
        }
    }
    catch (Exception^ ex) { 
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return activePerson;
}
int SalesPersistance::Persistance::AddPerson(Person^ user)
{
   // return 0;
   
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        /* 1er paso: Se obtiene la conexión */
        conn = GetConnection();

        /* 2do paso: Se prepara la sentencia */
        comm = gcnew SqlCommand();
        comm->Connection = conn;
        String^ strCmd;
        if (user->GetType() == Customer::typeid) {
            strCmd = "dbo.usp_Add_Person_Customer";
            comm = gcnew SqlCommand(strCmd, conn);

            comm->CommandType = System::Data::CommandType::StoredProcedure;
            comm->Parameters->Add("@doc_number", System::Data::SqlDbType::VarChar, 15);
            comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@last_name", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 50);
            comm->Parameters->Add("@email", System::Data::SqlDbType::VarChar, 150);
            comm->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 20);
            comm->Parameters->Add("@password", System::Data::SqlDbType::VarChar,20);
            comm->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
            comm->Parameters->Add("@birthday", System::Data::SqlDbType::Date);
            comm->Parameters->Add("@profile", System::Data::SqlDbType::Char, 1);
            comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);
            comm->Parameters->Add("@customer_points", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 150);

            SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
            
            outputIdParam->Direction = System::Data::ParameterDirection::Output;
            comm->Parameters->Add(outputIdParam);

            comm->Prepare();
            comm->Parameters["@doc_number"]->Value = user->DocNumber;
            comm->Parameters["@name"]->Value = user->Name;
            comm->Parameters["@last_name"]->Value = user->LastName;
            comm->Parameters["@phone_number"]->Value = user->PhoneNumber;
            comm->Parameters["@email"]->Value = user->Email;
            comm->Parameters["@username"]->Value = user->Username;
            comm->Parameters["@password"]->Value = user->Password;
            comm->Parameters["@gender"]->Value = Char::ToString(user->Gender);
            comm->Parameters["@birthday"]->Value = user->Birthday;
            comm->Parameters["@profile"]->Value = Char::ToString(user->Profile);
            if (user->Photo == nullptr)
                comm->Parameters["@photo"]->Value = DBNull::Value;
            else
                comm->Parameters["@photo"]->Value = user->Photo;
            comm->Parameters["@customer_points"]->Value = ((Customer^)user)->CustomerPoints;
            comm->Parameters["@address"]->Value = ((Customer^)user)->Address;


            /* Paso 3: Se ejecuta la sentencia */
            comm->ExecuteNonQuery();

            /* Paso 4: Si se quiere procesar la salida. */
            output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
        }
        else if (user->GetType() == Announcer::typeid) {
            strCmd = "dbo.usp_Add_Person_Announcer";
            comm = gcnew SqlCommand(strCmd, conn);

            comm->CommandType = System::Data::CommandType::StoredProcedure;
            comm->Parameters->Add("@doc_number", System::Data::SqlDbType::VarChar, 15);
            comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@last_name", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 50);
            comm->Parameters->Add("@email", System::Data::SqlDbType::VarChar, 150);
            comm->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 20);
            comm->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 20);
            comm->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
            comm->Parameters->Add("@birthday", System::Data::SqlDbType::Date);
            comm->Parameters->Add("@profile", System::Data::SqlDbType::Char, 1);
            comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);
            comm->Parameters->Add("@ad", System::Data::SqlDbType::Image);
            comm->Parameters->Add("@ad_in_sistem", System::Data::SqlDbType::Bit);
            comm->Parameters->Add("@number_picture_box", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@web_site_link", System::Data::SqlDbType::VarChar, 200);
            comm->Parameters->Add("@company_name", System::Data::SqlDbType::VarChar, 50);


            SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);

            outputIdParam->Direction = System::Data::ParameterDirection::Output;
            comm->Parameters->Add(outputIdParam);

            comm->Prepare();
            comm->Parameters["@doc_number"]->Value = user->DocNumber;
            comm->Parameters["@name"]->Value = user->Name;
            comm->Parameters["@last_name"]->Value = user->LastName;
            comm->Parameters["@phone_number"]->Value = user->PhoneNumber;
            comm->Parameters["@email"]->Value = user->Email;
            comm->Parameters["@username"]->Value = user->Username;
            comm->Parameters["@password"]->Value = user->Password;
            comm->Parameters["@gender"]->Value = Char::ToString(user->Gender);
            comm->Parameters["@birthday"]->Value = user->Birthday;
            comm->Parameters["@profile"]->Value = Char::ToString(user->Profile);
            if (user->Photo == nullptr)
                comm->Parameters["@photo"]->Value = DBNull::Value;
            else
                comm->Parameters["@photo"]->Value = user->Photo;

            if (((Announcer^)user)->Ad== nullptr)
                comm->Parameters["@ad"]->Value = DBNull::Value;
            else
                comm->Parameters["@ad"]->Value = ((Announcer^)user)->Ad;

            comm->Parameters["@ad_in_sistem"]->Value = Convert::ToBoolean(((Announcer^)user)->AdInSistem);
            comm->Parameters["@number_picture_box"]->Value = Convert::ToInt32(((Announcer^)user)->NumberPictureBox);
            comm->Parameters["@web_site_link"]->Value = ((Announcer^)user)->WebSiteLink;
            comm->Parameters["@company_name"]->Value = ((Announcer^)user)->CompanyName;


            /* Paso 3: Se ejecuta la sentencia */
            comm->ExecuteNonQuery();

            /* Paso 4: Si se quiere procesar la salida. */
            output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
        }
        else {
        strCmd = "dbo.usp_Add_Person_Store_Manager";
        comm = gcnew SqlCommand(strCmd, conn);

        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@doc_number", System::Data::SqlDbType::VarChar, 15);
        comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@last_name", System::Data::SqlDbType::VarChar, 100);
        comm->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 50);
        comm->Parameters->Add("@email", System::Data::SqlDbType::VarChar, 150);
        comm->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 20);
        comm->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 20);
        comm->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@birthday", System::Data::SqlDbType::Date);
        comm->Parameters->Add("@profile", System::Data::SqlDbType::Char, 1);
        comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);

        comm->Parameters->Add("@goal", System::Data::SqlDbType::Decimal);
        comm->Parameters["@goal"]->Precision = 10;
        comm->Parameters["@goal"]->Scale = 2;
        comm->Parameters->Add("@salary", System::Data::SqlDbType::VarChar,15);
        comm->Parameters->Add("@store", System::Data::SqlDbType::VarChar, 50);
        comm->Parameters->Add("@status", System::Data::SqlDbType::VarChar, 15);


        SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);

        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        comm->Parameters->Add(outputIdParam);

        comm->Prepare();
        comm->Parameters["@doc_number"]->Value = user->DocNumber;
        comm->Parameters["@name"]->Value = user->Name;
        comm->Parameters["@last_name"]->Value = user->LastName;
        comm->Parameters["@phone_number"]->Value = user->PhoneNumber;
        comm->Parameters["@email"]->Value = user->Email;
        comm->Parameters["@username"]->Value = user->Username;
        comm->Parameters["@password"]->Value = user->Password;
        comm->Parameters["@gender"]->Value = Char::ToString(user->Gender);
        comm->Parameters["@birthday"]->Value = user->Birthday;
        comm->Parameters["@profile"]->Value = Char::ToString(user->Profile);
        if (user->Photo == nullptr)
            comm->Parameters["@photo"]->Value = DBNull::Value;
        else
            comm->Parameters["@photo"]->Value = user->Photo;

        

        comm->Parameters["@goal"]->Value = ((StoreManager^)user)->Goals;
        comm->Parameters["@salary"]->Value = ((StoreManager^)user)->Salary;
        comm->Parameters["@store"]->Value = ((StoreManager^)user)->Store;
        comm->Parameters["@status"]->Value = ((StoreManager^)user)->Status;


        /* Paso 3: Se ejecuta la sentencia */
        comm->ExecuteNonQuery();

        /* Paso 4: Si se quiere procesar la salida. */
        output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
         }

        
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}
int SalesPersistance::Persistance::UpdatePerson(Person^ user)
{

    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        /* 1er paso: Se obtiene la conexión */
        conn = GetConnection();
        /* 2do paso: Se prepara la sentencia */
        comm = gcnew SqlCommand();
        comm->Connection = conn;
        String^ strCmd;
        if (user->GetType() == Customer::typeid) {
            strCmd = "dbo.usp_UpdatePerson_Customer";
            comm = gcnew SqlCommand(strCmd, conn);
            comm->CommandType = System::Data::CommandType::StoredProcedure;

            comm->Parameters->Add("@doc_number", System::Data::SqlDbType::VarChar, 15);
            comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@last_name", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 50);
            comm->Parameters->Add("@email", System::Data::SqlDbType::VarChar, 150);
            comm->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 20);
            comm->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 20);
            comm->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
            comm->Parameters->Add("@birthday", System::Data::SqlDbType::Date);
            comm->Parameters->Add("@profile", System::Data::SqlDbType::Char, 1);
            comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);
            comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@customer_points", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@address", System::Data::SqlDbType::VarChar, 150);
            comm->Prepare();

            comm->Parameters["@doc_number"]->Value = user->DocNumber;
            comm->Parameters["@name"]->Value = user->Name;
            comm->Parameters["@last_name"]->Value = user->LastName;
            comm->Parameters["@phone_number"]->Value = user->PhoneNumber;
            comm->Parameters["@email"]->Value = user->Email;
            comm->Parameters["@username"]->Value = user->Username;
            comm->Parameters["@password"]->Value = user->Password;
            comm->Parameters["@gender"]->Value = Char::ToString(user->Gender);
            comm->Parameters["@birthday"]->Value = user->Birthday;
            comm->Parameters["@profile"]->Value = Char::ToString(user->Profile);
            if (user->Photo == nullptr)
                comm->Parameters["@photo"]->Value = DBNull::Value;
            else
                comm->Parameters["@photo"]->Value = user->Photo;
            comm->Parameters["@customer_points"]->Value = ((Customer^)user)->CustomerPoints;
            comm->Parameters["@address"]->Value = ((Customer^)user)->Address;

            comm->Parameters["@id"]->Value = user->Id;
            /* Paso 3: Se ejecuta la sentencia */
            output_id = comm->ExecuteNonQuery();
        }
        else if (user->GetType() == Announcer::typeid) {
            strCmd = "dbo.usp_UpdatePerson_Announcer";
            comm = gcnew SqlCommand(strCmd, conn);
            comm->CommandType = System::Data::CommandType::StoredProcedure;

            comm->Parameters->Add("@doc_number", System::Data::SqlDbType::VarChar, 15);
            comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@last_name", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 50);
            comm->Parameters->Add("@email", System::Data::SqlDbType::VarChar, 150);
            comm->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 20);
            comm->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 20);
            comm->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
            comm->Parameters->Add("@birthday", System::Data::SqlDbType::Date);
            comm->Parameters->Add("@profile", System::Data::SqlDbType::Char, 1);
            comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);
            comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@ad", System::Data::SqlDbType::Image);
            comm->Parameters->Add("@ad_in_sistem", System::Data::SqlDbType::Bit);
            comm->Parameters->Add("@number_picture_box", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@web_site_link", System::Data::SqlDbType::VarChar, 200);
            comm->Parameters->Add("@company_name", System::Data::SqlDbType::VarChar, 50);

            comm->Prepare();

            comm->Parameters["@doc_number"]->Value = user->DocNumber;
            comm->Parameters["@name"]->Value = user->Name;
            comm->Parameters["@last_name"]->Value = user->LastName;
            comm->Parameters["@phone_number"]->Value = user->PhoneNumber;
            comm->Parameters["@email"]->Value = user->Email;
            comm->Parameters["@username"]->Value = user->Username;
            comm->Parameters["@password"]->Value = user->Password;
            comm->Parameters["@gender"]->Value = Char::ToString(user->Gender);
            comm->Parameters["@birthday"]->Value = user->Birthday;
            comm->Parameters["@profile"]->Value = Char::ToString(user->Profile);
            if (user->Photo == nullptr)
                comm->Parameters["@photo"]->Value = DBNull::Value;
            else
                comm->Parameters["@photo"]->Value = user->Photo;
            if (((Announcer^)user)->Ad == nullptr)
                comm->Parameters["@ad"]->Value = DBNull::Value;
            else
                comm->Parameters["@ad"]->Value = ((Announcer^)user)->Ad;

            comm->Parameters["@ad_in_sistem"]->Value = Convert::ToBoolean(((Announcer^)user)->AdInSistem);
            comm->Parameters["@number_picture_box"]->Value = Convert::ToInt32(((Announcer^)user)->NumberPictureBox);
            comm->Parameters["@web_site_link"]->Value = ((Announcer^)user)->WebSiteLink;
            comm->Parameters["@company_name"]->Value = ((Announcer^)user)->CompanyName;
            comm->Parameters["@id"]->Value = user->Id;
            /* Paso 3: Se ejecuta la sentencia */
            output_id = comm->ExecuteNonQuery();
        }
        else
        {
            strCmd = "dbo.[usp_UpdatePerson_Store_Manager]";
            comm = gcnew SqlCommand(strCmd, conn);
            comm->CommandType = System::Data::CommandType::StoredProcedure;

            comm->Parameters->Add("@doc_number", System::Data::SqlDbType::VarChar, 15);
            comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@last_name", System::Data::SqlDbType::VarChar, 100);
            comm->Parameters->Add("@phone_number", System::Data::SqlDbType::VarChar, 50);
            comm->Parameters->Add("@email", System::Data::SqlDbType::VarChar, 150);
            comm->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 20);
            comm->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 20);
            comm->Parameters->Add("@gender", System::Data::SqlDbType::Char, 1);
            comm->Parameters->Add("@birthday", System::Data::SqlDbType::Date);
            comm->Parameters->Add("@profile", System::Data::SqlDbType::Char, 1);
            comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);
            comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@goal", System::Data::SqlDbType::Decimal);
            comm->Parameters["@goal"]->Precision = 10;
            comm->Parameters["@goal"]->Scale = 2;
            comm->Parameters->Add("@salary", System::Data::SqlDbType::VarChar, 15);
            comm->Parameters->Add("@store", System::Data::SqlDbType::VarChar, 50);
            comm->Parameters->Add("@status", System::Data::SqlDbType::VarChar, 15);

            comm->Prepare();

            comm->Parameters["@doc_number"]->Value = user->DocNumber;
            comm->Parameters["@name"]->Value = user->Name;
            comm->Parameters["@last_name"]->Value = user->LastName;
            comm->Parameters["@phone_number"]->Value = user->PhoneNumber;
            comm->Parameters["@email"]->Value = user->Email;
            comm->Parameters["@username"]->Value = user->Username;
            comm->Parameters["@password"]->Value = user->Password;
            comm->Parameters["@gender"]->Value = Char::ToString(user->Gender);
            comm->Parameters["@birthday"]->Value = user->Birthday;
            comm->Parameters["@profile"]->Value = Char::ToString(user->Profile);
            if (user->Photo == nullptr)
                comm->Parameters["@photo"]->Value = DBNull::Value;
            else
                comm->Parameters["@photo"]->Value = user->Photo;

            comm->Parameters["@goal"]->Value = ((StoreManager^)user)->Goals;
            comm->Parameters["@salary"]->Value = ((StoreManager^)user)->Salary;
            comm->Parameters["@store"]->Value = ((StoreManager^)user)->Store;
            comm->Parameters["@status"]->Value = ((StoreManager^)user)->Status;

            comm->Parameters["@id"]->Value = user->Id;
            /* Paso 3: Se ejecuta la sentencia */
            output_id = comm->ExecuteNonQuery();
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (conn != nullptr) conn->Close();
    }

    return output_id;


}
int SalesPersistance::Persistance::DeletePerson(int iduser)
{
    //return 0;

    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        /* 1er paso: Se obtiene la conexión */
        SqlConnection^ conn = GetConnection();

        /* 2do paso: Se prepara la sentencia */
        SqlCommand^ comm = gcnew SqlCommand();
        comm->Connection = conn;
        String^ strCmd;
        strCmd = "dbo.usp_Delete_Person";
        comm = gcnew SqlCommand(strCmd, conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@id", System::Data::SqlDbType::Int);

        comm->Prepare();

        comm->Parameters["@id"]->Value = iduser;
        /* Paso 3: Se ejecuta la sentencia */
        output_id = comm->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}
Person^ SalesPersistance::Persistance::Login(String^ username, String^ password)
{
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí

    Person^ person;
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    try {
        //Paso 1: Se obtiene la conexión
        conn = GetConnection();
        //Paso 2: Se prepara la sentencia
        comm = gcnew SqlCommand("dbo.usp_ValidateUser", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@username", System::Data::SqlDbType::VarChar, 20);
        comm->Parameters->Add("@password", System::Data::SqlDbType::VarChar, 20);
        comm->Prepare();
        comm->Parameters["@username"]->Value = username;
        comm->Parameters["@password"]->Value = password;
        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();
        //Paso 4: Se procesan los resultados        
        if (reader->Read()) {
            if (reader["profile"]->ToString()->Equals("S")) {
                Customer^ p = gcnew Customer();
                p->Id = Convert::ToInt32(reader["id"]->ToString());
                p->Name = reader["name"]->ToString();
                p->LastName = reader["last_name"]->ToString();
                if (!DBNull::Value->Equals(reader["doc_number"]))p->DocNumber = reader["doc_number"]->ToString();
                if (!DBNull::Value->Equals(reader["phone_number"]))p->PhoneNumber = reader["phone_number"]->ToString();
                if (!DBNull::Value->Equals(reader["email"]))p->Email = reader["email"]->ToString();
                if (!DBNull::Value->Equals(reader["username"]))p->Username = reader["username"]->ToString();
                if (!DBNull::Value->Equals(reader["password"]))p->Password = reader["password"]->ToString();
                if (!DBNull::Value->Equals(reader["birthday"])) {
                    DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
                    p->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
                }
                if (!DBNull::Value->Equals(reader["gender"])) p->Gender = reader["gender"]->ToString()[0];
                if (!DBNull::Value->Equals(reader["photo"]))p->Photo = (array<Byte>^)reader["photo"];
                if (!DBNull::Value->Equals(reader["profile"])) p->Profile = reader["profile"]->ToString()[0];

                if (!DBNull::Value->Equals(reader["customer_points"])) p->CustomerPoints = Convert::ToInt32(reader["customer_points"]->ToString());
                if (!DBNull::Value->Equals(reader["address"])) p->Address = reader["address"]->ToString();
                person = p; // Se puede asignar a una variable genérica cualquier objeto derivado.
            }
            else if (reader["profile"]->ToString()->Equals("A")) {
                Announcer^ p = gcnew Announcer();
                p->Id = Convert::ToInt32(reader["id"]->ToString());
                p->Name = reader["name"]->ToString();
                p->LastName = reader["last_name"]->ToString();
                if (!DBNull::Value->Equals(reader["doc_number"]))p->DocNumber = reader["doc_number"]->ToString();
                if (!DBNull::Value->Equals(reader["phone_number"]))p->PhoneNumber = reader["phone_number"]->ToString();
                if (!DBNull::Value->Equals(reader["email"]))p->Email = reader["email"]->ToString();
                if (!DBNull::Value->Equals(reader["username"]))p->Username = reader["username"]->ToString();
                if (!DBNull::Value->Equals(reader["password"]))p->Password = reader["password"]->ToString();
                if (!DBNull::Value->Equals(reader["birthday"])) {
                    DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
                    p->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
                }
                if (!DBNull::Value->Equals(reader["gender"])) p->Gender = reader["gender"]->ToString()[0];
                if (!DBNull::Value->Equals(reader["photo"]))p->Photo = (array<Byte>^)reader["photo"];
                if (!DBNull::Value->Equals(reader["profile"])) p->Profile = reader["profile"]->ToString()[0];

                if (!DBNull::Value->Equals(reader["ad"])) p->Ad = (array<Byte>^)reader["ad"];
                if (!DBNull::Value->Equals(reader["ad_in_sistem"]))p->AdInSistem = Convert::ToBoolean(reader["ad_in_sistem"]->ToString());
                if (!DBNull::Value->Equals(reader["number_picture_box"]))p->NumberPictureBox = Convert::ToInt32(reader["number_picture_box"]->ToString());
                if (!DBNull::Value->Equals(reader["web_site_link"])) p->WebSiteLink = reader["web_site_link"]->ToString();
                if (!DBNull::Value->Equals(reader["company_name"])) p->CompanyName = reader["company_name"]->ToString();

                person = p; // Se puede asignar a una variable genérica cualquier objeto derivado.
            }
            else if (reader["profile"]->ToString()->Equals("M")) {
                StoreManager^ p = gcnew StoreManager();
                // Completar la carga de datos del StoreManager
                p->Id = Convert::ToInt32(reader["id"]->ToString());
                p->Name = reader["name"]->ToString();
                p->LastName = reader["last_name"]->ToString();
                if (!DBNull::Value->Equals(reader["doc_number"]))p->DocNumber = reader["doc_number"]->ToString();
                if (!DBNull::Value->Equals(reader["phone_number"]))p->PhoneNumber = reader["phone_number"]->ToString();
                if (!DBNull::Value->Equals(reader["email"]))p->Email = reader["email"]->ToString();
                if (!DBNull::Value->Equals(reader["username"]))p->Username = reader["username"]->ToString();
                if (!DBNull::Value->Equals(reader["password"]))p->Password = reader["password"]->ToString();
                if (!DBNull::Value->Equals(reader["birthday"])) {
                    DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
                    p->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
                }
                if (!DBNull::Value->Equals(reader["gender"])) p->Gender = reader["gender"]->ToString()[0];
                if (!DBNull::Value->Equals(reader["photo"]))p->Photo = (array<Byte>^)reader["photo"];
                if (!DBNull::Value->Equals(reader["profile"])) p->Profile = reader["profile"]->ToString()[0];

                if (!DBNull::Value->Equals(reader["goal"])) p->Goals = Convert::ToDouble(reader["goal"]->ToString());
                if (!DBNull::Value->Equals(reader["salary"])) p->Salary = reader["salary"]->ToString();
                if (!DBNull::Value->Equals(reader["store"])) p->Store = reader["store"]->ToString();
                if (!DBNull::Value->Equals(reader["status"])) p->Status = reader["status"]->ToString();

                person = p; // Se puede asignar a una variable genérica cualquier objeto derivado.
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión. Nunca se olviden del paso 5.
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return person;
}

int SalesPersistance::Persistance::AddWishList(int productID, int customerId)
{
    
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        /* 1er paso: Se obtiene la conexión */
        conn = GetConnection();

        /* 2do paso: Se prepara la sentencia */
        comm = gcnew SqlCommand();
        comm->Connection = conn;
        String^ strCmd;
        
            strCmd = "dbo.usp_Add_Whist_List";
            comm = gcnew SqlCommand(strCmd, conn);

            comm->CommandType = System::Data::CommandType::StoredProcedure;
            comm->Parameters->Add("@customer_id", System::Data::SqlDbType::Int);
            comm->Parameters->Add("@product_id", System::Data::SqlDbType::Int);
   

            SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);

            outputIdParam->Direction = System::Data::ParameterDirection::Output;
            comm->Parameters->Add(outputIdParam);

            comm->Prepare();
            comm->Parameters["@customer_id"]->Value = customerId;
            comm->Parameters["@product_id"]->Value = productID;

            /* Paso 3: Se ejecuta la sentencia */
            comm->ExecuteNonQuery();

            /* Paso 4: Si se quiere procesar la salida. */
            output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);
        
        }
        catch (Exception^ ex) {
            throw ex;
        }
        finally {
            /* Paso 5: Cerramos la conexión con la BD */
            if (conn != nullptr) conn->Close();
        }        
            return output_id;
}

int SalesPersistance::Persistance::DeleteWishList(int productID, int customerId)
{
    //return 0;
    SqlConnection^ conn;
    SqlCommand^ comm;
    int output_id;
    try {
        /* 1er paso: Se obtiene la conexión */
        SqlConnection^ conn = GetConnection();

        /* 2do paso: Se prepara la sentencia */
        SqlCommand^ comm = gcnew SqlCommand();
        comm->Connection = conn;
        String^ strCmd;
        strCmd = "dbo.usp_Delete_Whist_List";
        comm = gcnew SqlCommand(strCmd, conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@customer_id", System::Data::SqlDbType::Int);
        comm->Parameters->Add("@product_id", System::Data::SqlDbType::Int);


        comm->Prepare();

        comm->Parameters["@customer_id"]->Value = customerId;
        comm->Parameters["@product_id"]->Value = productID;


        /* Paso 3: Se ejecuta la sentencia */
        output_id = comm->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (conn != nullptr) conn->Close();
    }
    return output_id;
}

List<Product^>^ SalesPersistance::Persistance::QueryAllWishListByIdUser(int userId)
{
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Product^>^ WishList = gcnew List<Product^>();

    try {
        /* Paso 1: Obtener la conexión */
        conn = GetConnection();

        /* Paso 2: Preparar la sentencia */

        comm = gcnew SqlCommand("usp_QueryAllWhistListByIsUser", conn);


        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@customer_id", System::Data::SqlDbType::Int);

        comm->Prepare();
        comm->Parameters["@customer_id"]->Value = userId;

        //Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();


        /* Paso 4: Se procesan los resultados */
        while (reader->Read()) {
            Product^ c = gcnew Product();
            c->Id = Int32::Parse(reader["id"]->ToString());
            c->Name = reader["name"]->ToString();
            c->PriceMin = Convert::ToDouble(reader["price"]->ToString());
            c->Description = reader["description"]->ToString();

            WishList->Add(c);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return WishList;
}
List<Customer^>^ SalesPersistance::Persistance::QueryCustomerByNameOrByLastName(String^ name)
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Customer^>^ custoemerList = gcnew List<Customer^>();
    try {
        /* Paso 1: Obtener la conexión */
        conn = GetConnection();

        /* Paso 2: Preparar la sentencia */
        comm = gcnew SqlCommand("usp_QueryCustomerByNameOrByLastName", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar,100);

        comm->Prepare();
        comm->Parameters["@name"]->Value = name;
        // Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();

        /* Paso 4: Se procesan los resultados */
        while (reader->Read()) {
            Customer^ s = gcnew Customer();
            s->Id = Int32::Parse(reader["id"]->ToString());
            s->Username = reader["username"]->ToString();
            s->DocNumber = reader["doc_number"]->ToString();
            s->Name = reader["name"]->ToString();
            s->LastName = reader["last_name"]->ToString();
            s->Address = reader["address"]->ToString();
            s->PhoneNumber = reader["phone_number"]->ToString();
            s->Email = reader["email"]->ToString();
            s->Gender = reader["gender"]->ToString()[0];
            DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
            s->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
            custoemerList->Add(s);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return custoemerList;
}
List<Customer^>^ SalesPersistance::Persistance::QueryAllCustomer()
{
    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    List<Customer^>^ custoemerList = gcnew List<Customer^>();
    try {
        /* Paso 1: Obtener la conexión */
        conn = GetConnection();

        /* Paso 2: Preparar la sentencia */
        comm = gcnew SqlCommand("usp_QueryAllCustomer", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;

        // Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();

        /* Paso 4: Se procesan los resultados */
        while (reader->Read()) {
            Customer^ s = gcnew Customer();
            s->Id = Int32::Parse(reader["id"]->ToString());
            s->Username = reader["username"]->ToString();
            s->DocNumber = reader["doc_number"]->ToString();
            s->Name = reader["name"]->ToString();
            s->LastName = reader["last_name"]->ToString();
            s->Address = reader["address"]->ToString();
            s->PhoneNumber = reader["phone_number"]->ToString();
            s->Email = reader["email"]->ToString();
            s->Gender = reader["gender"]->ToString()[0];
            DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
            s->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
            custoemerList->Add(s);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return custoemerList;
}
Customer^ SalesPersistance::Persistance::QueryCustomerById(int customerId)
{
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí

    SqlConnection^ conn;
    SqlCommand^ comm;
    SqlDataReader^ reader;
    //List<Customer^>^ custoemerList = gcnew List<Customer^>();
    Customer^ customer;
    try {
        /* Paso 1: Obtener la conexión */
        conn = GetConnection();

        /* Paso 2: Preparar la sentencia */
        comm = gcnew SqlCommand("usp_QueryCustomerById", conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        comm->Parameters->Add("@id", System::Data::SqlDbType::Int);

        comm->Prepare();
        comm->Parameters["@id"]->Value = customerId;
        // Paso 3: Se ejecuta la sentencia
        reader = comm->ExecuteReader();

        /* Paso 4: Se procesan los resultados */
        while (reader->Read()) {
            Customer^ s = gcnew Customer();
            s->Id = Int32::Parse(reader["id"]->ToString());
            s->Username = reader["username"]->ToString();
            s->DocNumber = reader["doc_number"]->ToString();
            s->Name = reader["name"]->ToString();
            s->LastName = reader["last_name"]->ToString();
            s->Address = reader["address"]->ToString();
            s->PhoneNumber = reader["phone_number"]->ToString();
            s->Email = reader["email"]->ToString();
            s->Gender = reader["gender"]->ToString()[0];
            DateTime^ sdate = safe_cast<DateTime^>(reader["birthday"]);
            s->Birthday = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);
            customer=(s);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        /* Paso 5: Cerramos la conexión con la BD */
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return customer;
}
#pragma endregion
