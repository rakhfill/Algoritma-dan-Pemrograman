#include <iostream>
using namespace std;
int main() {
/* 6. menampilkan “2 buah variabel TglLhr dan BlnLhr, dimana variabel 
BlnLhr menggunakan Peningkatan Positif sedangkan TglLhr 
menggunakan Peningkatan Negatif” */

int TglLhr = 1;
int BlnLhr = 12;

  for (int i = 0; TglLhr <= 31 && BlnLhr >= 1; i++){
    cout << "Tanggal Lahir: " << TglLhr << endl;
    cout << "Bulan Lahir: " << BlnLhr << endl;
    TglLhr++;
    BlnLhr--;
  }
  
}