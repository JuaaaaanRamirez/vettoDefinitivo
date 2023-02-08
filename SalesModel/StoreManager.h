/**
 * Clase que modela Al que administra las ventas
 */


#pragma once
#include "Person.h"

using namespace System;
namespace SalesModel {
    [Serializable]
    public ref class StoreManager : public Person {
    public:

        property String^ Goals;
        property String^ Salary;
        property String^ Store;

        property String^  status;

    };
}
