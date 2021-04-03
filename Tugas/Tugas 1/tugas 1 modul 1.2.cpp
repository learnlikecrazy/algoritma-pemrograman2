/* Program menginput nilai (bilangan) ke dalam array dimensi dua
dan menampilkannya secara Column Major Order */
#include <iostream>
using namespace std;
int main()
{
 int baris, kolom, matriks[3][4];
 // Input elemen array secara Column Major Order
 cout<<"====================================="<<endl;
 cout<<"Latihan Modul 1.2"<<endl;
 cout<<"====================================="<<endl;
 cout<<" Nama: Taufik Hidayat"<<endl;
 cout<<" NIM: 202012027"<<endl;
 cout<<"====================================="<<endl;
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
 // Tampilkan elemen Array secara Column Major Order
 cout << "Isi array : \n";
 for(kolom=0; kolom<4; kolom++)
 {
 for(baris=0; baris<3; baris++)
 cout << " " << matriks[baris][kolom];
 cout << endl;
 }
}
