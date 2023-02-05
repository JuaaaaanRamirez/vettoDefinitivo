/**
 * Clase EMPLOYEE que modela a un empleado asimismo employee hereda de persona
 */

#pragma once

#include "Person.h"

using namespace System;
namespace SalesModel {
    [Serializable]
    public ref class Employee : public Person {
    public:
        property double Salary;
        property String^ Store; //CREO QUE PUEDE SALIR
        property char Status;
    };
}