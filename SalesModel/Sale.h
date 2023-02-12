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
        property String^ SaleDate;
        property String^ Address;
        property String^ Reference;
        property char Status;
        property double Total;
        property char PaidMode;

        //La asociación se convierte en un atributo
        property StoreManager^ StoreManager;
        property Customer^ Customer;
        property List<SaleDetail^>^ SoldProducts;
    };
}