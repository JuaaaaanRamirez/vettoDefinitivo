#pragma once

using namespace System;
using namespace SalesModel;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;  //VINCULA BASE DE DATOS

namespace SalesPersistance {
	public ref class Persistance
	{
	public:
		static void Persist(String^ fileName, Object^ persistObject); //Método de clase o global
		static void PersistXML(String^ fileName, Object^ persistObject);
		static void PersistBinary(String^ fileName, Object^ persistObject);
		static Object^ LoadData(String^ fileName);
		static Object^ LoadXMLData(String^ fileName);
		static Object^ LoadBinaryData(String^ fileName);

		static SqlConnection^ GetConnection();
		static List<Product^>^ QueryAllActiveProducts();
		static Product^ QueryProductById(int productId); //redundande, basta con el QueryAllActiveProducts
		static List<Product^>^ QueryProductsByNameOrDescription(String^ value); //redundande, basta con el QueryAllActiveProducts
		
		
		static int AddProduct(Product^ p); 
		static int UpdateProduct(Product^ p);
		static int DeleteProduct(int id);
	};
}
