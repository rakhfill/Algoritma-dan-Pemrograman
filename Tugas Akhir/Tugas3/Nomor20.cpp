#include <iostream>
using namespace std;
int main() {

int diskon, harga;
  
//Bu Novita menjual mangga golek dengan harga Rp. 1.100,- per buah. Seorang pembeli akan mendapat diskon sebesar 10% jika total pembelian di atas Rp. 100.000,- Tampilkan total yang harus dibayar seorang pembeli, besarnya diskon yang didapat dan total yang harus dibayarkan sesudah dikurangi dengan diskon

cout << "Masukkan harga: ";
cin >> harga;


if ( harga > 100000 )
{
  diskon = ( harga * 0.1 );
  harga = harga - diskon;
  cout << "Diskon 10% " << endl;
  cout << "Total yang harus dibayar: " << harga << endl;
}
  else
{
  (harga < 100000);
}
  cout << "Tidak dapat diskon ";
}






