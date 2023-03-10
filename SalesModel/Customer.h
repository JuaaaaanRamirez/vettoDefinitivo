/**
 * Project Untitled
 */


#pragma once
#include "Person.h"
#include "Product.h"
using namespace System;
using namespace System::Collections::Generic;

namespace SalesModel {
    [Serializable]
    public ref class Customer : public Person {
    public:
        property int CustomerPoints;
        property String^ Address;
        property List<Product^>^ WishList;

        Customer() {
            WishList = gcnew List<Product^>();
        }
    };
}
