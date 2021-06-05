#include <iostream>
using namespace std;

void bubble_sort_asc(int array[], int size)
{
 int temp, i, j;
 for(i=0; i<size-1; i++) {
 for(j=0; j<size-1-i; j++) {
 if(array[j] > array[j+1]) {
 temp = array[j];
 array[j] = array[j+1];
 array[j+1] = temp;
 }
 }
 }
}

int main(){
int data_size = 50;
int values[data_size], i;
int data_array[50] = { 25,30,12, 11, 35, 60, 97, 95, 45, 39, 30, 12, 24, 45, 50, 32, 96,
					95, 25, 11, 25, 30, 12, 11, 35, 60, 97, 95, 45, 39, 30, 12, 24, 45,
					50, 32, 96, 95, 25, 11, 25, 30, 12, 11, 35, 60, 97, 95, 45, 39 };
int pilihan;

cout<<"Menu Pilihan "<<endl;
cout<<"1. Buble Sort"<<endl;
cout<<"2. Insertion Sort"<<endl;
cout<<"3. Shell Sort"<<endl;
cout<<"4. Quick Sort"<<endl;
cout<<"Masukkan Pilihan anda : ";
cin>>pilihan;

switch(pilihan){
	case 1 :
		bubble_sort_asc(data_array, data_size);
 		// data yang sudah diurutkan
 		cout<<"data yang sudah diurutkan dari terkecil hingga terbesar"<<endl;
 		for(i=0; i<data_size; i++)
 		cout << data_array[i] << " ";
 		cout<<endl;
		break;
	case 2 :
		cout<<"Anda Memilih Insertion Sort"<<endl;
		break;
	case 3 :
		cout<<"Anda Memilih Shell Sort"<<endl;
		break;
	case 4 :
		cout<<"Anda memilih Quick short"<<endl;
		break;
	default:
		cout<<"Maaf angka yang anda pilih tidak ditemukan"<<endl;

}
	
}
