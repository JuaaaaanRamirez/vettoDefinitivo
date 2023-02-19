#include "pch.h"

#include "SalesPersistance.h"

using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace SalesModel;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;

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

//FOR DB.
SqlConnection^ SalesPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "AH564OB";
    conn->ConnectionString = "Server=200.16.7.140;Database=a20203924;User ID=a20203924;Password=" + password + ";"; //anteponer 'a' a nuestros codigos ....:C
    conn->Open();
    return conn;
}

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

int SalesPersistance::Persistance::AddProduct(Product^ p)
{
    /* SqlConnection^ conn;
     SqlCommand^ comm;
     int output_id;
     try {
         //Paso 1: Se obtiene la conexión
         conn = GetConnection();
         //Paso 2: Se prepara la sentencia
         comm = gcnew SqlCommand("dbo.usp_AddProduct", conn);
         comm->CommandType = System::Data::CommandType::StoredProcedure;
         comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
         comm->Parameters->Add("@description", System::Data::SqlDbType::VarChar, 500);
         comm->Parameters->Add("@price", System::Data::SqlDbType::Decimal, 10);
         comm->Parameters["@price"]->Precision = 10;
         comm->Parameters["@price"]->Scale = 2;
         comm->Parameters->Add("@stock", System::Data::SqlDbType::Int);
         comm->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
         comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);
         SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
         outputIdParam->Direction = System::Data::ParameterDirection::Output;
         comm->Parameters->Add(outputIdParam);
         comm->Prepare();
         comm->Parameters["@name"]->Value = p->Name;
         comm->Parameters["@description"]->Value = p->Description;
         comm->Parameters["@price"]->Value = p->PriceMin;
         comm->Parameters["@stock"]->Value = p->Stock;
         comm->Parameters["@status"]->Value = Char::ToString(p->Status);
         if (p->Photo == nullptr)
             comm->Parameters["@photo"]->Value = DBNull::Value;
         else
             comm->Parameters["@photo"]->Value = p->Photo;

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
     return output_id;*/

    return 1;
}
