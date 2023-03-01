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
		static List<Product^>^ QueryProductsByStockLimit(int stock);
		static int AddProduct(Product^ p); 
		static int UpdateProduct(Product^ p);
		static int DeleteProduct(int id);


		// For Sale
		static int AddSale(Sale^ sale);
		static Sale^ QuerySaleById(int saleId);
		static Sale^ QueryLastSale();
		static List<Sale^>^ QuerySaleByCustomerId(int customerId);
		static List<Sale^>^ QueryAllSales();
		static int UpdateSale(Sale^ sale);
		static int GetSalesCounter();
		static int DeleteSale(int saleId);


		// For SaleDetail
		static int AddSaleDetail(SaleDetail^ saleDetail, int saleId);
		static List<SaleDetail^>^ QuerySalesDetailsBySaleId(int saleid);
		static SaleDetail^ QuerySaleDetailBySaleIdAndProductId(int saleid, int productid);
		static int UpdateSaleDetail(SaleDetail^ saleDetail, int saleId);
		static int DeleteSaleDetail(int saleid, int productid);


		//For Person
		static List<Person^>^ QueryAllActivePerson();
		static Person^ QueryPersonById(int personId);
		static int AddPerson(Person^ user);
		static int UpdatePerson(Person^ user);
		static int DeletePerson(int iduser);
		static Person^ Login(String^ username, String^ password);
		
		static int AddWishList(int productID,int customerId);
		static int DeleteWishList(int productID, int customerId);
		static List<Product^>^ QueryAllWishListByIdUser(int userId);

	};
}
