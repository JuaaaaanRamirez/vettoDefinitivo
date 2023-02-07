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

		// Instances
		static List<Product^>^ productList = gcnew List<Product^>();						// ProductList
		static List<Customer^>^ customerList = gcnew List<Customer^>();						// Customer List
		static List<Announcer^>^ announcerList = gcnew List<Announcer^>();					// AnnoucerList
		static List<StoreManager^>^ storeManagerList = gcnew List<StoreManager^>();			// Store Manager List
		static List<Person^>^ personList = gcnew List<Person^>();						    // Person List


		static array<String^>^ carrerArr = { " mecatronica ", " civil ", " industrial ", " informatica ", " arquitectura ", " electronica ", " fisica "}; // Arreglo de carreras como cadenas de texto.
		static List<String^>^ careerList = gcnew List<String^>(carrerArr);  // lista de todas las carreras con las que trabaja el sistema
		

	public:
		
		//Métodos CRUD de Product (C:Create, R:Request, U:Update, D:Delete)

		static int AddProduct(Product^ product);
		static Product^ QueryProductById(int productId);
		static List<Product^>^ QueryAllProducts();
		static int UpdateProduct(Product^ product);
		static int DeleteProduct(int productId);
		static List<Product^>^ QueryProductsByNameOrDescription(String^ nameDesc);
		static List<Product^>^ QueryProductsByNameOrCareer(String^ nameCaree);

		//Métodos CRUD de carreras (C:Create, R:Request, U:Update, D:Delete)
		static List<String^>^ QueryAllCareers();


		// CRUD Methods to User (C:Create, R:Request, U:Update, D:Delete)
		static int AddUser(Person^ user);
		static Person^ QueryUserById(int userId);
		static List<Person^>^ QueryAllUsers();
		static int UpdateUser(Person^ user);
		static int DeleteUser(int userId);
		//static List<Person^>^ QueryUsersByNameOrLName(String^ nameLast);

		//static List<Person^>^ QueryUsersByNickNameOrPhoneNumber(String^ namePhone);
	
	};
}
