#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
 int S, n, i, u;
 int a = 3;
 int r = 3;
 cout << "Masukkan n : "; cin >> n;
 cout << "S(" << n << ") = ";
 i = 1;
 while(i <= n)
 {
 u = a*(pow(r,(i-1)));
 S = a*((pow(r,n)-1))/(r-1);
 cout << u << " + ";
 i++;
 }
 cout << "\nS(" << n << ") = " << S << endl;
}

