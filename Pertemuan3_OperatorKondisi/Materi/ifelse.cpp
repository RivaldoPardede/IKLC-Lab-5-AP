#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  char nilai;

  cout << "Berapa nilai kamu: ";
  cin >> nilai;

  if (nilai == 'A') {
    cout << "Bagus, Pertahankan";
  } else if (nilai == 'B') {
    cout << "Tingkatkan";
  } else {
    cout << "Invalid, silahkan input dengan benar";
  }
  
  return 0;
}