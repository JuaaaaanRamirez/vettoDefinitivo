#include "pch.h"

#include "SalesController.h"

using namespace SalesPersistance;

// For Product
int SalesController::Controller::AddProduct(Product^ product)
{
   /* //ver que no se repita el id d eproduct ingresante
    for (int i = 0; i < productList->Count; i++) {
        if (product->Id == productList[i]->Id) return -1;
    }
    productList->Add(product);
    //Persistance::PersistBinary("products.bin", productList);
    Persistance::AddProduct(product);*/
    return Persistance::AddProduct(product);;
}
Product^ SalesController::Controller::QueryProductById(int productId)
{
    //productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    /*productList = Persistance::QueryAllActiveProducts();
    for (int i = 0; i < productList->Count; i++)
        if (productList[i]->Id == productId)
            return productList[i];
    return nullptr;*/
    return  Persistance::QueryProductById(productId);
}
List<Product^>^ SalesController::Controller::QueryAllProducts()
{
    //productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    return  Persistance::QueryAllActiveProducts();;
}
int SalesController::Controller::UpdateProduct(Product^ product)
{
    return Persistance::UpdateProduct(product);
}
int SalesController::Controller::DeleteProduct(int productId)
{
    return Persistance::DeleteProduct(productId);;
}
List<Product^>^ SalesController::Controller::QueryProductsByNameOrDescription(String^ nameDesc)
{
    //productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    /*productList = Persistance::QueryAllActiveProducts();
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(nameDesc) || productList[i]->Description->Contains(nameDesc))
            newProductList->Add(productList[i]);
    }
    return newProductList;*/
    return Persistance::QueryProductsByNameOrDescription(nameDesc);
}
List<Product^>^ SalesController::Controller::QueryProductsByNameOrCareer(String^ nameCaree)
{
    //productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    productList = Persistance::QueryAllActiveProducts();                //SON MENOS LAS INSTRUCCIONES CON ESTE METODO QUE SI HACEMOS UN STORE PROCEDURE
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Name->Contains(nameCaree) || productList[i]->Career->Contains(nameCaree))
            newProductList->Add(productList[i]);
    }
    return newProductList;
}
List<Product^>^ SalesController::Controller::QueryProductsByStockLimit(int stock)
{
    /*productList = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    List<Product^>^ newProductList = gcnew List<Product^>();
    for (int i = 0; i < productList->Count; i++) {
        if (productList[i]->Stock <= stock)
            newProductList->Add(productList[i]);
    }
    return newProductList;*/
    return Persistance::QueryProductsByStockLimit(stock);
}
List<Product^>^ SalesController::Controller::GetTopProducts()
{
            /*List<Product^>^ myProductList = Controller::QueryAllProducts();
            for (int i = 0; i < myProductList->Count; i++) // Look for!
                for (int j = i; j < myProductList->Count; j++)
                    if (myProductList[j]->Searches > myProductList[i]->Searches) {
                        Product^ temp = myProductList[i];
                        myProductList[i] = myProductList[j];
                        myProductList[j] = temp;
                    }
            return myProductList;*/
    return Persistance::GetTopProducts();
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
    //productListAux = (List<Product^>^)Persistance::LoadBinaryData("products.bin");
    productListAux=Persistance::QueryAllActiveProducts();                           //DESCOMENTAR CUNADO LAS VENTAS CON DB ESTE TERMINADA
    for (int i = 0; i < productListAux->Count; i++) {
        productListAux[i]->SalesByTime = 0;
    }
    for (int i = 0; i < ListSellsByTime->Count; i++) // Look for!
        for (int j = 0; j < ListSellsByTime[i]->SaleDetails->Count; j++) {
            for (int k = 0; k < productListAux->Count; k++) {
                if (ListSellsByTime[i]->SaleDetails[j]->Product->Id == productListAux[k]->Id) {
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




// For Person
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
    // TODO: Insertar una instrucci???n "return" aqu???
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
    
    /*personList->Add(user);
    Persistance::PersistBinary("users.bin", personList);
    return Int32(user->Id);*/

    return Persistance::AddPerson(user);
}
Person^ SalesController::Controller::QueryUserById(int userId)
{
    /*personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    for (int i = 0; i < personList->Count; i++)
        if (personList[i]->Id == userId)
            return personList[i];
    return nullptr;*/
    //if (userId == 0) return nullptr;
    return Persistance::QueryPersonById(userId);
}
List<Person^>^ SalesController::Controller::QueryAllUsers()
{
    //personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
//(List<Person^> ^ )Persistance::QueryAllActivePerson;
    //personList = Persistance::QueryAllActivePerson();
    return Persistance::QueryAllActivePerson();
}
int SalesController::Controller::UpdateUser(Person^ user)
{
    /*for (int i = 0; i < personList->Count; i++)
        if (personList[i]->Id == user->Id) {
            personList[i] = user;
            Persistance::PersistBinary("users.bin", personList);
            return user->Id;
        }
    return 0;*/
    return Persistance::UpdatePerson(user);
}
int SalesController::Controller::DeleteUser(int userId)
{
    /*for (int i = 0; i < personList->Count; i++)
        if (personList[i]->Id == userId) {
            personList->RemoveAt(i);
            Persistance::PersistBinary("users.bin", personList);
            return userId;
        }
    return 0;*/
    return Persistance::DeletePerson(userId);
}

List<Customer^>^ SalesController::Controller::QueryAllCustomer()
{
    /*personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    List<Customer^>^ activeCustomerList = gcnew List<Customer^>();
    for (int i = 0; i < personList->Count; i++) {
        if ( personList[i]->GetType() == Customer::typeid) {
            activeCustomerList->Add((Customer^)personList[i]);
            
        }
    }
   
    
    return activeCustomerList;*/
    
    return Persistance::QueryAllCustomer();
}

List<StoreManager^>^ SalesController::Controller::QueryAllStoreManager()
{
    //personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    personList = Persistance::QueryAllActivePerson();                            //???????????????????
    List<StoreManager^>^ activeStoreManagerList = gcnew List<StoreManager^>();
    for (int i = 0; i < personList->Count; i++) {
        if (personList[i]->GetType() == StoreManager::typeid) {
            activeStoreManagerList->Add((StoreManager^)personList[i]);

        }
    }


    return activeStoreManagerList;
}

List<Announcer^>^ SalesController::Controller::QueryAllAnnouncer(){
    //personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    personList = Persistance::QueryAllActivePerson();
    List<Announcer^>^ activeAnnouncerList = gcnew List<Announcer^>();

    for (int i = 0; i < personList->Count; i++) {
        if (personList[i]->GetType() == Announcer::typeid) {
            activeAnnouncerList->Add((Announcer^)personList[i]);

        }
    }


    return activeAnnouncerList;

    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucci??n "return" aqu??
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
    // TODO: Insertar una instrucci??n "return" aqu??

}

Person^ SalesController::Controller::QueryPersonByCredentials(String^ username, String^ password)
{
    /*personList = (List<Person^>^)Persistance::LoadBinaryData("users.bin");
    for (int i = 0; i < personList->Count; i++) {
        if (personList[i]->Username->Equals(username) &&
            personList[i]->Password->Equals(password)) {
            return personList[i];
        }
    }
    return nullptr;*/
    return Persistance::Login(username, password);
    
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucci??n "return" aqu??
}

int SalesController::Controller::FindNewId(Person^ user)
{
    int i = 0, numMayor;
    personList = (List<Person^>^)Persistance::QueryAllActivePerson();
    numMayor = personList[i]->Id;
    for (i = 0; i < personList->Count; i++) {

        if (numMayor < personList[i]->Id) {
            numMayor = personList[i]->Id;
        }
    }
    return numMayor + 1;
}

List<Customer^>^ SalesController::Controller::QueryCustomerByNameOrByLastName(String^ name)
{
    return Persistance::QueryCustomerByNameOrByLastName(name);
}

Customer^ SalesController::Controller::QueryCustomerById(int customerId)
{
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucci??n "return" aqu??
    return Persistance::QueryCustomerById(customerId);
}

bool SalesController::Controller::ExistUsername(String^ username)
{
    personList = (List<Person^>^)Persistance::QueryAllActivePerson();
    for (int i = 0; i < personList->Count; i++) {
        if (personList[i]->Username->Equals(username))
            return true;
    }

    return false;
}

bool SalesController::Controller::ExistDocNumber(String^ docnumber)
{
    personList = (List<Person^>^)Persistance::QueryAllActivePerson();
    for (int i = 0; i < personList->Count; i++) {
        if (personList[i]->DocNumber->Equals(docnumber))
            return true;
    }

    return false;
}

// For Sales
int SalesController::Controller::AddSale(Sale^ sale)
{
    /*// Amount
    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    */
    int count = Persistance::GetSalesCounter();
    if (count == 0) sale->Id = 0;
    else { sale->Id = count; }
    return Persistance::AddSale(sale);
}
Sale^ SalesController::Controller::QuerySaleById(int saleId)
{
    /*
    saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    for (int i = 0; i < saleList->Count; i++)
        if (saleList[i]->Id == saleId)
            return saleList[i];
    return nullptr;*/
    Sale^ mySale = Persistance::QuerySaleById(saleId);
    mySale->Customer = (Customer^)QueryUserById(mySale->Customer->Id);
    if (mySale->StoreManager->Id!=0) mySale->StoreManager = (StoreManager^)QueryUserById(mySale->StoreManager->Id);   //??????????????????
    return mySale;
}
List<Sale^>^ SalesController::Controller::QuerySaleByCustomerId(int customerId)
{
    return Persistance::QuerySaleByCustomerId(customerId);
}
Sale^ SalesController::Controller::QueryLastSale()
{
    /*saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    for (int i = 0; i < saleList->Count; i++)
        if (saleList[i]->Id == saleList->Count-1)
            return saleList[i];
    return nullptr;*/
    return Persistance::QueryLastSale();
}
List<Sale^>^ SalesController::Controller::QueryAllSales()
{
    /*saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    return saleList;*/
    List<Sale^>^ listSales = Persistance::QueryAllSales();
    return listSales;
}
int SalesController::Controller::UpdateSale(Sale^ sale)
{
    return Persistance::UpdateSale(sale);
}
int SalesController::Controller::DeleteSale(int saleId)
{
    return Persistance::DeleteSale(saleId);
}

// For Sale Details
List<SaleDetail^>^ SalesController::Controller::QuerySalesDetailsBySaleId(int saleid)
{
    return Persistance::QuerySalesDetailsBySaleId(saleid);
}
SaleDetail^ SalesController::Controller::QuerySaleDetailBySaleIdAndProductId(int saleid, int productid)
{
    return Persistance::QuerySaleDetailBySaleIdAndProductId(saleid, productid);
}
int SalesController::Controller::UpdateSaleDetail(SaleDetail^ saleDetail, int saleid)
{
    return Persistance::UpdateSaleDetail(saleDetail, saleid);
}
int SalesController::Controller::DeleteSaleDetail(int saleid, int productid)
{
    return Persistance::DeleteSaleDetail(saleid, productid);
}
int SalesController::Controller::AddWishList(int productID, int customerId)
{
    return Persistance::AddWishList(productID,customerId);
}
int SalesController::Controller::DeleteWishList(int productID, int customerId)
{
    return Persistance::DeleteWishList(productID,customerId);
}
List<Product^>^ SalesController::Controller::QueryAllWishListByIdUser(int userId)
{
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucci??n "return" aqu??
    return Persistance::QueryAllWishListByIdUser(userId);


}
int SalesController::Controller::AddSaleDetail(SaleDetail^ saleDetail, int saleId)
{
    return Persistance::AddSaleDetail(saleDetail, saleId);
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
    //saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    
    saleList = Persistance::QueryAllSales();
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
    //return Persistance::DaySalesList(DateTime DateDay)
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

    //saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    saleList = Persistance::QueryAllSales();
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

    //saleList = (List<Sale^>^)Persistance::LoadBinaryData("sales.bin");
    saleList = Persistance::QueryAllSales();

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


