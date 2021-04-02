//-----------------------------
#include <iostream> 
using namespace std;
/* melakukan pemanggilan file header agar bisa menggunakan fungsi fungsi bahasa c seperti cout,cin,endl,ends; */
//-----------------------------
void printArray(int [][3]);
// mendeklarasikan sebuah fungsi yang bernama printArray

//----------------------------
int main()
/*merupakan fungsi utama dari bahasa C++*/
{
//---------------------------
 int matrik1 [2][3] = {{1, 2, 3}, {4, 5, 6}};
 int matrik2 [2][3] = {{1, 2, 3}, {4, 5}};
 int matrik3 [2][3] = {{1, 2}, {4}};
/*Melakukan pendeklarasian array bernama matrik1,matrik2,matrik 3 dengan tipe data integer(bilangan bulat)*/

//---------------------------
 printArray(matrik1);
 printArray(matrik2);
 printArray(matrik3);
/*Melakukan pemanggilan fungsi yang bernama printArray*/
 return 0;
}

//---------------------------------------
void printArray(int a[][3])
{
 int i, j;
 for(i=0; i<=1; i++)
 {
 for(j=0; j<=2; j++)
 cout << a[i][j];
 cout << endl;
 }
 cout << endl;
}
/*Membuat fungsi cetak matrik yang bernama PrintArray*/

