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
	};
}
