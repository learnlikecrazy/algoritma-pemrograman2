//--------------------------
#include <iostream>
using namespace std;
/* melakukan pemanggilan file header agar bisa menggunakan fungsi fungsi bahasa c seperti cout,cin,endl,ends; */

//----------------------
int main()
/*merupakan fungsi utama dari program*/
{
//-------------------------------
 int baris, kolom, matriks[3][4];
/*Mendeklarasikan variabel baris, kolom,dan array matriks yang bertipe data integer(bilangan bulat)*/

//---------------------------------------------
 cout << "Input elemen Array : \n";
 for(baris=0; baris<3; baris++)
 {
 for(kolom=0; kolom<4; kolom++)
 {
 cout << "matriks[" << baris+1 << "][" << kolom+1 << "] = ";
 cin >> matriks[baris][kolom];
 }
 cout << endl;
 }
/* Melakukan Proses Input elemen array*/
 //----
 cout << "Isi array : \n";
 for(baris=0; baris<3; baris++)
 {
 for(kolom=0; kolom<4; kolom++)
 cout << " " << matriks[baris][kolom];
 cout << endl;
 }
/*Menampilkan elemen Array secara Row Major Order*/
}
