#ifndef MAIN_MENU_HPP
#define MAIN_MENU_HPP

#include "mahasiswa.hpp"
#include "dosen.hpp"
#include "tendik.hpp"

using namespace siakad;

void mainMenu();
void menuMahasiswa();
void menuMahasiswaSudahLogin(mahasiswa currentMahasiswa);
void menuDosen();
void menuDosenSudahLogin(dosen currentDosen);
void menuTendik();
void menuTendikSudahLogin(tendik currentTendik);

#endif