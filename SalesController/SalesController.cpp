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
List<Product^>^ SalesController::Controller::QueryProductsByStockLimit(int stock)
{
    productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Stock <= stock)
            newProductList->Add(productList[i]);
    }
    return newProductList;
}
//...for products to order
List<Product^>^ SalesController::Controller::GetListProductOrderBySearches(List<Product^>^ ListProductByTime)
{
    for (int i = 0; i < ListProductByTime->Count; i++) // Look for!
        for (int j = i; j < ListProductByTime->Count; j++)
            if (ListProductByTime[j]->Searches > ListProductByTime[i]->Searches) {
                Product^ temp = ListProductByTime[i];
                ListProductByTime[i] = ListProductByTime[j];
                ListProductByTime[j] = temp;
            }
    return ListProductByTime;
}
List<Product^>^ SalesController::Controller::GetListProductOrderBySells(List<Sale^>^ ListSellsByTime)//nuestro productList
{
    List<Product^>^ productListAux = gcnew  List<Product^>();

    productListAux = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    for (int i = 0; i < productListAux->Count; i++) {
        productListAux[i]->SalesByTime = 0;
    }
    for (int i = 0; i < ListSellsByTime->Count; i++) // Look for!
        for (int j = 0; j < ListSellsByTime[i]->SaleDetails->Count; j++) {
            for (int k = 0; k < productListAux->Count; k++) {
                if (ListSellsByTime[i]->SaleDetails[j]->Id == productListAux[k]->Id) {
                    productListAux[k]->SalesByTime += ListSellsByTime[i]->SaleDetails[j]->Quantity;
                    break;
                }
            }

        }

    for (int i = 0; i < productListAux->Count; i++) // Look for!
        for (int j = i; j < productListAux->Count; j++)
            if (productListAux[j]->SalesByTime > productListAux[i]->SalesByTime) {
                Product^ temp = productListAux[i];
                productListAux[i] = productListAux[j];
                productListAux[j] = temp;
            }
    return productListAux; //Ya ordenado por numero de ventas
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

List<StoreManager^>^ SalesController::Controller::QueryAllStoreManager()
{
    personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    List<StoreManager^>^ activeStoreManagerList = gcnew List<StoreManager^>();
    for (int i = 0; i < personList->Count; i++) {
        if (personList[i]->GetType() == StoreManager::typeid) {
            activeStoreManagerList->Add((StoreManager^)personList[i]);

        }
    }


    return activeStoreManagerList;
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

bool SalesController::Controller::ExistUsername(String^ username)
{
    personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    for (int i = 0; i < personList->Count; i++) {
        if (personList[i]->Username->Equals(username))
            return true;
    }

    return false;
}

bool SalesController::Controller::ExistDocNumber(String^ docnumber)
{
    personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    for (int i = 0; i < personList->Count; i++) {
        if (personList[i]->DocNumber->Equals(docnumber))
            return true;
    }

    return false;
}

// For Sales
int SalesController::Controller::AddSale(Sale^ sale)
{
    // Amount
    if (saleList->Count == 0) sale->Id = 0;
    else { sale->Id = saleList->Count; }
    saleList->Add(sale);
    Persistance::PersistBinary("sales.bin", saleList);
    return Int32(sale->Id);
}
Sale^ SalesController::Controller::QuerySaleById(int saleId)
{

    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    for (int i = 0; i < saleList->Count; i++)
        if (saleList[i]->Id == saleId)
            return saleList[i];
    return nullptr;
}
Sale^ SalesController::Controller::QueryLastSale()
{
    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    for (int i = 0; i < saleList->Count; i++)
        if (saleList[i]->Id == saleList->Count-1)
            return saleList[i];
    return nullptr;
}
List<Sale^>^ SalesController::Controller::QueryAllSales()
{
    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    return saleList;
}
int SalesController::Controller::UpdateSale(Sale^ sale)
{
    for (int i = 0; i < saleList->Count; i++)
        if (saleList[i]->Id == sale->Id) {
            saleList[i] = sale;
            Persistance::PersistBinary("sales.bin", saleList);
            return sale->Id;
        }
    return -1;
}
int SalesController::Controller::DeleteSale(int saleId)
{
    for (int i = 0; i < saleList->Count; i++)
        if (saleList[i]->Id == saleId) {
            saleList->RemoveAt(i);
            Persistance::PersistBinary("sales.bin", saleList);
            return saleId;
        }
    return 0;
}

/*int SalesController::Controller::AddSaleDetail(SaleDetail^ saleDetail, int saleId)
{
    // Repeat?
    for (int i = 0; i < saleList[saleId]->SoldProducts->Count; i++) {
        if (saleDetail->Id == saleList[saleId]->SoldProducts[i]->Id) return -1;
    }
    // Amount
    saleList[saleId]->SoldProducts->Add(saleDetail);
    Persistance::PersistBinary("sales.bin", saleList);
    return Int32(saleDetail->Id);
}*/


// for sales...Juan
//for sales
List<Sale^>^ SalesController::Controller::DaySalesList(DateTime DateDay)
{
    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    List<Sale^>^ ListSalesByTime = gcnew List<Sale^>();

    for (int i = 0; i < saleList->Count; i++) {
        if (DateTime::Compare(Convert::ToDateTime(saleList[i]->SaleDate).Date, DateDay.Date) == 0) ListSalesByTime->Add(saleList[i]);
    }
    return ListSalesByTime; //puede ser nulo
    /*
    int dayDate, monthDate, yearDate;
    int dayList, monthList, yearList;

    dayDate = Convert::ToDateTime(Date).Day;
    monthDate = Convert::ToDateTime(Date).Month;
    yearDate= Convert::ToDateTime(Date).Year;

    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    List<Sale^>^ ListSalesByTime = gcnew List<Sale^>();

    for (int i = 0; i < saleList->Count; i++) {
        dayList = Convert::ToDateTime(saleList[i]->SaleDate).Day;
        monthList = Convert::ToDateTime(saleList[i]->SaleDate).Month;
        yearList = Convert::ToDateTime(saleList[i]->SaleDate).Year;

        if (dayDate == dayList && monthDate == monthList && yearDate == yearList) ListSalesByTime->Add(saleList[i]);
    }
    return ListSalesByTime; //puede ser nulo
    */
}
List<Sale^>^ SalesController::Controller::LastSevenDaysSalesList()
{
    DateTime lastWeek = (DateTime::Today.AddDays(-6)).Date;//desde la medianoche de hace 7 dias
    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    List<Sale^>^ ListSalesByTime = gcnew List<Sale^>();

    for (int i = 0; i < saleList->Count; i++) {

        if (DateTime::Compare(Convert::ToDateTime(saleList[i]->SaleDate), lastWeek) >= 0) ListSalesByTime->Add(saleList[i]);
    }
    return ListSalesByTime; //puede ser nulo
}
List<Sale^>^ SalesController::Controller::LastWeekSalesList()
{
    DateTime LastSunday = DateTime::Today;
    DateTime LastMonday;
    LastSunday = LastSunday.AddDays(-(int)(DateTime::Today.DayOfWeek));
    /*while (!((int)(LastSunday.DayOfWeek) == (0))) {    //?????????????????????????????????????????????????????
        LastSunday.AddDays(-1);
    }*/
    LastSunday.AddDays(1).Date;//domingo a media noche
    LastMonday = LastSunday.AddDays(-7);//lunes pasado a media noche

    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    List<Sale^>^ ListSalesByTime = gcnew List<Sale^>();

    for (int i = 0; i < saleList->Count; i++) {

        if ((DateTime::Compare(Convert::ToDateTime(saleList[i]->SaleDate), LastMonday) >= 0) && (DateTime::Compare(Convert::ToDateTime(saleList[i]->SaleDate), LastSunday) < 0)) ListSalesByTime->Add(saleList[i]);

    }
    return ListSalesByTime; //puede ser nulo
}
List<Sale^>^ SalesController::Controller::Last30DaysSalesList()
{
    DateTime lastMonth = (DateTime::Today.AddDays(-29)).Date;//desde la medianoche de hace 30 dias
    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    List<Sale^>^ ListSalesByTime = gcnew List<Sale^>();

    for (int i = 0; i < saleList->Count; i++) {

        if (DateTime::Compare(Convert::ToDateTime(saleList[i]->SaleDate), lastMonth) >= 0) ListSalesByTime->Add(saleList[i]);
    }
    return ListSalesByTime; //puede ser nulo
}
List<Sale^>^ SalesController::Controller::LastMonthSalesList()
{
    DateTime LastEndDayLastMonth = DateTime::Today.AddDays(-(DateTime::Today.Day));
    DateTime LastFirstDayLastMonth = LastEndDayLastMonth.AddDays(-(LastEndDayLastMonth.Day - 1)).Date;//primer dia del mes pasado a media noche
    LastEndDayLastMonth = LastEndDayLastMonth.AddDays(1).Date; //1er dia del mes actual a media noche.

    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    List<Sale^>^ ListSalesByTime = gcnew List<Sale^>();

    for (int i = 0; i < saleList->Count; i++) {

        if ((DateTime::Compare(Convert::ToDateTime(saleList[i]->SaleDate), LastFirstDayLastMonth) >= 0) && (DateTime::Compare(Convert::ToDateTime(saleList[i]->SaleDate), LastEndDayLastMonth) < 0)) ListSalesByTime->Add(saleList[i]);

    }
    return ListSalesByTime; //puede ser nulo
}
List<Sale^>^ SalesController::Controller::SalesListByRangeOfTime(DateTime inferiorLimit, DateTime superiorLimit)
{
    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    List<Sale^>^ ListSalesByTime = gcnew List<Sale^>();

    for (int i = 0; i < saleList->Count; i++) {

        if ((DateTime::Compare(Convert::ToDateTime(saleList[i]->SaleDate), inferiorLimit) >= 0) && (DateTime::Compare(Convert::ToDateTime(saleList[i]->SaleDate), superiorLimit) < 0)) ListSalesByTime->Add(saleList[i]);
    }
    return ListSalesByTime; //puede ser nulo
}


