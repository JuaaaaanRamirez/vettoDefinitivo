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
        property String^ WebSiteLink;
        property String^ CompanyName;
        property array<Byte>^ Add;
        property Boolean AdInSistem;
        property int NumberPictureBox;

    };
}