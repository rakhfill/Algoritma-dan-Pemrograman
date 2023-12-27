#include<iostream>
using namespace std;

int a, b;
void nilai(int a, int b); //Prototype

int main(){
   /*  3. Buatlah dengan proses Tukar yaitu nilai A=63 dan nilai B=66 ditukar 
menjadi nilai A=66 dan nilai B=63. Hasil output seperti di dibawah ini.  */

int a, b;

cout<< endl;
cout<< "Masukkan nilai A: "; 
cin>> a;
cout<< "Masukkan nilai B: ";
cin>> b;
nilai(a, b);
return 0;
}

void nilai(int a, int b){
   cout<< "\nNilai sebelum di tukar"<< endl;
cout<< "Nilai A: "<< a;
cout<< "   Nilai B: "<< b;
cout<< "\n\nNilai setelah di tukar"<< endl;

cout<< "Nilai A: "<< a;
cout<< "   Nilai B: "<< b;
 
}