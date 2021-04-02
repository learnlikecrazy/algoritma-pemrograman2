#include <iostream>
using namespace std;
int main()
{
 int baris, kolom, matriks[3][4];
 // Input elemen array secara Row Major Order
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
 // Tampilkan elemen Array secara Row Major Order
 cout << "Isi array : \n";
 for(baris=0; baris<3; baris++)
 {
 for(kolom=0; kolom<4; kolom++)
 cout << " " << matriks[baris][kolom];
 cout << endl;
 }
}
