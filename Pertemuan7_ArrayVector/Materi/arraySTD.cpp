#include <iostream>
#include <array>
using namespace std;

int main() {
  system("CLS");

  array<int, 5> nilai;  

  for (int i = 0; i < 5; i++) {
    nilai[i] = i;
    cout << "nilai [" << i << "] = " << nilai[i] << endl;
    cout << "address : " << &nilai[i] << endl;
  }
  
  cout << "Ukuran : " << nilai.size() << endl;
  cout << "Address awal: " << nilai.begin() << endl;
  cout << "Address akhir: " << nilai.end() << endl;

  cout << "Nilai ke 2: " << nilai.at(2) << endl;

  return 0;
}