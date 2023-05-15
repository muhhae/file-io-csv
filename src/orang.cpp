#include <iostream>
#include <string>
#include "include/orang.hpp"

using namespace std;
using namespace siakad;

orang::orang(string namaInput, string noHpInput, string emailInput)
{
    nama = namaInput;
    noHp = noHpInput;
    email = emailInput;
}

orang::orang()
{
    
}

void orang::outData()
{
    cout<<"nama \t\t: "<<nama<<endl;
    cout<<"noHP \t\t: "<<noHp<<endl;
    cout<<"email \t\t: "<<email<<endl;
}

string orang::getnama()
{
    return nama;
}



