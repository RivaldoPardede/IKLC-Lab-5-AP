#include <iostream>
using namespace std;

// Varible Global
int num3 = 10; 


int sumNumber(int num1, int num2 = 10) {
  // int num 3 = 10;
  // variable Lokal
  return num1 + num2 + num3;
}

int main() {
  system("CLS");

  cout << num3 << endl;
  
  int hasil = sumNumber(5, 15);

  cout << "Hasil = " << hasil;

  return 0;
}
