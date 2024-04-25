#include <iostream>
using namespace std;

int pangkat(int angka, int pangkat = 2) {
  int hasil = 1;
  for (int i = 1; i <= pangkat; i++ ) {
    hasil = hasil * angka;
  }
  return hasil;
}


int main() {
  system("CLS");
  
  cout << pangkat(3,3);
  
  return 0;
}