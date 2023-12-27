#include<iostream>
#include<string.h>
using namespace std;

/* 5. Buatlah program dengan menggunakan struktur, array dan fungsi (struktur 
sebagai argumen fungsi) untuk menampung dan menampilkan data pegawai: 
nip, nama, alamat, dan tanggal lahir */


// STRUCT
struct data_pegawai{
    char nip[100];
    char nama[100]; 
    char alamat[100];
    char tgllhr[100];   
} pegawai_1, pegawai_2;

//FUNGSI
void Firja (data_pegawai pegawai_1);


int main(){
    // Deklarasi data
    
    // Pegawai 1
    strcpy(pegawai_1.nip,"4522210020");
    strcpy (pegawai_1.nama,"Firja");
    strcpy(pegawai_1.alamat,"Jl. Barito");
    strcpy(pegawai_1.tgllhr,"30 Februari");

    strcpy(pegawai_2.nip,"4522210054");
    strcpy(pegawai_2.nama,"Fulan");
    strcpy(pegawai_2.alamat,"Jl. Raya");
    strcpy(pegawai_2.tgllhr,"2 Maret");

  Firja (pegawai_1);
  
    // Pegawai 2
    cout<<endl;
    cout<< "NIP: "<< pegawai_2.nip<<endl;
    cout<< "Nama: "<< pegawai_2.nama<< endl;
    cout<< "Alamat pegawai: "<< pegawai_2.alamat<< endl;
    cout<< "Tanggal lahir: "<< pegawai_2.tgllhr<< endl;

    
    return 0;

}

void Firja (data_pegawai pegawai_1){
  cout<<endl;
    cout<< "NIP: "<< pegawai_1.nip<<endl;
    cout<< "Nama: "<< pegawai_1.nama<< endl;
    cout<< "Alamat pegawai: "<< pegawai_1.alamat<< endl;
    cout<< "Tanggal lahir: "<< pegawai_1.tgllhr<< endl;

}






