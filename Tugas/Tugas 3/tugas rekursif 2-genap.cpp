#include <iostream>
#include <conio.h>
using namespace std;
main(){
cout<<"        Program Deret Angkat       "<<endl;
cout<<"==================================="<<endl;
cout<<"\nS = ";
int i=1, s, x;
s=0, x=0;
	while(i<=5){
	
		x = i*i*i + 2;
	
		s+=x;
		cout<<x<<" + ";
		i++;
	}
cout <<"\nJumlah Deret S = "<<s<<endl;
cout<<"===================================="<<endl;

}


