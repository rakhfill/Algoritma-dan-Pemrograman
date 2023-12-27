#include <iostream>
using namespace std;

int main() {
  //input 
  int gaji_perbulan, bulan, gaji_pertahun;

  cout << "Jumlah Gaji Per Tahun" << endl;
  cout << "gaji_perbulan Rp " ;
  cin >> gaji_perbulan;

   gaji_pertahun = gaji_perbulan * 12;

  //output
  cout << "jumlah_gaji_pertahun Rp " << gaji_pertahun;
  cout << endl;
}