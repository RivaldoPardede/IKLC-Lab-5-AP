#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int n;
  string kata = "Hore!";

  cout << "Masukkan nilai n: ";
  cin >> n;

  while (n < 1 || n > 10000) {
    cout << "Inputan tidak valid, ulangi kembali" << endl;
    cout << "Masukkan nilai n: ";
    cin >> n;
  }
  
  for (char c : kata) {
    if (c == 'o' || c == 'e' || c == '!') {
      for (int j = 0; j < n; j++) { cout << c; }
    } else {
      cout << c;
    }
  }

  return 0;
}