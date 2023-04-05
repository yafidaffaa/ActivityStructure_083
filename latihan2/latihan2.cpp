#include <iostream>
using namespace std;

struct DetailAlamat
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};