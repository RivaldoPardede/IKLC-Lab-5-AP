#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  float jarak;

  cout << string(7,'=') << " Program Jarak(m) -> Jarak(km) " << string(7,'=') << endl;
  
  cout << "Masukkan jarak (dalam meter): ";
  cin >> jarak;

  cout << "Jarak " << jarak << "m = " << jarak*0.001 << "km";
  
  return 0;
}