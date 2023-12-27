#include <iostream>
using namespace std;

int main() {
  int biaya_pelayanan, biaya_pasang, pendapatan;

  cout << "biaya pelayanan : ";
  cin >> biaya_pelayanan;
  cout << "biaya pasang : ";
  cin >> biaya_pasang;


  pendapatan = biaya_pelayanan + biaya_pasang;

  cout << "pendapatan bulan itu : " << pendapatan;
  cin >> pendapatan;
 
}