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
        property array<Byte>^ Ad;
        property Boolean AdInSistem;
        property int NumberPictureBox;
        property String^ WebSiteLink;
        property String^ CompanyName;
        
        

    };
}