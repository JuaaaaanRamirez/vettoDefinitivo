/**
 * Project Untitled
 */


#pragma once
#include "StoreManager.h"
#include "Customer.h"
using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class Sale {
    public:
        property int Id;
        property String^ TxnDate;
        property char Status;
        property double Total;
        property String^ Address;
        property char PaidMode;
        property String^ SaleDate;
        //La asociación se convierte en un atributo
        property StoreManager^ StoreManager;
        property Customer^ Customer;

    };
}