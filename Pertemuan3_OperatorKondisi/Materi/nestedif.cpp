#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int umur;

  cout << "Berapa umur kamu: ";
  cin >> umur;

  if (umur < 0) {
    cout << "Kamu bukan manusia";
  } else {
    switch (umur) {
    case 1 ... 10:
      cout << "test";
      break;
    case 11 ... 20:
      cout << "test2";
      break;
    case 21 ... 30:
      cout << "test3";
      break;
    case 31 ... 40:
      cout << "test4";
      break;
    default:
      cout << "input invalid";
      break;
    }
  }

  
  
  return 0;
}