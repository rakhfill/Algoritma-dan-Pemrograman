#include <iostream>
using namespace std;
#include <math.h>

int main() {
int S, Vo, t, a;


  //Dibaca kecepatan awal, percepatan dan waktu. Hitung kecepatan serta jarak yang ditempuh pada gerak yang beraturan serta tuliskan hasilnya. 
  //S = Vo * t + 1/2 * a * t²

  //S = jarak tempuh
  //Vo = kecepatan awal
  //t = waktu
  //a = percepatan

  cout << "Vo: ";
  cin >> Vo;
  cout << "t: ";
  cin >> t;
  cout << "a: ";
  cin >> a;
  


  S = Vo * t + 0.5 * a * pow(t,2);

  cout << "Maka S adalah: " << S << endl;
    
}