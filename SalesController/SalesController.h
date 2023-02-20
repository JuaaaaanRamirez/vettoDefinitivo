#include "pch.h"

#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SalesModel;


namespace SalesController {
	public ref class Controller
	{
		// TODO: Agregue aquí los métodos de esta clase.
	private:
		static List<Product^>^ productList = gcnew List<Product^>(); // Variable de clase (global) para la lista de productos
		static List<Person^>^ personList = gcnew List<Person^>();		// List of people
		
		static List<Customer^>^ CustomerList = gcnew List<Customer^>();
		static List<Announcer^>^ AnnouncerList = gcnew List<Announcer^>();
		static List<StoreManager^>^ StoreManagerList = gcnew List<StoreManager^>();

		static array<String^>^ carrerArr = { " mecatronica ", " civil ", " industrial ", " informatica ", " arquitectura ", " electronica ", " fisica " }; // Arreglo de carreras como cadenas de texto.
		static List<String^>^ careerList = gcnew List<String^>(carrerArr);  // lista de todas las carreras con las que trabaja el sistema
		//static List<Advertisement^>^ AdsList = gcnew List<Advertisement^>();

		static List<Sale^>^ saleList = gcnew List<Sale^>();  // List of sales
		
		




	public:
		static List<String^>^ RelationatedCareers = gcnew List<String^>();
		static array<Byte>^ photo1 = gcnew array<Byte>(100000);
		static array<Byte>^ photo2 = gcnew array<Byte>(100000);
		static array<Byte>^ photo3 = gcnew array<Byte>(100000);
		static array<Byte>^ photo4 = gcnew array<Byte>(100000);

		//Métodos CRUD de Product (C:Create, R:Request, U:Update, D:Delete)
		static int AddProduct(Product^ product);
		static Product^ QueryProductById(int productId);
		static List<Product^>^ QueryAllProducts();
		static int UpdateProduct(Product^ product);
		static int DeleteProduct(int productId);
		static List<Product^>^ QueryProductsByNameOrDescription(String^ nameDesc);
		static List<Product^>^ QueryProductsByNameOrCareer(String^ nameCaree);  

		static List<Product^>^ QueryProductsByStockLimit(int stock);

		static List<Product^>^ GetTopProducts() {
			List<Product^>^ myProductList = Controller::QueryAllProducts();
			for (int i = 0; i < myProductList->Count; i++) // Look for!
				for (int j = i; j < myProductList->Count; j++)
					if (myProductList[j]->Searches > myProductList[i]->Searches) {
						Product^ temp = myProductList[i];
						myProductList[i] = myProductList[j];
						myProductList[j] = temp;
					}
			return myProductList;
		}

		static List<Product^>^ GetListProductOrderBySearches(List<Product^>^ ListProductByTime);//usualmente el argumento sera toda la lista de products
		static List<Product^>^ GetListProductOrderBySells(List<Sale^>^ ListProductByTime);


	

		//Métodos CRUD de carreras (C:Create, R:Request, U:Update, D:Delete)
		static List<String^>^ QueryAllCareers();



		static Person^ Login(String^ username, String^ password);

		static int AddCustomer(Customer^ customer);
		

		//JULIO

		// CRUD Methods to User (C:Create, R:Request, U:Update, D:Delete)
		static int AddUser(Person^ user);
		static Person^ QueryUserById(int userId);
		static List<Person^>^ QueryAllUsers();
		static int UpdateUser(Person^ user);
		static int DeleteUser(int userId);
		//static List<Person^>^ QueryUsersByNameOrLName(String^ nameLast);

		//static List<Person^>^ QueryUsersByNickNameOrPhoneNumber(String^ namePhone);
		static List<Customer^>^ QueryAllCustomer();
		static List<StoreManager^>^ QueryAllStoreManager();
		static List<Announcer^>^ QueryAllAnnouncer();
		static Customer^ QueryCustomerByCredentials(String^ username, String^ password);
		static Person^ QueryPersonByCredentials(String^ username, String^ password);
		static int FindNewId(Person^ user);

		static bool ExistUsername(String^ username);
		static bool ExistDocNumber(String^ docnumber);

		//Métodos CRUD de Sale (C:Create, R:Request, U:Update, D:Delete)
		static int AddSale(Sale^ sale);
		static Sale^ QuerySaleById(int saleId);
		static Sale^ QueryLastSale();
		static List<Sale^>^ QueryAllSales();
		static int UpdateSale(Sale^ sale);
		static int DeleteSale(int saleId);
		//static int AddSaleDetail(SaleDetail^ saleDetail, int saleId);

		       //metodos para extraer listas de ventas en distintos rangos de tiempo:
		static List <Sale^>^ DaySalesList(DateTime Date);
		static List <Sale^>^ LastSevenDaysSalesList();
		static List <Sale^>^ LastWeekSalesList();
		static List <Sale^>^ Last30DaysSalesList();
		static List <Sale^>^ LastMonthSalesList();
		static List <Sale^>^ SalesListByRangeOfTime(DateTime inferiorLimit, DateTime superiorLimit);

	};
}