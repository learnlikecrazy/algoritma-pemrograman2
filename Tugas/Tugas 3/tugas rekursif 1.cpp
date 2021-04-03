#include <iostream>
#include <conio.h>
using namespace std;
main(){
cout<<"            Program Deret Angkat                 "<<endl;
cout<<"================================================="<<endl;
cout<<"\nS = ";
int i=1, s, x;
s=0, x=0;
	while(i<=10){

		x = 2 + ((i-1)*2);	
	
		s+=x;
		cout<<x<<" + ";
		i++;
	}
cout <<"\nJumlah Deret S = "<<s<<endl;
cout<<"================================================="<<endl;

}


