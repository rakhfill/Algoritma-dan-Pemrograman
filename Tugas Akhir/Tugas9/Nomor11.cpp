#include<iostream>
#include<math.h>
using namespace std;


/* 11.Buatlah program untuk menghitung volume kerucut, silinder, dan bola 
dengan menggunakan function overloading. */

/* Kerucut = 1/3 * pi * r * r * t
Silinder =  pi * r * r * t
Bola = 4/3 * pi * r * r * r
 */

// OVERLOADING

// Kerucut
double r, t, pi = 3.14;
double volume_kerucut (double r, double t, double pi){   //parameter   //volume_kerucut = fungsi
    double volume = 0.33 * pi * pow(r,2) * t;
    return volume;
}

// Silinder
// double r, t, pi = 3.14;
double volume_silinder (double r, double t, double pi){
    double volume = pi * pow(r,2) * t;
    return volume;
}

// Bola
// double r, t, pi = 3.14;
double volume_bola (double r, double pi){
    double volume = 0.75 * pi * pow(r,3);
    return volume;
}


int main(){
    cout<< endl;
    cout<< "\tMenghitung Volume Kerucut\n";
    cout<< "=======================================\n";
    cout<< "Masukkan jari jari: ";
    cin>> r;
    cout<< "Masukkan tinggi: ";
    cin>> t;

    cout<< "Volume kerucut tersebut adalah: "<< volume_kerucut(r, t, pi) << " cm"<< endl;


    cout<< endl;
    cout<< "\tMenghitung Volume Silinder\n";
    cout<< "=========================================\n";
    cout<< "Masukkan jari jari: ";
    cin>> r;
    cout<< "Masukkan tinggi: ";
    cin>> t;

    cout<< "Volume silinder tersebut adalah: "<< volume_silinder(r, t, pi)<< " cm"<< endl;


    cout<< endl;
    cout<< "\tMenghitung Volume Bola\n";
    cout<< "=====================================\n";
    cout<< "Masukkan jari jari: ";
    cin>> r;

    cout<< "Volume bola tersebut adalah: "<< volume_bola(r, pi)<< " cm"<< endl;

    return 0;
    
}
