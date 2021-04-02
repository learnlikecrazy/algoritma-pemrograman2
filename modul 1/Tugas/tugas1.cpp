#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
 int baris, kolom, matriks[3][4], ibaris, ikolom;
int maks = -1000;
 // Input elemen array secara Row Major Order
 cout << "Input elemen Array : \n";
	 for(baris=0; baris<3; baris++)
	 {
		 for(kolom=0; kolom<4; kolom++)
		 {
		 cout << "matriks[" << baris+1 << "][" << kolom+1 << "] = ";
		 cin >> matriks[baris][kolom];
		 if (matriks[baris][kolom] > maks)
			{ 
			maks = matriks[baris][kolom];
			ibaris = baris;
			ikolom = kolom;
			 }
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
	cout<<"Nilai Maksimal : "<<maks<<endl;
	cout<<"Baris ke ["<<ibaris<<"] Kolom ke ["<<ikolom<<"]"<<endl;
	cout<<endl;
	getch();
}

