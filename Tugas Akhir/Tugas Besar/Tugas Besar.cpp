#include <iostream>
#include <string>
using namespace std;

/* Program Sistem rental Mobil. Dengan inputan(v), fungsi string append minimal 3x(v), do while(v), fungsi prototype(v), for(v), if else(v), switch case(v), runtutan(v), array(v), overloading (optional), pseudocode */


//FUNGSI PROTOTYPE
int hitung2(int harga_sewa, int waktu_sewa, int lama_sewa);


int main(){ 
  
int waktu_sewa, lama_sewa, harga_sewa, bayar, kembali, kode, total, diskon, nik; //Variabel data penyewa & bill bayar
char menu; //Variabel kembali ke menu
string jenis_mobil[7] = {"Honda CRV          = Rp450000", "Honda Brio         = Rp300000", "Toyota Altis       = Rp500000", "Mitsubishi Xpander = Rp400000", "Pajero Sport       = Rp700000"};  //Deklarasi harga mobil
string jenis_mobil2[7] = {"Honda CRV", "Honda Brio", "Toyota Altis", "Mitsubishi Xpander", "Pajero Sport"};  //Deklarasi nama mobil
string nama1, nama2; // Variabel fungsi append


  
  //Do while = untuk kembali ke menu utama
do{
   cout << endl;
   cout<< "~~~~~~~~~~~~~~~~~~~~~~RENTAL MOBIL FIRJA~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  // Looping = untuk mengubah angka 0 dari array ke 1 
   for (int i = 0; i < 5; i++){
   cout<< " " << i+1 << ". "<< jenis_mobil[i] <<endl;
  }
   cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<< endl;
  
  // Untuk memilih mobil sesuai kode
   cout<< "Masukkan kode mobil: ";
   cin>> kode;

  // Switch case = untuk mengalihkan output dari setiap pilihan mobil
switch(kode){
  case 1:  
   int harga_sewa = 450000; // Deklarasi harga sewa mobil
   cout<< endl;
   cout<< "=======================Data Penyewa Mobil========================"<<endl;
   cout<< "Masukkan nama depan          : ";
   cin>> nama1;
   cout<< "Masukkan nama belakang       : ";
   cin>> nama2;
   cout<< "Masukkan NIK                 : ";
   cin>> nik;
   cout<< "Lama sewa (per hari)         : ";
   cin>> lama_sewa; 


   cout << "\033[2J\033[2H"; //Untuk clear screen
    
   cout<< endl;
   cout<< "=========================Bill Pembayaran========================="<<endl; 
   nama1.append(nama2); //Fungsi Append = untuk menggabungkan nama1 & nama2
   cout<< "Nama Penyewa                  : "<< nama1 <<endl;
   cout<< "NIK                           : "<< nik << endl;
   cout<< "Menyewa mobil selama          : "<< lama_sewa << " hari"<<endl; 
   cout<< "Mobil yang disewa             : "<< jenis_mobil2[kode-1]<<endl;
   cout<< "Harga sewa mobil "<< jenis_mobil2[1-1]<< "    : Rp"<<harga_sewa<<endl;
   cout<< "Harga sewa mobil selama "<< lama_sewa <<" hari: Rp"; 
	 cout<< hitung2 (harga_sewa, waktu_sewa, lama_sewa)<< endl; 
    waktu_sewa = hitung2(harga_sewa, waktu_sewa, lama_sewa);
    
    // If else =  Untuk menentukan diskon
   if(waktu_sewa > 450000){
     diskon = waktu_sewa * 0.3;  //Rumus menghitung diskon
     total = waktu_sewa - diskon; //Rumus menghitung total
     cout<< "Diskon                        : Rp"<<diskon<<endl;
     cout<< "Harga setelah di diskon       : Rp"<< total<<endl;
     cout<< "Total bayar                   : Rp"<<total<<endl;
     cout<< "-----------------------------------------------------------------"<<endl;
     cout<< "Jumlah uang yang di bayar kan : Rp"; 
     cin>> bayar;
       kembali = bayar - total;  // Untuk mengitung uang kembalian
     cout<< "Uang kembali                  : Rp" << kembali;
     cout<< endl;
     cout<< "Anda mendapat diskon 30%"<<endl;
     cout<< "================================================================="<<endl;
     }
  
 else{
   cout<< "Maaf anda tidak mendapat diskon\n";
   cout<< "Total yang harus dibayar      : Rp"<<waktu_sewa<<endl;
 }  
    }

  
   // Switch case = untuk mengalihkan output dari setiap pilihan mobil
switch(kode){
   case 2:  
   int harga_sewa = 300000;  // Deklarasi harga sewa mobil
   cout<< endl;
   cout<< "=======================Data Penyewa Mobil========================"<<endl;
   cout<< "Masukkan nama depan          : ";
   cin>> nama1;
   cout<< "Masukkan nama belakang       : ";
   cin>> nama2;
   cout<< "Masukkan NIK                 : ";
   cin>> nik;
   cout<< "Lama sewa (per hari)         : ";
   cin>> lama_sewa; 

   cout << "\033[2J\033[2H"; //Untuk clear screen
    
   cout<< endl;
   cout<< "=========================Bill Pembayaran========================="<<endl; 
   nama1.append(nama2); //Fungsi Append = untuk menggabungkan nama1 & nama2
   cout<< "Nama Penyewa                  : "<< nama1 <<endl;
   cout<< "NIK                           : "<< nik << endl;
   cout<< "Menyewa mobil selama          : "<< lama_sewa << " hari"<<endl; 
   cout<< "Mobil yang disewa             : "<< jenis_mobil2[kode-1]<<endl;
   cout<< "Harga sewa mobil "<< jenis_mobil2[2-1]<< "   : Rp"<<harga_sewa<<endl;
   cout<< "Harga sewa mobil selama "<< lama_sewa <<" hari: Rp"; 
	 cout<< hitung2 (harga_sewa, waktu_sewa, lama_sewa)<< endl; 
    waktu_sewa = hitung2(harga_sewa, waktu_sewa, lama_sewa);
     

     // If else =  Untuk menentukan diskon
  if(waktu_sewa > 1000000){
     diskon = waktu_sewa * 0.1;  //Rumus menghitung diskon
     total = waktu_sewa - diskon; //Rumus menghitung total
     cout<< "Diskon                        : Rp"<<diskon<<endl;
     cout<< "Harga setelah di diskon       : Rp"<< total<<endl;
     cout<< "Total bayar                   : Rp"<<total<<endl;
     cout<< "-----------------------------------------------------------------"<<endl;
     cout<< "Jumlah uang yang di bayar kan : Rp"; 
     cin>> bayar;
       kembali = bayar - total;  // Untuk mengitung uang kembalian
     cout<< "Uang kembali                  : Rp" << kembali;
     cout<< endl;
     cout<< "Anda mendapat diskon 10%"<<endl;
     cout<< "================================================================="<<endl;
     }

     else{
   cout<< "Maaf anda tidak mendapat diskon\n";
   cout<< "Total yang harus dibayar      : Rp"<<waktu_sewa<<endl;
 }  
    }


  // Switch case = untuk mengalihkan output dari setiap pilihan mobil
switch(kode){
  case 3:  
   int harga_sewa = 500000;  // Deklarasi harga sewa mobil
   cout<< endl;
   cout<< "=======================Data Penyewa Mobil========================"<<endl;
   cout<< "Masukkan nama depan          : ";
   cin>> nama1;
   cout<< "Masukkan nama belakang       : ";
   cin>> nama2;
   cout<< "Masukkan NIK                 : ";
   cin>> nik;
   cout<< "Lama sewa (per hari)         : ";
   cin>> lama_sewa; 

   cout << "\033[2J\033[2H"; //Untuk clear screen
    
   cout<< endl;
   cout<< "=========================Bill Pembayaran========================="<<endl; 
   nama1.append(nama2); //Fungsi Append = untuk menggabungkan nama1 & nama2
   cout<< "Nama Penyewa                  : "<< nama1 <<endl;
   cout<< "NIK                           : "<< nik << endl;
   cout<< "Menyewa mobil selama          : "<< lama_sewa << " hari"<<endl; 
   cout<< "Mobil yang disewa             : "<< jenis_mobil2[kode-1]<<endl;
   cout<< "Harga sewa mobil "<< jenis_mobil2[3-1]<< " : Rp"<<harga_sewa<<endl;
   cout<< "Harga sewa mobil selama "<< lama_sewa <<" hari: Rp"; 
	 cout<< hitung2 (harga_sewa, waktu_sewa, lama_sewa)<< endl; 
    waktu_sewa = hitung2(harga_sewa, waktu_sewa, lama_sewa);
    

    // If else =  Untuk menentukan diskon
   if(waktu_sewa > 1000000){
     diskon = (waktu_sewa * 0.4);  //Rumus menghitung diskon
     total = waktu_sewa - diskon;  //Rumus menghitung total
     cout<< "Diskon                        : Rp"<<diskon<<endl;
     cout<< "Harga setelah di diskon       : Rp"<< total<<endl;
     cout<< "Total bayar                   : Rp"<<total<<endl;
     cout<< "-----------------------------------------------------------------"<<endl;
     cout<< "Jumlah uang yang di bayar kan : Rp"; 
    cin>> bayar;
      kembali = bayar - total;  // Untuk mengitung uang kembalian
     cout<< "Uang kembali                  : Rp" << kembali;
     cout<< endl;
     cout<< "Anda mendapat diskon 40%"<<endl;
     cout<< "================================================================="<<endl;
     }

     else{
   cout<< "Maaf anda tidak mendapat diskon\n";
   cout<< "Total yang harus dibayar      : Rp"<<waktu_sewa<<endl;
 }  
    }


  // Switch case = untuk mengalihkan output dari setiap pilihan mobil
switch (kode){
  case 4:  
   int harga_sewa = 400000;  // Deklarasi harga sewa mobil
   cout<< endl;
   cout<< "=======================Data Penyewa Mobil========================"<<endl;
   cout<< "Masukkan nama depan          : ";
   cin>> nama1;
   cout<< "Masukkan nama belakang       : ";
   cin>> nama2;
   cout<< "Masukkan NIK                 : ";
   cin>> nik;
   cout<< "Lama sewa (per hari)         : ";
   cin>> lama_sewa; 

   cout << "\033[2J\033[2H";  //Untuk clear screen
    
   cout<< endl;
   cout<< "=========================Bill Pembayaran========================="<<endl; 
   nama1.append(nama2); //Fungsi Append = untuk menggabungkan nama1 & nama2
   cout<< "Nama Penyewa                        : "<< nama1 <<endl;
   cout<< "NIK                                 : "<< nik << endl;
   cout<< "Menyewa mobil selama                : "<< lama_sewa << " hari"<<endl; 
   cout<< "Mobil yang disewa                   : "<< jenis_mobil2[kode-1]<<endl;
   cout<< "Harga sewa mobil "<< jenis_mobil2[4-1]<< " : Rp"<<harga_sewa<<endl;
   cout<< "Harga sewa mobil selama "<< lama_sewa <<" hari      : Rp"; 
	 cout<< hitung2 (harga_sewa, waktu_sewa, lama_sewa)<< endl; 
    waktu_sewa = hitung2(harga_sewa, waktu_sewa, lama_sewa);


    // If else =  Untuk menentukan diskon
   if(waktu_sewa > 1000000){
     diskon = (waktu_sewa * 0.2);  //Rumus menghitung diskon
     total = waktu_sewa - diskon;  //Rumus menghitung total
     cout<< "Diskon                              : Rp"<<diskon<<endl;
     cout<< "Harga setelah di diskon             : Rp"<< total<<endl;
     cout<< "Total bayar                         : Rp"<<total<<endl;
     cout<< "-----------------------------------------------------------------"<<endl;
     cout<< "Jumlah uang yang di bayar kan       : Rp"; 
     cin>> bayar;
       kembali = bayar - total;  // Untuk mengitung uang kembalian
     cout<< "Uang kembali                        : Rp" << kembali;
     cout<< endl;
     cout<< "Anda mendapat diskon 20%"<<endl;
     cout<< "================================================================="<<endl;
     }

     else{
   cout<< "Maaf anda tidak mendapat diskon\n";
   cout<< "Total yang harus dibayar            : Rp"<<waktu_sewa<<endl;
 }  
    }


  // Switch case = untuk mengalihkan output dari setiap pilihan mobil
switch (kode){
  case 5:  
   int harga_sewa = 700000;  // Deklarasi harga sewa mobil
   cout<< endl;
   cout<< "=======================Data Penyewa Mobil========================"<<endl;
   cout<< "Masukkan nama depan          : ";
   cin>> nama1;
   cout<< "Masukkan nama belakang       : ";
   cin>> nama2;
   cout<< "Masukkan NIK                 : ";
   cin>> nik;
   cout<< "Lama sewa (per hari)         : ";
   cin>> lama_sewa; 

   cout << "\033[2J\033[2H";  //Untuk clear screen
    
   cout<< endl;
   cout<< "=========================Bill Pembayaran========================="<<endl; 
   nama1.append(nama2); //Fungsi Append = untuk menggabungkan nama1 & nama2
   cout<< "Nama Penyewa                  : "<< nama1 <<endl;
   cout<< "NIK                           : "<< nik << endl;
   cout<< "Menyewa mobil selama          : "<< lama_sewa << " hari"<<endl; 
   cout<< "Mobil yang disewa             : "<< jenis_mobil2[kode-1]<<endl;
   cout<< "Harga sewa mobil "<< jenis_mobil2[5-1]<< " : Rp"<<harga_sewa<<endl;
   cout<< "Harga sewa mobil selama "<< lama_sewa <<" hari: Rp"; 
	 cout<< hitung2 (harga_sewa, waktu_sewa, lama_sewa)<< endl; 
    waktu_sewa = hitung2(harga_sewa, waktu_sewa, lama_sewa);


    // If else =  Untuk menentukan diskon
   if(waktu_sewa > 1000000){
     diskon = (waktu_sewa * 0.2);  //Rumus menghitung diskon
     total = waktu_sewa - diskon;  //Rumus menghitung total
     cout<< "Diskon                        : Rp"<<diskon<<endl;
     cout<< "Harga setelah di diskon       : Rp"<< total<<endl;
     cout<< "Total bayar                   : Rp"<<total<<endl;
     cout<< "-----------------------------------------------------------------"<<endl;
     cout<< "Jumlah uang yang di bayar kan : Rp"; 
     cin>> bayar;
       kembali = bayar - total;  // Untuk mengitung uang kembalian
     cout<< "Uang kembali                  : Rp" << kembali;
     cout<< endl;
     cout<< "Anda mendapat diskon 20%"<<endl;
     cout<< "================================================================="<<endl;
     }

     else{
   cout<< "Maaf anda tidak mendapat diskon\n";
   cout<< "Total yang harus dibayar      : Rp"<<waktu_sewa<<endl;
 }  
    }

    cout<<endl;
     cout<< "Apakah ingin kembali ke menu utama (y/n)? ";
   cin>> menu;
   cout << "\033[2J\033[2H";  //Untuk clear screen 
  cout<< endl;
   }while(menu == 'y' || menu == 'Y');  // Jika y/Y maka program kembali ke menu utama
   cout<<endl;

   }


  // Fungsi hitung = untuk menghitung harga sewa mobil dengan jumlah hari tertentu
 int hitung2(int harga_sewa, int waktu_sewa, int lama_sewa){
      waktu_sewa =  harga_sewa * lama_sewa;
   return waktu_sewa;
    }
