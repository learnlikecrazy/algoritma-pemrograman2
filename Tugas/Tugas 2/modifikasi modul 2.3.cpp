#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 typedef struct
 {
 char nomhs[12];
 string nama;
 float nilai;
 } data_nilai;
 data_nilai nilaimhs[10];
 int i;
 for(i=1; i<=2; i++)
 {
 cout << "Nama : "; getline(cin,nilaimhs[i].nama);
 cout << "Nomhs : "; cin >> nilaimhs[i].nomhs;
 cout << "Nilai : "; cin >> nilaimhs[i].nilai;
 cin.ignore(1, '\n');
 cout << endl;
 }
 for(i=1; i<=2; i++)
 {
 cout << "Nama : " << nilaimhs[i].nama << endl;
 cout << "Nomhs : " << nilaimhs[i].nomhs << endl;
 cout << "Nilai : " << nilaimhs[i].nilai << endl;
 }
}

