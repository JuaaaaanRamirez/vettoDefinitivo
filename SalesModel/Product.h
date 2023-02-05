/**
 * Esta clase Producto modela las carecteristicas de nuestro producto a vender
 */

#pragma once
//#include "RelacionatedCareer.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SalesModel {
    [Serializable]
    public ref class Product {
    public:
        property int Id;
        property String^ Name;
        property String^ Description;
        property double PriceMin;
        property double PriceMaj;
        property int Stock;
        property char Status;
        property array<Byte>^ Photo;
        property List<String^>^ Career;
        property List<String^>^ Coments;
        property double Starts;
        //property RelacionatedCareer^ RelacionatedCareer;
    };
}
