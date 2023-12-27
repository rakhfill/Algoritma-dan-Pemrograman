#include<iostream>
using namespace std;
int main(){
/* 5. Seperti soal nomer tiga, Disuatu kampus 10 mahasiswa mengikuti ujian mata kuliah ”Pemrograman I”. Nilai yang dihasilkan oleh ke 10 mahasiswa tersebut adalah 80, 70, 50, 65, 85, 70, 60, 55, 90, 72. Dengan bantuan program C++. Buatlah input data dari nilai tersebut dan nilai rata-ratanya */

int jumlah, a;
  cout << "\n Masukkan jumlah data nilai: ";
  cin >> jumlah;

  float nilai[11], total, rerata; 
  for(int a = 1; a <= jumlah; a++){
    cout << "\n Nilai ke-"<<a<<" = ";
    cin >> nilai[a];
  }
  for(int b = 1; b <= jumlah; b++){
    total += nilai[b];
  }
  cout << endl;
  cout << "Total nilai = "<<total<<endl;
  rerata = total/jumlah;
  cout << "Rata-rata ="<<rerata<<endl;


}