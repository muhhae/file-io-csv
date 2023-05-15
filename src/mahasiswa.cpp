#include <iostream>
#include <string>

#include "include/orang.hpp"
#include "include/mahasiswa.hpp"

using namespace std;
using namespace siakad;

mahasiswa::mahasiswa(string namaInput, string noHpInput, string emailInput, string NRPInput, string IPKSementaraInput, string semesterInput, string ipSemesterInput, string nipDosenInput, string FRSInput, string tagihanInput)
{
    nama = namaInput;
    noHp = noHpInput;
    email = emailInput;
    NRP = NRPInput;
    IPKSementara = IPKSementaraInput;
    semester = semesterInput;
    ipSemester = ipSemesterInput;
    nipDosen = nipDosenInput;
    FRS = FRSInput;
    tagihan = tagihanInput;
}

void mahasiswa::lihat_ipk_sementara() 
{
    cout<<"IPK Sementara adalah "<<IPKSementara<<endl;
}
void mahasiswa::lihat_ip_semester()
{
    cout<<"IP Semester adalah "<<ipSemester<<endl;
}

void mahasiswa::tampilkan_data_mahasiswa()
{
    outData();
    cout<<"NRP \t\t: "<<NRP<<endl;
    cout<<"semester \t: "<< semester <<endl;
}

string mahasiswa::getNIPD()
{
    return nipDosen;
}

string mahasiswa::getFRS()
{
    return FRS;
}

string mahasiswa::gettagihan()
{
    return tagihan;
}


