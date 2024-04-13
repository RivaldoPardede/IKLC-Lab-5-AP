#include <iostream>
using namespace std;

#define golongan1 5000000
#define golongan2 3000000
#define golongan3 2500000
#define pajak 0.05

int main() {
  system("CLS");
  
  int gaji_total, jumlah_anak, golongan;
  string nama;

  cout << "Masukkan Nama Anda: ";
  getline(cin, nama);

  cout << "Masukkan Golongan (1,2,3): ";
  cin >> golongan;

  // validasi input
  while (golongan < 1 || golongan > 3) {
    cout << "\nInputan tidak valid, ulangi kembali!\n";
    cout << "Masukkan Golongan (1,2,3): ";
    cin >> golongan;
  }

  cout << "Jumlah anak: ";
  cin >> jumlah_anak;

  // validasi input
  while (jumlah_anak < 0) {
    cout << "\nInputan tidak valid, ulangi kembali!\n";
    cout << "Jumlah anak: ";
    cin >> jumlah_anak;
  }

  switch (golongan) {
    case 1: 
      gaji_total = golongan1 - pajak * golongan1;
      break;
    case 2: 
      gaji_total = golongan2 - pajak * golongan2;
      break;
    case 3: 
      gaji_total = golongan3 - pajak * golongan3;
      break;
  }

  switch (jumlah_anak) {
    case 0: 
      gaji_total = gaji_total;
      break;
    case 1 ... 2: 
      gaji_total += (jumlah_anak * 500000);
      break;
    default: 
      gaji_total += (jumlah_anak * 750000);
      break;
  }
  
  cout << "Gaji Total: Rp. " << gaji_total;
  
  return 0;
}