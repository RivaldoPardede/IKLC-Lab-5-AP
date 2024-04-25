#include <iostream>
using namespace std;

int sqr(int x) {
  return x * x;
}

int main() {
  system("CLS");
  
  int n, hasilJumlah = 0;

  cout << "Masukkan nilai n: ";
  cin >> n;

  while (n < 0) {
    cout << "Inputan tidak valid, ulangi kembali" << endl;
    cout << "Masukkan nilai n: ";
    cin >> n;
  }
  
  for (int i = 1; i <= n; i++) {
    hasilJumlah += (i % 2 == 0)? sqr(i) : 0;
  }

  cout << hasilJumlah;

  return 0;
}