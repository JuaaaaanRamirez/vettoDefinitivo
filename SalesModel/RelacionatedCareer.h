/**
 * En esta clase se define la clase PERSONA
 */
#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace SalesModel {
    [Serializable]
    public ref class RelacionatedCareer {
    public: 
        property List<String^>^ Careers;
    };
}