#include <iostream>
using namespace std;

int main() {
int A [3][2], B [3][2], C [3][2];
    int angka;
    int jumlah;

    // Matriks A
    cout << "Matriks A"<< endl;
    for(int i = 0; i < 3; i++)
      {
        for (int y = 0; y < 2; y++)
        {
          cout << "Masukkan angka ke [" << i << "] [" << y << "] = ";
          cin >> A[i][y];
        }
       }
    
    // Matriks B
  cout << endl;
       cout << "Matriks B" <<endl;
     for (int i = 0; i < 3; i++)
       {
         for (int y = 0; y < 2; y++)
         {
   cout << "Masukkan angka ke [" << i << "] [" << y << "] = ";
   cin >> B[i][y];
   jumlah = A[i][y] + B[i][y];
   C[i][y] = jumlah;
    }
   }

   // Hasil
  cout << endl;
   cout << "Hasil penjumlahan matriks ordo 3x2 tersebut adalah: "<< endl;
   for (int i = 0; i < 3; i++)
     {
       for (int y = 0; y < 2; y++)
         {
          cout << "C [" << i << "] [" << y << "] = " << C[i][y] << endl;
   
         }
      }

}
    
 
    