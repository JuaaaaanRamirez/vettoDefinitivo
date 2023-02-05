/**
 * Project Untitled
 */


#pragma once
#include "DeliveryMan.h"
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
        property String^ Addrees;
        property char PaidMode;
        property String^ SaleDate;
        //La asociación se convierte en un atributo
        property DeliveryMan^ DeliveryMan;
        property Customer^ Customer;

    };
}