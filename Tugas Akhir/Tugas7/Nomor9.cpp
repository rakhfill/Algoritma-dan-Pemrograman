#include<iostream>
using namespace std;

int main(){
/* 9. Buat array untuk angka genap dan ganjil!  */

int angka[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

cout << "\t\t\t\t Menampilkan Ganjil dan Genap dengan Array \n";
cout << endl;
cout << "Ganjil: ";
for(int i = 0; i < 10; i++){
    if(angka[i] % 2 != 0){

        cout << angka[i] << ", ";
    }
    }
    cout << endl;
    cout << "Genap: ";
    for(int j = 0; j < 10; j++){
        if(angka[j] % 2 == 0){
            cout << angka[j] << ", ";
        }
    }
}

