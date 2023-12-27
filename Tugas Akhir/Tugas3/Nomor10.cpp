#include <iostream>
using namespace std;

int main() {
  float nilai, uts, uas, tugas, absen;

//Apabila Nilai Akhir < 60, maka “Tidak Lulus” [Nilai Akhir = 40%*UAS+ 30%*UTS+20%*Tugas+10%*Absen]

cout << "Masukkan nilai UTS: ";
cin >> uts;
cout << "Masukkan nilai UAS: ";
cin >> uas;  
cout << "Masukkan nilai tugas: ";
cin >> tugas;
cout << "Masukkan absen: ";
cin >> absen;
  
nilai = (uas * 40)/100 + (uts * 30)/100 + (tugas * 20)/100 + (absen * 10)/100;

  if (nilai > 60)
  {
    cout << "Lulus";
  }
  else if (nilai < 60)
  {
    cout << "Tidak lulus";
  }
  
}