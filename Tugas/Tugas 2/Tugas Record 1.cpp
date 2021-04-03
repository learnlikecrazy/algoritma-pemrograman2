#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	typedef struct
	 {
	 string nama;
	 char nip[10];
	 int hari, gaji_perhari;
	 int total; 
	 } gaji_pegawai;
	gaji_pegawai pegawai;
	
	pegawai.nama= "Dewi Octaviani";
	strcpy(pegawai.nip , "556563633");
	pegawai.hari = 24;
	pegawai.gaji_perhari = 55000;
	pegawai.total = pegawai.hari*pegawai.gaji_perhari;
	cout<<"DATA GAJI PEGAWAI"<<endl;
	cout<<"Nama         : "<<pegawai.nama<<endl;
	cout<<"Nip          : "<<pegawai.nip<<endl;
	cout<<"Hari Kerja   : "<<pegawai.hari<<endl;
	cout<<"Gaji Perhari : "<<pegawai.gaji_perhari<<endl;
	cout<<endl;
	cout<<"Total Gaji   : "<<pegawai.total;
	
}
