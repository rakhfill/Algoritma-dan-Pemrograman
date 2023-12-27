#include <iostream>
using namespace std;

int main() {

int gaji_pertahun, tahun, gaji_perhari;

cout << "Jumlah gaji perhari : ";
cin >> gaji_perhari;
cout << "satu tahun : ";
cin >> tahun;

gaji_pertahun = gaji_perhari * tahun;

cout << "gaji pertahun Rp " << gaji_pertahun;
cout << endl;

}