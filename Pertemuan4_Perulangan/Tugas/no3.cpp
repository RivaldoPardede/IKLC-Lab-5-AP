#include <iostream>
#include <cmath>
using namespace std;

int main() {
  system("CLS");
  
  int tahun, interval;

  cout << "Masukkan Tahun: ";
  cin >> tahun;

  while (tahun < 1000 || tahun > 9000) {
    cout << "Inputan tidak valid, ulangi kembali" << endl;
    cout << "Masukkan Tahun: ";
    cin >> tahun;
  }

  cout << "Masukkan Interval: ";
  cin >> interval;

  while (interval < -tahun || interval > 9999-tahun) {
    cout << "Inputan tidak valid, ulangi kembali" << endl;
    cout << "Masukkan Interval: ";
    cin >> interval;
  }

  for (int i = 0; i <= abs(interval); i++) {
    cout << tahun << (tahun % 4 == 0? " kabisat" : " bukan kabisat") << endl;
    tahun += (interval > 0)? 1 : -1;
  }
  
  return 0;
}