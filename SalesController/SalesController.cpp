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