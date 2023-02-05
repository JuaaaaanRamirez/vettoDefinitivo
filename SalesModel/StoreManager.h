/**
 * Clase que modela Al que administra las ventas
 */


#pragma once
#include "Employee.h"

using namespace System;
namespace SalesModel {
    [Serializable]
    public ref class StoreManager : public Employee {
    public:
        property String^ Goals;

        /*
        void AddProduct();
        void Operation1();    
        */
    };
}
