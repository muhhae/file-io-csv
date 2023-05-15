#ifndef _DOSEN_HPP
#define _DOSEN_HPP

#include <iostream>
#include <string>

#include "orang.hpp"
#include "mahasiswa.hpp"

using namespace std;

namespace siakad
{
    class dosen : public orang
    {
        protected :
            string NIP;
            string nrpMhsPerwalian;
        public :
            dosen();
            dosen(string namaInput, string noHpInput, string emailInput, string NIPInput, string nrpMhsPerwalianInput);
            void tampilkan_data_dosen();
            string getNrpMhs();
    };
}
#endif