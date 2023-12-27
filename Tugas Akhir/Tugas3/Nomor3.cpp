#include <iostream>
using namespace std;
int main() {

  int angka, tinggi;
  
//Apabila tinggi seseorang > 160cm, dikategorikan “Manusia Melar”

cout << "Masukkan angka: ";
cin >> angka;

if (angka > 160)
{
  cout << "Manusia melar";
}
  else
{
  cout << "Bukan manusia melar";
}
  
}