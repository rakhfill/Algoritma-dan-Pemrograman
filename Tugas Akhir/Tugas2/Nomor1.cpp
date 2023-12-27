#include <iostream>
using namespace std;
#include <math.h>

int main() {
  int arus, tahanan, tegangan;

  // Dibaca dua buah harga yang dihasilkan dari pengukuran Arus (ampere) dan Tahanan (ohm), harus dihitung dan tuliskan tegangan yang dihasilkan (V=A*T)

  // V = Tegangan
  // T = Tahanan
  // A = Arus
  
  cout << "Masukkan nilai arus: ";
  cin >> arus;
  cout << "Masukkan nilai tahanan: ";
  cin >> tahanan;

  tegangan = arus * tahanan;
    cout << "Nilai tegangan adalah: " << tegangan;
}