#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int n, nilai = 1;

  cout << "Input Jumlah Deret: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << nilai << " ";
    nilai += (i % 2 == 1)? 5 : 3;
  }
  
  return 0;
}