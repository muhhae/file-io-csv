#ifndef _ORANG_HPP
#define _ORANG_HPP

#include <iostream>
#include <string>

#include "orang.hpp"

using namespace std;

namespace siakad
{
    class orang
    {
        protected:
            string nama = "none";
            string noHp = "none";
            string email = "none";
            
        public:
            orang();
            orang(string namaInput, string noHpInput, string emailInput);
            void outData();
            string getnama();
    };
}



#endif