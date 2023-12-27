#include <iostream>
using namespace std;
int main() {
 /* 11. Hotel Merah Delima mempunyai sistem informasi tentang pembayaran penginapan, dengan masukan input : lama menginap dan harga kamar. Jumlah bayar dihitung dari lama menginap dikali dengan harga kamar/hari. Jika jumlah bayar diatas 700.000 mendapat discount 30%, jika jumlah bayar diatas 500.000 mendapat discount 20%, jika jumlah bayar diatas 300.000 mendapat discount 10%. Total bayar akhir dihitung dari jumlah bayar dikurangi discount */


   int harga, waktu, jumlah, diskon, total;

  cout << "Waktu menginap (hitungan hari): ";
  cin >> waktu;
  cout << "Harga kamar: ";
  cin >> harga;


  if (harga > 700000)
  {
    diskon = (harga * 0.3);
    total = harga - diskon;
    cout << "Anda mendapatkan diskon 30%" << endl ;
    cout << "Total pembayaran Rp" << total << endl;
  }
  else if (harga > 500000)
  {
   diskon = (harga * 0.2);
    total = harga - diskon;
    cout << "Anda mendapatkan diskon 20%" << endl ;
    cout << "Total pembayaran Rp" << total << endl;
  }
  else if (harga >= 300000)
  {
   diskon = (harga * 0.1);
    total = harga - diskon;
    cout << "Anda mendapatkan diskon 10%" << endl ;
    cout << "Total pembayaran Rp" << total << endl;
  }
    
  }



  
