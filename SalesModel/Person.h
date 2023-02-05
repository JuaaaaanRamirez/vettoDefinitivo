/**
 * En esta clase se define la clase PERSONA
 */
#pragma once

using namespace System;

namespace SalesModel {
    [Serializable]
    public ref class Person {
    public:
        property int Id;
        property String^ DocNumber;
        property String^ Name;
        property String^ LastName;
        property String^ PhoneNumber;
        property String^ Email;
        property String^ Username;
        property String^ Password;
        property char Gender;
        property String^ Birthday;
    };
}