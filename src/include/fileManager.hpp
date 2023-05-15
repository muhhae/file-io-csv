#ifndef FILE_MANAGER_HPP
#define FILE_MANAGER_HPP

#include <string>
#include <vector>

#include "mahasiswa.hpp"
#include "dosen.hpp"
#include "tendik.hpp"


using namespace std;
using namespace siakad;

void DuplicateFile(string file);
void DeleteDuplicate(string file);
void WriteFile(string file,int line, int row, string replacement);
int ReadFile(string file, int select);
mahasiswa ambilDataMahasiswa(string file, string nrp);
dosen ambilDataDosen(string file, string nip);
tendik ambilDataTendik(string file, string nip);

#endif