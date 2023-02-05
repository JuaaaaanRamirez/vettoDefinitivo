/**
 * Project Untitled
 */
#pragma once

#include "Person.h"
using namespace System;
namespace SalesModel {
    [Serializable]
    public ref class SellerCompany : public Person {
    public:
        property String^ President;
    };
}

