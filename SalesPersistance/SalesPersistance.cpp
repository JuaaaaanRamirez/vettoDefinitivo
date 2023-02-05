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
        if (persistObject->GetType() == List<DeliveryMan^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<DeliveryMan^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
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
        if (fileName->Equals("salesmen.xml")) {
            res = gcnew List<DeliveryMan^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<DeliveryMan^>::typeid);
                res = (List<DeliveryMan^>^)serializadorXML->Deserialize(sr);
            }
        }
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
        if (fileName->Equals("salesmen.bin")) {
            res = gcnew List<DeliveryMan^>();
            if (File::Exists(fileName)) {
                res = (List<DeliveryMan^>^)formateador->Deserialize(input);
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




