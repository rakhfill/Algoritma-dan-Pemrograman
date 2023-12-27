#include<iostream>
using namespace std;
int main(){

/*1. Buatlah program untuk mengubah huruf kecil menjadi huruf besar. 
Contoh: halo jadi HALO.*/

cout << endl;
char kata[] = "bekerja";
for(int i = 0; kata[i]; i++)
 kata[i] = toupper(kata[i]);
cout << kata << endl;
for(int j = 0; kata[j]; j++)
 kata[j] = tolower(kata[j]);
cout << kata << endl;
if (islower(kata[0]))
 cout << "Huruf kecil";
else
 cout << "Huruf besar";



}
