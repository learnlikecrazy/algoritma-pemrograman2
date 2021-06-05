// Straight Insertion Sort
#include <iostream>
using namespace std;
void straight_inst_sort_asc(int array[], int size)
{
 int i, j, k;
 int Temp;
 for(i=1; i<size; i++) {
 Temp = array[i];
 j = i - 1;
 while((Temp < array[j]) & (j >= 0))
 {
 array[j+1] = array[j];
 j = j - 1;
 array[j+1] = Temp;
 }
 }
}

void straight_inst_sort_desc(int array[], int size)
{
 int i, j, k;
 int Temp;
 for(i=1; i<size; i++) {
 Temp = array[i];
 j = i - 1;
 while((Temp < array[j]) & (j >= 0))
 {
 array[j+1] = array[j];
 j = j - 1;
 array[j+1] = Temp;
 }
 }
}

int main()
{
 int k, data_size;
 int values[20];
 cout << "banyaknya data = "; cin >> data_size; // tidak > 20
 // masukkan data sebanyak n
 for(k=0; k<data_size; k++)
 {
 cout << "values[" << k << "] = ";
 cin >> values[k];
 }
 // data yang belum diurutkan
 cout << "data yang belum diurutkan : " << endl;
 for(k=0; k<data_size; k++)
 cout << values[k] << " ";
 cout << endl;
 straight_inst_sort_asc(values, data_size);
 // data yang telah diurutkan
 cout << "data yang sudah diurutkan (dari terkecil hingga terbesar) : " << endl;
 for(k=0; k<data_size; k++)
 cout << values[k] << " ";
 cout<<endl;
 
 straight_inst_sort_desc(values, data_size);
 // data yang telah diurutkan
 cout << "data yang sudah diurutkan (dari terbesar hingga terkecil) : " << endl;
 for(k=0; k<data_size; k++)
 cout << values[k] << " ";
 cout<<endl;
 getchar();
}
