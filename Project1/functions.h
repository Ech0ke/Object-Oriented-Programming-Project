#pragma once
#include "struct.h"


void ivestis(Studentas& temp);
void isvestis(Studentas& temp);
void isvestis_file(vector <Studentas>& temp);
void isvestis_med(Studentas& temp);
void isvestis_vid(Studentas& temp);
void vidurkis(Studentas& temp);
void mediana(Studentas& temp);
void read_file(vector <Studentas>& sar);
void read_file(vector <Studentas>& sar, string a);
bool vardas_sort(const Studentas& a, const Studentas& b);
bool pazymiai_sort(const Studentas& a, const Studentas& b);
void create_file();
void gen_map(zmogus &temp);
void naujas_failas(zmogus zm, int nd, int sk);
void isvestis_2files(vector <Studentas> temp);
void isvestis_2files(vector <Studentas> temp, string a, string b);