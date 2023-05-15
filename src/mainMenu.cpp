#include <stdlib.h>
#include <iostream>

#include "include/orang.hpp"
#include "include/mahasiswa.hpp"
#include "include/fileManager.hpp"
#include "include/mainMenu.hpp"

using namespace std;
using namespace siakad;

void mainMenu()
{
    int select = 0;
    while(1)
    {
        system("cls");
        cout<<"Selamat Datang di SIM Akademik\n"<<endl;
        cout<<"Masuk Sebagai :\n"<<endl;

        cout<<"1. Mahasiswa"<<endl;

        cout<<"2. Dosen"<<endl;

        cout<<"3. Tendik"<<endl;

        cout<<"\n4. exit"<<endl;
        
        cout<<"\nInput : "; cin>>select;
        if (select == 4) exit(0);
        if (select >= 1 && select <= 3) break;
    }
    
    system("cls");

    switch (select)
    {
    case 1:
        menuMahasiswa();
        break;
    case 2:
        menuDosen();
        break;
    case 3:
        menuTendik();
        break;
    }

}

void menuMahasiswa()
{
    string nrp;
    cout<<"note : 5020 - 2026"<<endl;
    cout<<"masukkan nrp : ";
    cin>>nrp;

    menuMahasiswaSudahLogin(ambilDataMahasiswa("file/mahasiswa", nrp));
}

void menuMahasiswaSudahLogin(mahasiswa currentMahasiswa)
{
    int select = 0;

    system("cls");
    cout<<"Selamat Datang "<<currentMahasiswa.getnama()<<endl;
    cout<<"\n\nPilih fitur \n"<<endl;

    cout<<"1. Data diri"<<endl;

    cout<<"2. Lihat IPK Sementara"<<endl;

    cout<<"3. Lihat IP Semester"<<endl;

    cout<<"4. Dosen Wali"<<endl;

    cout<<"5. FRS"<<endl;

    cout<<"6. Tagihan"<<endl;

    cout<<"7. Kurikulum"<<endl;

    cout<<"\n8. back"<<endl;

    cout<<"\nInput : "; cin>>select;
    
    if (select == 8) mainMenu();
    
    switch (select)
    {
    case 1:
        system("cls");
        currentMahasiswa.tampilkan_data_mahasiswa();
        cout<<"tekan enter untuk kembali!"<<endl;

        fflush(stdin);
        cin.get();

        break;
    case 2:

        system("cls");
        currentMahasiswa.lihat_ipk_sementara();
        cout<<"tekan enter untuk kembali!"<<endl;

        fflush(stdin);
        cin.get();

        break;
    case 3:

        system("cls");
        currentMahasiswa.lihat_ip_semester();
        cout<<"tekan enter untuk kembali!"<<endl;

        fflush(stdin);
        cin.get();
        
        break;
    case 4:
    {
        system("cls");
        dosen doswal = ambilDataDosen("file/dosen", currentMahasiswa.getNIPD());
        doswal.tampilkan_data_dosen();
        cout<<"tekan enter untuk kembali!"<<endl;

        fflush(stdin);
        cin.get();
        
        break;
    }
        
    case 5:

        system("cls");
        cout<<"\n"<<currentMahasiswa.getFRS()<<"\n"<<endl;

        cout<<"tekan enter untuk kembali!"<<endl;

        fflush(stdin);
        cin.get();
        
        break;
    case 6:

        system("cls");
        cout<<"\n"<<currentMahasiswa.gettagihan()<<"\n"<<endl;
        cout<<"tekan enter untuk kembali!"<<endl;

        fflush(stdin);
        cin.get();
        
        break;
    case 7:

        system("cls");
        cout<<"\nKurikulum 2022 \n"<<endl;
        cout<<"tekan enter untuk kembali!"<<endl;

        fflush(stdin);
        cin.get();
        
        break;
    }
    menuMahasiswaSudahLogin(currentMahasiswa);
}

void menuDosen()
{
    string nrp;
    cout<<"note : 301 - 307"<<endl;
    cout<<"masukkan nip : ";
    cin>>nrp;

    menuDosenSudahLogin(ambilDataDosen("file/dosen", nrp));
}

void menuDosenSudahLogin(dosen currentDosen)
{
    int select = 0;

    system("cls");
    cout<<"Selamat Datang "<<currentDosen.getnama()<<endl;
    cout<<"\n\nPilih fitur \n"<<endl;

    cout<<"1. Data anda"<<endl;

    cout<<"2. Lihat Mahasiswa Wali"<<endl;

    cout<<"\n3. back"<<endl;

    cout<<"\nInput : "; cin>>select;
    
    if (select == 3) mainMenu();
    
    switch (select)
    {
    case 1:
        system("cls");
        currentDosen.tampilkan_data_dosen();
        cout<<"tekan enter untuk kembali!"<<endl;

        fflush(stdin);
        cin.get();

        break;
    case 2:

        system("cls");
        mahasiswa mhsW = ambilDataMahasiswa("file/mahasiswa", currentDosen.getNrpMhs());
        mhsW.tampilkan_data_mahasiswa();
        cout<<"\n"<<mhsW.getFRS()<<"\n"<<endl;
        cout<<"tekan enter untuk kembali!"<<endl;

        fflush(stdin);
        cin.get();

        break;
    }
    menuDosenSudahLogin(currentDosen);
}

void menuTendik()
{
    string nrp;
    cout<<"note : 201 - 207"<<endl;
    cout<<"masukkan NIP : ";
    cin>>nrp;

    menuTendikSudahLogin(ambilDataTendik("file/tendik", nrp));
}
void menuTendikSudahLogin(tendik currentTendik)
{
    int select = 0;

    system("cls");
    cout<<"Selamat Datang "<<currentTendik.getnama()<<endl;
    cout<<"\n\nPilih fitur \n"<<endl;

    cout<<"1. Data anda"<<endl;

    cout<<"\n2. back"<<endl;

    cout<<"\nInput : "; cin>>select;
    
    if (select == 2) mainMenu();
    
    switch (select)
    {
    case 1:
        system("cls");
        currentTendik.tampilkan_data_tendik();
        cout<<"tekan enter untuk kembali!"<<endl;

        fflush(stdin);
        cin.get();

        break;
    }
    menuTendikSudahLogin(currentTendik);
}