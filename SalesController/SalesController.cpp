#include "pch.h"

#include "SalesController.h"

using namespace SalesPersistance;

// For Product
int SalesController::Controller::AddProduct(Product^ product)
{
    //ver que no se repita el id d eproduct ingresante
    for (int i = 0; i < productList->Count; i++) {
        if (product->Id == productList[i]->Id) return -1;
    }
    productList->Add(product);
    Persistance::PersistBinary("products.bin", productList);
    return Int32(product->Id);
}
Product^ SalesController::Controller::QueryProductById(int productId)
{
    productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->Id == productId)
            return productList[i];
    return nullptr;
}
List<Product^>^ SalesController::Controller::QueryAllProducts()
{
    productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    return productList;
}
int SalesController::Controller::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->Id == product->Id) {
            productList[i] = product;
            Persistance::PersistBinary("products.bin", productList);
            return product->Id;
        }

    return -1;
}
int SalesController::Controller::DeleteProduct(int productId)
{
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->Id == productId) {
            productList->RemoveAt(i);
            Persistance::PersistBinary("products.bin", productList);
            return productId;
        }
    return 0;
}
List<Product^>^ SalesController::Controller::QueryProductsByNameOrDescription(String^ nameDesc)
{
    productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(nameDesc) || productList[i]->Description->Contains(nameDesc))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}
List<Product^>^ SalesController::Controller::QueryProductsByNameOrCareer(String^ nameCaree)
{
    productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(nameCaree) || productList[i]->Career->Contains(nameCaree))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}
List<String^>^ SalesController::Controller::QueryAllCareers()
{
    //careerList = (List<String^>^)Persistance::LoadXMLData("career.xml");
    return careerList;
}


Person^ SalesController::Controller::Login(String^ username, String^ password)
{
    /*
    Person^ person;
    if (username == "jbaldeon" && password == "password") {
        person = gcnew Person();
        person->Id = 1;
        person->Name = "Johan";
        person->Email = "johan.baldeon@pucp.edu.pe";
        //person->Address = "Elm Street 666";
        person->DocNumber = "66666666";
        person->PhoneNumber = "999999999";
        //person->Salary = 4500;
        person->Username = "jbaldeon";
    }

    return person;*/
    //return QueryCustomerByCredentials(username, password);
    return QueryPersonByCredentials(username, password);

    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucci�n "return" aqu�
}

int SalesController::Controller::AddCustomer(Customer^ customer)
{

    customer->Id = 3;
    //ver que no se repita el id d eproduct ingresante
    CustomerList->Add(customer);
    Persistance::PersistBinary("customer.bin", CustomerList);
    //return Int32(customer->Id);
    return 1;
}

// For Person (Users)
int SalesController::Controller::AddUser(Person^ user)
{
    //ver que no se repita el id d eproduct ingresante
    personList->Add(user);
    Persistance::PersistBinary("users.bin", personList);
    return Int32(user->Id);
}
Person^ SalesController::Controller::QueryUserById(int userId)
{
    personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    for (int i = 0; i < personList->Count; i++)
        if (personList[i]->Id == userId)
            return personList[i];
    return nullptr;
}
List<Person^>^ SalesController::Controller::QueryAllUsers()
{
    personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    return personList;
}
int SalesController::Controller::UpdateUser(Person^ user)
{
    for (int i = 0; i < personList->Count; i++)
        if (personList[i]->Id == user->Id) {
            personList[i] = user;
            Persistance::PersistBinary("users.bin", personList);
            return user->Id;
        }
    return 0;
}
int SalesController::Controller::DeleteUser(int userId)
{
    for (int i = 0; i < personList->Count; i++)
        if (personList[i]->Id == userId) {
            personList->RemoveAt(i);
            Persistance::PersistBinary("users.bin", personList);
            return userId;
        }
    return 0;
}

List<Customer^>^ SalesController::Controller::QueryAllCustomer()
{
    personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    List<Customer^>^ activeCustomerList = gcnew List<Customer^>();
    for (int i = 0; i < personList->Count; i++) {
        if ( personList[i]->GetType() == Customer::typeid) {
            activeCustomerList->Add((Customer^)personList[i]);
            
        }
    }
   
    
    return activeCustomerList;
    
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

List<Announcer^>^ SalesController::Controller::QueryAllAnnouncer(){
    personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    List<Announcer^>^ activeAnnouncerList = gcnew List<Announcer^>();

    for (int i = 0; i < personList->Count; i++) {
        if (personList[i]->GetType() == Announcer::typeid) {
            activeAnnouncerList->Add((Announcer^)personList[i]);

        }
    }


    return activeAnnouncerList;

    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}


Customer^ SalesController::Controller::QueryCustomerByCredentials(String^ username, String^ password)
{

    CustomerList = (List<Customer^>^)Persistance::LoadBinaryData("customer.bin");
    for (int i = 0; i < CustomerList->Count; i++) {
        if (CustomerList[i]->Username->Equals(username) &&
            CustomerList[i]->Password->Equals(password)) {
            return CustomerList[i];
        }
    }
    return nullptr;
    
//TRABAJO CON CASTING
    /*
    Customer^ c = gcnew Customer();
    Customer^ c_2 = gcnew Customer();
    Person^ p = gcnew Person();
    List <Person^>^ Lista = gcnew List<Person^>();
    List <Customer^>^ ListaCust = gcnew List<Customer^>();

    c->CustomerPoints = 100;
    Lista->Add(c);
    //(Customer^)Lista[0]->DocNumber = 758; //no tengo los atributos propios de customer,
                                            //solo de person(Lista[0] contiene la direccions de un Customer)
    c_2 = (Customer^)Lista[0];
    c_2->CustomerPoints = 50;

    ListaCust->Add((Customer^)Lista[0]);
    // c->CustomerPoints sigue siendo 100??? o se perdio el valor
    ListaCust[0]->CustomerPoints = 5;
    
    */
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí

}

Person^ SalesController::Controller::QueryPersonByCredentials(String^ username, String^ password)
{
    personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    for (int i = 0; i < personList->Count; i++) {
        if (personList[i]->Username->Equals(username) &&
            personList[i]->Password->Equals(password)) {
            return personList[i];
        }
    }
    return nullptr;
    
    
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int SalesController::Controller::FindNewId(Person^ user)
{
    int i = 0, numMayor;
    personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    numMayor = personList[i]->Id;
    for (i = 0; i < personList->Count; i++) {

        if (numMayor < personList[i]->Id) {
            numMayor = personList[i]->Id;
        }
    }
    return numMayor + 1;
}

