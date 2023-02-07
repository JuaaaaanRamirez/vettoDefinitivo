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
		static List<Customer^>^ CustomerList = gcnew List<Customer^>();
		static List<Announcer^>^ AnnounceRList = gcnew List<Announcer^>();
		static List<StoreManager^>^ StoreManagerList = gcnew List<StoreManager^>();
		static List<Person^>^ personList = gcnew List<Person^>();

		static array<String^>^ carrerArr = { " mecatronica ", " civil ", " industrial ", " informatica ", " arquitectura ", " electronica ", " fisica " }; // Arreglo de carreras como cadenas de texto.
		static List<String^>^ careerList = gcnew List<String^>(carrerArr);  // lista de todas las carreras con las que trabaja el sistema
		//static List<Advertisement^>^ AdsList = gcnew List<Advertisement^>();
		
		

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

		//Métodos CRUD de carreras (C:Create, R:Request, U:Update, D:Delete)

		static List<String^>^ QueryAllCareers();
		//JULIO
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