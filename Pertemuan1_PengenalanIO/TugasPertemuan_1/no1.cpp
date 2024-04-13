#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  string nama, nim;
  char kom;
  float ipk;

  cout << string(10,'=') << " Program Pendataan Mahasiswa " << string(10,'=') << endl;

  cout << "Masukkan nama lengkap anda: ";
  getline(cin, nama);

  cout << "Masukkan nim anda: ";
  cin >> nim;

  cout << "Masukkan kom anda: ";
  cin >> kom;

  cout << "masukkan ipk anda: ";
  cin >> ipk;

  cout << endl << string(10,'=') << " Berikut Data Diri anda " << string(10,'=') << endl;

  cout << "Nama Lengkap: " << nama << endl;
  cout << "NIM: " << nim << endl;
  cout << "KOM: " << kom << endl;
  cout << "IPK: " << ipk;
  
  return 0;
}