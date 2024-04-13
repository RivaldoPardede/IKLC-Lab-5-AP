#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int bilangan;

  cout << "Input suatu bilangan bulat positif: "
  cin >> bilangan;

  cout << bilangan << " merupakan bilangan " (bilangan % 2 == 0? " genap" : " ganjil");
  
  return 0;
}