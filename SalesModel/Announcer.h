/**
 * Project Untitled
 */


#pragma once
#include "Person.h"
using namespace System;
namespace SalesModel {
    [Serializable]
    public ref class Announcer : public Person {
    public:
        property String^ WebSiteLink;
        property String^ CompanyName;
        property array<Byte>^ Ad;
        property Boolean AdInSistem;
        property int NumberPictureBox;

    };
}