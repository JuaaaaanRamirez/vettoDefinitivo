/**
 * Project Untitled
 */


#pragma once
#include "StoreManager.h"
#include "Customer.h"
#include "SaleDetail.h"

using namespace System;
using namespace System::Collections::Generic;


namespace SalesModel {
    [Serializable]
    public ref class Sale {
    public:
        property int Id;
        property char Status;  // Thsi is to SALE STATES
        property double Total;
        property String^ Address;
        property String^ Reference;
        property String^ PaidMode;
        property String^ SaleDate;
        //La asociación se convierte en un atributo
        property StoreManager^ StoreManager;
        property Customer^ Customer;
        //property List<SaleDetail^>^ SoldProducts;
        property List<SaleDetail^>^ SaleDetails;

        Sale() {
            SaleDetails = gcnew List<SaleDetail^>();
        }

    };
}