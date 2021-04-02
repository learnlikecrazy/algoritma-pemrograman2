//-------------------------
//---------------------------------------
#include <iostream>
#include <stdio.h>
using namespace std;
/* melakukan pemanggilan file header agar bisa menggunakan fungsi fungsi bahasa c seperti cout,cin,endl,ends; */

//------------------
int main()
/*merupakan fungsi utama dari program*/
{
//-----------------------------------
 int A[3][4], B[3][4], X[3][4], Y[3][4], C[3][4], i, j;
/*Mendeklarasikan Array A, Array B, Array x, Array Y, Array C, variabel i, variabel j yang bertipe data integer(bilangan bulat)*/

 //-------------------------------
 for(i=0; i<3; i++)
 {
 for(j=0; j<4; j++)
 {
 cout << "input data matrik A[" << i+1 << "][" << j+1 << "] : ";
 fflush(stdin); cin >> A[i][j];
 }
 cout << endl;
 }
 cout << endl;
/*Melakukan Input elemen array di matriks A*/

 //--------------------------------
 for(i=0; i<3; i++)
 {
 for(j=0; j<4; j++)
 {
 cout << "input data matrik B[" << i+1 << "][" << j+1 << "] : ";
 fflush(stdin); cin >> B[i][j];
 }
 cout << endl;
 }
 /*Melakukan Input elemen array di matriks A*/
 
 //-------------------------------------
 for(i=0; i<3; i++)
 {
 for(j=0; j<4; j++)
 X[i][j] = A[i][j] + B[i][j];
 }
 /*Melakukan Penjumlahan Matriks A dengan Matriks B*/
 
 //-------------------
 cout << "\n Matriks A \n";
 for(i=0; i<3; i++)
 {
 for(j=0; j<4; j++)
 cout << " " << A[i][j];
 cout << endl;
 }
 cout << endl;
  /*Menampilkan Matriks A*/
 
 // --------------------------
 cout << "\n Matriks B \n";
 for(i=0; i<3; i++)
 {
 for(j=0; j<4; j++)
 cout << " " << B[i][j];
 cout << endl;
 }
 cout << endl;
  /*Menampilkan Matriks B*/
  
 //-------------------------------
 cout << "\n Matriks penjumlahan A+B \n";
 for(i=0; i<3; i++)
 {
 for(j=0; j<4; j++)
 cout << " " << X[i][j];
 cout << endl;
 }
 cout << endl;
 /*Menampilkan hasil penjumlahan matriks A dan B*/
}

