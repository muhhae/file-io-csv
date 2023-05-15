#include <iostream>
#include <string>

#include "include/tendik.hpp"
#include "include/orang.hpp"

using namespace std;
using namespace siakad;

tendik :: tendik()
{

}

tendik :: tendik(string namaInput, string noHpInput, string emailInput, string NIPInput, string peranInput)
{
    nama = namaInput;
    noHp = noHpInput;
    email = emailInput;
    NIP = NIPInput;
    peran = peranInput;
}

void tendik :: tampilkan_data_tendik()
{
    outData();
    cout<<"Peran \t\t: "<<peran<<endl;
}