#include <iostream>
#include <string>

#include "include/dosen.hpp"
#include "include/orang.hpp"

using namespace std;
using namespace siakad;

dosen :: dosen()
{
    
}
dosen::dosen(string namaInput, string noHpInput, string emailInput, string NIPInput, string nrpMhsPerwalianInput)
{
    nama = namaInput;
    noHp = noHpInput;
    email = emailInput;
    NIP = NIPInput;
    nrpMhsPerwalian = nrpMhsPerwalianInput;
}
void dosen::tampilkan_data_dosen()
{
    outData();
    cout<<"NIP \t\t: "<<NIP<<endl;
}

string dosen::getNrpMhs()
{
    return nrpMhsPerwalian;
}