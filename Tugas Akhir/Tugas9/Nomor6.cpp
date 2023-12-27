#include<iostream>
using namespace std;

/* 6. Buatlah program untuk menghitung luas dan keliling lingkaran dengan 
tipe nilai balik float */

// FUNGSI VOID, VOID = TANPA NILAI BALIK
void luas_lingkaran(){
    const double pi = 3.14;
double K, r, L;

cout<< endl;
cout<< "\tMenghitung Luas Lingkaran\n";
cout<< "========================================\n";
cout<< "Masukkan jari-jari: ";
cin>> r;
L = pi * r * r;
cout<< "Luas lingkaran tersebut adalah: "<< L << " cm"<< endl;
}

// TIPE NILAI BALIK (TANPA VOID, MENGGUNAKAN NILAI BALIK/RETURN)
const double pi = 3.14;
double K, r, L; 
int main(){
    luas_lingkaran();

cout<<endl;
cout<< "\n\tMenghitung Keliling Lingkaran\n";
cout<< "==============================================\n";
cout<< "Masukkan jari-jari: ";
cin>> r;

K = 2 * pi * r;
cout<< "Keliling Lingkarang tersebut adalah: "<< K << " cm"<< endl; 
return K;

} 
