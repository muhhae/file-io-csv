#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <sstream>
#include <vector>

#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;
using namespace siakad;

void DuplicateFile(string file)
{
    ifstream data;
    string tempDataStore;

    ofstream dataTemp;
    string strDataTemp;

    data.open(file + ".csv");
    dataTemp.open(file + "Temp.csv");

    while (getline(data, tempDataStore))
    {
        strDataTemp += tempDataStore +'\n';
    }
    strDataTemp.erase(strDataTemp.size() - 1);
    dataTemp << strDataTemp;

    data.close();
    dataTemp.close();
    
}

void DeleteDuplicate(string file)
{
    file += "Temp.csv";
    remove(file.c_str());
}

void WriteFile(string file, int line,int row, string replacement)
{
    DuplicateFile(file);

    ofstream data;
    ifstream fileDataTemp;

    data.open(file + ".csv");
    fileDataTemp.open(file + "Temp.csv");
    

    string tempS;

    int count = 0;
    string tempGetLine;

    while (getline(fileDataTemp, tempGetLine))
    {
        if (count == line) 
        {
            //cout<<"benar"<<endl;
            int counWord = 1;
            stringstream tempStream(tempGetLine);
            string strTemp;
            string stringLine;
            while (getline(tempStream,strTemp, ','))
            {

                if (counWord == row) 
                { 
                    stringLine += replacement + ',';
                }
                else
                {
                    stringLine += strTemp + ',';
                }
                counWord++;
            }
            stringLine.erase(stringLine.size() - 1);
            tempS += stringLine + '\n';
            
        }
        else tempS += tempGetLine + '\n';
        count++;
    }

    tempS.erase(tempS.size() - 1);

    data << tempS;
    cout<<tempS;

    data.close();
    fileDataTemp.close();

    DeleteDuplicate(file);
}

int ReadFile(string file, int select)
{
    string tes, dataTemp, temp;
    ifstream data;

    data.open(file + ".csv");
    int count = 0;

    while(getline(data, dataTemp))
    {
        tes += dataTemp;
        if (count == select) tes += "\t<<<\t\t";
        tes += '\n';
        count++;
    }
    tes.erase(tes.size() - 1);
    cout<<tes;

    data.close();
    return count;
}

mahasiswa ambilDataMahasiswa(string file, string nrp)
{

    string nama, hp, email, stnrp, ipksem, sem, ips, nipD, frs, tghn; 

    ifstream data(file + ".csv");

    string dataTemp;
    string wordTemp;
    string lineTemp;
    
    while (getline(data, lineTemp))
    {
        stringstream streamTemp(lineTemp);
        int count = 0;
        bool benar = false;

        while (getline(streamTemp, wordTemp, ','))
        {
            if(count == 0 && nrp == wordTemp) 
            {
                benar = true;
            }
            if (benar)
            {
                switch (count)
                {
                case 0:
                    stnrp = wordTemp;
                    break;
                case 1:
                    nama = wordTemp;
                    break;
                case 2:
                    hp = wordTemp;
                    break;
                case 3:
                    email= wordTemp;
                    break;
                case 4:
                    ipksem= wordTemp;
                    break;
                case 5:
                    sem= wordTemp;
                    break;
                case 6:
                    ips= wordTemp;
                    break;
                case 7:
                    nipD = wordTemp;
                    break;
                case 8:
                    frs = wordTemp;
                    break;
                case 9:
                    tghn = wordTemp;
                    break;
                }
            }
            count++; 
    
        }
        if(benar) break;
    }

    return mahasiswa (nama,hp,email,stnrp,ipksem,sem,ips, nipD, frs, tghn);
}
dosen ambilDataDosen(string file, string nip)
{
    string nama, hp, email, strNip, nrpMhs; 

    ifstream data(file + ".csv");

    string dataTemp;
    string wordTemp;
    string lineTemp;
    
    while (getline(data, lineTemp))
    {
        stringstream streamTemp(lineTemp);
        int count = 0;
        bool benar = false;

        while (getline(streamTemp, wordTemp, ','))
        {
            if(count == 0 && nip == wordTemp) 
            {
                benar = true;
            }
            if (benar)
            {
                switch (count)
                {
                case 0:
                    strNip = wordTemp;
                    break;
                case 1:
                    nama = wordTemp;
                    break;
                case 2:
                    hp = wordTemp;
                    break;
                case 3:
                    email= wordTemp;
                    break;
                case 4:
                    nrpMhs= wordTemp;
                    break;
                }
            }
            count++; 
    
        }
        if(benar) break;
    }

    return dosen (nama,hp,email,strNip,nrpMhs);
}

tendik ambilDataTendik(string file, string nip)
{
    string nama, hp, email, strNip, peran; 

    ifstream data(file + ".csv");

    string dataTemp;
    string wordTemp;
    string lineTemp;
    
    while (getline(data, lineTemp))
    {
        stringstream streamTemp(lineTemp);
        int count = 0;
        bool benar = false;

        while (getline(streamTemp, wordTemp, ','))
        {
            if(count == 0 && nip == wordTemp) 
            {
                benar = true;
            }
            if (benar)
            {
                switch (count)
                {
                case 0:
                    strNip = wordTemp;
                    break;
                case 1:
                    nama = wordTemp;
                    break;
                case 2:
                    hp = wordTemp;
                    break;
                case 3:
                    email= wordTemp;
                    break;
                case 4:
                    peran= wordTemp;
                    break;
                }
            }
            count++; 
    
        }
        if(benar) break;
    }

    return tendik(nama,hp,email,strNip,peran);
}