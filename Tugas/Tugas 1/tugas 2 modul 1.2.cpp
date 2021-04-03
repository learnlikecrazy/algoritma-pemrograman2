/* Program menginput nilai (bilangan) ke dalam array dimensi dua
dan menampilkannya secara Row Major Order */
#include <iostream>
using namespace std;
int main()
{
 int baris, kolom, matriks[9][9];
 int input_baris, input_kolom;
 
 // Input elemen array secara Row Major Order
 cout<<"====================================="<<endl;
 cout<<"Latihan Modul 1.2"<<endl;
 cout<<"====================================="<<endl;
 cout<<" Nama: Taufik Hidayat"<<endl;
 cout<<" NIM: 202012027"<<endl;
 cout<<"====================================="<<endl;
 
 cout<<"Masukkan Jumlah Baris : ";
 cin>>input_baris;
 cout<<endl;
 
 cout<<"Masukkan Jumlah Kolom : ";
 cin>>input_kolom;
 cout<<endl;
 
 cout << "Input elemen Array : \n";
 for(baris=0; baris<input_baris; baris++)
 {
 for(kolom=0; kolom<input_kolom; kolom++)
 {
 cout << "matriks[" << baris+1 << "][" << kolom+1 << "] = ";
 cin >> matriks[baris][kolom];
 }
 cout << endl;
 }
 // Tampilkan elemen Array secara Row Major Order
 cout << "Isi array : \n";
 for(baris=0; baris<input_baris; baris++)
 {
 for(kolom=0; kolom<input_kolom; kolom++)
 cout << " " << matriks[baris][kolom];
 cout << endl;
 }
}
