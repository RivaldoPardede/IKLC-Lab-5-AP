#include <iostream>
using namespace std;

int main() {

  int angka;

  cout << "Masukkan suatu bilangan bulat: ";
  cin >> angka;

  cout << "Angka " << angka << " adalah " << (angka % 2 == 0? " bilangan genap": " bilangan ganjil") << endl;

  for (int i = 3; i <= 7; i += 2) {
    cout << "Angka " << angka << (angka % i == 0 ? " habis" : " tidak habis") << " dibagi " << i << endl;
  }
  return 0;
}