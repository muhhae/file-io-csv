#ifndef _TENDIK_HPP
#define _TENDIK_HPP

#include <iostream>
#include <string>

#include "orang.hpp"

namespace siakad
{
    class tendik : public orang
    {
        protected:
            string NIP;
            string peran;
        public:
            tendik();
            tendik(string namaInput, string noHpInput, string emailInput, string NIPInput, string peranInput);
            void tampilkan_data_tendik();
    };
}
#endif