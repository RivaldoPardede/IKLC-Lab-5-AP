#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  // Variable Biasa
  // int angka = 10; //deklarasi dan assignment
  // cout << angka << endl; //menampilkan isi dari variable angka
  // cout << &angka << endl; //menampilkan alamat dari variable angka
  
  // int *ptrAngka; //deklarasi variable pointer
  // cout << *ptrAngka << endl; //menampilkan isi dari variable pointer
  // cout << ptrAngka << endl; //menampilkan alamat dari variable pointer
  
  // ptrAngka = &angka; //tersambung

  // cout << *ptrAngka << endl;
  // cout << ptrAngka << endl;
  // cout << &ptrAngka << endl; 

  // angka = 11;

  // cout << *ptrAngka << endl;

  // char *ptrString = "helloworld";

  // // /'0'/ = null terminator

  // cout << ptrString << endl;
  // cout << *ptrString << endl;

  int Vina;
  int *Wini;
  int **Vera;

  Vina = 23; //variable biasa

  Wini = &Vina; //Wini menyimpan alamat si Vina
  Vera = &Wini; //Vera menyimpan alamat dari si Wini

  cout << Vina << endl; //variable biasa
  cout << &Vina << endl;
  cout << *Wini << endl; //variable pointer
  cout << **Vera << endl; //variable pointer ke pointer

  cout << Vera << endl;
  // cout << endl;

  Vina
  &Vina

  *Wini
  Wini
  &Wini

  **Vera
  *Vera
  Vera 
  &Vera
  


  // Vina = 25;

  // cout << Vina << endl;
  // cout << *Wini << endl;
  // cout << **Vera << endl;

  // cout << endl;


  // *Wini = 30;

  // cout << Vina << endl;
  // cout << *Wini << endl;
  // cout << **Vera << endl;


  // cout << Vina << endl; 
  // cout << Wini << endl;
  // cout << *Wini << endl;
  // cout << **Vera << endl;
  // cout << Vera << endl;
  // cout << &Vera << endl;

  // char fakultas[] = "FASILKOMTI";
  // char *prodi = "Ilmu Komputer";

  // cout<<"Nama Fakultas = "<<fakultas<<endl;
  // cout<<"Nama Program Studi = "<<prodi<<endl<<endl;
  
  // prodi += 2;

  // cout<<"Nama Fakultas = "<<fakultas<<endl;
  // cout<<"Nama Program Studi = "<<prodi<<endl;
  
  

  return 0;
}