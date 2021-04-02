//-----------------------
#include <iostream>
using namespace std;
/* melakukan pemanggilan file header agar bisa menggunakan fungsi fungsi bahasa c seperti cout,cin,endl,ends; */

//-----------------------------
int main()
/*merupakan fungsi utama dari program*/
{
//---------------------------
 int i, j, k;
/* Mendeklarasikan Variabel i, j, k yang bertipe data integer(bilangan bulat)*/

//-----------------------------
 static int data_huruf[2][8][8] = {
 {
 {1, 1, 1, 1, 1, 1, 1, 0},
 {1, 1, 0, 0, 0, 0, 1, 0},
 {1 ,1, 1, 1, 1, 1, 1, 0},
 {0, 0, 0, 0, 1, 1, 1, 0},
 {1, 0, 0, 0, 1, 1, 1, 0},
 {1, 1, 1, 1, 1, 1, 1, 0},
 {0, 0, 0, 0, 0, 0, 0, 0}
 },
 {
 {1, 1, 0, 0, 0, 1, 1, 0},
 {1, 1, 0, 0, 0, 1, 1, 0},
 {1, 1, 0, 0, 0, 1, 1, 0},
 {1, 1, 1, 1, 1, 1, 1, 0},
 {1, 1, 1, 0, 0, 1, 1, 0},
 {1, 1, 1, 0, 0, 1, 1, 0},
 {1, 1, 1, 0, 0, 1, 1, 0},
 {0, 0, 0, 0, 0, 0, 0, 0}
 }
 };
/* Mendeklarasikan sebuah static array multidimesi yang bertipe data integer (bilangan bulat)*/

//----------------------------------
 for(i=0; i<2; i++)
 {
 for(j=0; j<2; j++)
 {
 for(k=0; k<2; k++)
 {
 if(data_huruf[i][j][k])
 cout << '\xDB';
 else
 cout << " "; // spasi
 }
 cout << endl;
 }
 cout << endl;
 }
/* Menampilakan Huruf*/
}

