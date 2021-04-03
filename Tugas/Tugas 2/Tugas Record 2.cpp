#include <iostream>
#include <string.h>
using namespace std;

struct ukuran_rumah
{
	int panjang, lebar, luas;
};

struct tipe_rumah
{
	char nama[30];
	struct ukuran_rumah ukuran;
};

struct tipe_rumah info_tipermh;

main()
{
	strcpy(info_tipermh.nama,"Dahlia 54");
	info_tipermh.ukuran.lebar = 10;
	info_tipermh.ukuran.panjang = 12;
	info_tipermh.ukuran.luas= 120;
	
	cout<<"Nama Tipe Rumah : "<<info_tipermh.nama;
	cout<<"\nPanjang : ";
	cout<<info_tipermh.ukuran.panjang;
	cout<<"\nLebar :";
	cout<<info_tipermh.ukuran.lebar;
	cout<<"\nLuas :";
	cout<<info_tipermh.ukuran.luas;
}
