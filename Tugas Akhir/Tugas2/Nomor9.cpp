#include <iostream>
using namespace std;

int main() {
int Vt, Vo, a, t;
  
  //Dibaca kecepatan awal, percepatan dan waktu. Hitung kecepatan serta jarak yang ditempuh pada gerak yang beraturan serta tuliskan hasilnya. Vt = Vo + a * t

// Vt = kecepatan akhir (m/s)
// Vo = kecepatan mula mula (m/s)
// At = a: percepatan, t: waktu (s)
  

  cout << "Masukkan Vo: ";
  cin >> Vo;
  cout << "Masukkan a: ";
  cin >> a;
  cout << "Masukkan t: ";
  cin >> t;
 

  Vt = Vo + a * t;

  cout << "Maka Vt adalah: " << Vt << endl;
  
}