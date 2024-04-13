#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  string kata, kalimat;

  cout << string(10,'=') << " Perbedaan GETLINE dan CIN " << string(10,'=') << endl;

  cout << "Masukkan Sebuah Kata: ";
  getline(cin, kata);

  cout << "Masukkan Sebuah Kalimat: ";
  getline(cin,kalimat);

  cout << "Output perintah GETLINE: \n";
  cout << "Kata: " << kata << endl;;
  cout << "Kalimat: " << kalimat << endl << endl;

  // Getline akan membaca inputan sampai mendapat enter(ganti baris)
  // Getline efektif digunakan pada inputan yang lebih dari 1 kata

  cout << "Masukkan Sebuah Kata: ";
  cin >> kata;

  cout << "Masukkan Sebuah Kalimat: ";
  cin >> kalimat;

  cout << "Output perintah CIN: \n";
  cout << "Kata: " << kata << endl;;
  cout << "Kalimat: " << kalimat;

  // Cin akan berhenti membaca inputan jika mendapat spasi
  // Sehingga Cin tidak efektif jika digunakan untuk menangkap kalimat

  
  return 0;
}