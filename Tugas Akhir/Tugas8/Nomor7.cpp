#include<iostream>
using namespace std;
int main(){
    /*7. Buatlah program untuk mengkonversi bilangan biner ke bilangan desimal.*/

int biner, desimal = 0, i = 1, digit;

cout<< endl;
cout<< "\tProgram Konversi Biner ke Desimal\n";
cout<< "=================================================\n";

cout<< "Masukkan angka biner: ";
cin>> biner;
cout<< "Angka desimal dari biner "<< biner;

while(biner!=0){
    digit = biner % 10;
    desimal = desimal + (digit * i);
    i = i * 2;
    biner = biner / 10;
}

cout<< " adalah: "<< desimal;

}