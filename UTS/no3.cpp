#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int bilangan;
  bool isPrime = true;

  cout << "Input suatu bilangan bulat positif: ";
  cin >> bilangan;

  while (bilangan < 0) {
    cout << "Inputan tidak valid, ulangi kembali" << endl;
    cout << "Input suatu bilangan bulat positif: ";
    cin >> bilangan;
  }

  if (bilangan <= 1) {
    isPrime = false;
  } else {
    for (int i = 2; i < bilangan; i++) {
      if (bilangan % i == 0) {
        isPrime = false;
        break;
      }
    }
  }

  cout << bilangan << (isPrime ? " adalah bilangan Prima" : " Bukan bilangan Prima");

  return 0;
}