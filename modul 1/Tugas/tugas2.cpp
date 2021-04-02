// Program menampilkan isi matriks
#include <iostream>
using namespace std;

int main()
{
 int matrik[2][3] = {{1, 2,5},{2,8,5}};
 int i, j;
 
 cout<<"Matriks ordo 2x3"<<endl;
 for(i=0; i<2; i++)
 {
 for(j=0; j<3; j++)
 cout << matrik[i][j];
 cout << endl; 
}
 
 cout<<"Matriks ordo 3x2"<<endl;
 for(i=0; i<3; i++)
 {
 for(j=0; j<2; j++)
 cout << matrik[i][j];
 cout << endl; 
 }
 return 0;
}


