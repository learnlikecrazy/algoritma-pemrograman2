#include <iostream>
using namespace std;
int main()
{
 int S, n, i;
 cout << "Masukkan n : "; cin >> n;
 cout << "S(" << n << ") = ";
 i = 1;
 while(i <= n)
 {
 cout << i << " + ";
 S = S + i;
 i++;
 }
 cout << "\nS(" << n << ") = " << S << endl;
}

