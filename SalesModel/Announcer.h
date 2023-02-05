/**
 * Clase Announcer que modela a un ANUNCIANTE
 */


#pragma once

#include "Person.h"

using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class Announcer : public Person {
    public:
        property String^ Department;
        property array<Byte>^ Add;
    };
}