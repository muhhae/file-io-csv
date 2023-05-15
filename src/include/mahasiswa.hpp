#ifndef _MAHASISWA_HPP
#define _MAHASISWA_HPP

#include <iostream>
#include <string>

#include "mahasiswa.hpp"
#include "orang.hpp"

using namespace std;

namespace siakad
{
    class mahasiswa : public orang
    {
        protected:
            string NRP;
            string IPKSementara;
            string semester;
            string ipSemester;
            string nipDosen;
            string FRS;
            string tagihan;
        public:
            mahasiswa();
            mahasiswa(string namaInput, string noHpInput, string emailInput, string NRPInput, string IPKSementaraInput, string semesterInput, string ipSemesterInput, string nipDosenInput, string FRSInput, string tagihanInput);
            void lihat_ipk_sementara();
            void lihat_ip_semester();
            void tampilkan_data_mahasiswa();
            string getNIPD();
            string getFRS();
            string gettagihan();
    };
}

#endif