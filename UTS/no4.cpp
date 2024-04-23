#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int n;

  cout << "Input tinggi diamond (ganjil): ";
  cin >> n;

  while (n % 2 == 0) {
    cout << "Input tinggi diamond (ganjil): ";
    cin >> n;
  }

  for (int i = 0; i < n; i++) {
    if (i <= (n/2)) {
      for (int j = 0; j <= (n/2)-(i+1); j++) {
        cout << " ";
      }
      for (int k = 0; k <= i; k++) {
        cout << "* ";
      }
    } else {
      for (int j = 0; j < i - (n/2); j++) {
        cout << " ";
      } 
      for (int k = 0; k < (n-i); k++) {
        cout << "* ";
      }
    }
    cout << endl;
  }

  return 0;
}