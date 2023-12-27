#include <iostream>
using namespace std;
int main() {
 /* 6. Menampilkan jumlah bilangan yang akan diinput, setelah itu menginput bilangan, lalu bandingkan bilangan yang input, tampilkan nilai 
tertinggi/terbesarnya */
  
int jumlah, i, angka, maksimal, minimal;
  
  cout << "Masukkan jumlah angka: ";
  cin >> jumlah;
cout << "Masukan " <<jumlah<< " angka\n";

  do {
for (i = 1; i <= jumlah; i++) {
      cout << "Angka ke- " <<i<<" : ";
      cin >> angka;
     
      if ( i == 1 ) {
             minimal = angka;
             maksimal = angka;
            }
            else if (minimal > angka) {
               minimal = angka;
            }
            else if (maksimal < angka) {
               maksimal = angka;
           }
           else {}
           }
  } while (i < jumlah);
    
cout << endl;
  cout << "Angka terbesar adalah: "<<maksimal<<endl;
  cout << "Angka terkecil adalah: "<<minimal<<endl;
    
  } 


