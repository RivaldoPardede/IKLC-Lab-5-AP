#include <iostream>
using namespace std;

float sqr(float x) {
  return x * x;
}

int main() {
  system("CLS");
  
  float berat_badan, tinggi_badan, BMI;

  cout << "Masukkan berat badan anda (kg): ";
  cin >> berat_badan;

  while (berat_badan < 0) {
    cout << "\nInputan tidak valid, ulangi kembali!\n";
    cout << "Masukkan berat badan anda (kg): ";
    cin >> berat_badan;
  }

  cout << "Masukkan tinggi badan anda (m): ";
  cin >> tinggi_badan;

  while (tinggi_badan < 0) {
    cout << "\nInputan tidak valid, ulangi kembali!\n";
    cout << "Masukkan tinggi badan anda (m): ";
    cin >> tinggi_badan;
  }

  BMI = berat_badan / sqr(tinggi_badan);

  if (BMI < 18.5) {
    cout << "\nBerat badan kurang";
  } else if (BMI >= 18.5 || BMI < 25) {
    cout << "\nBerat badan normal";
  } else if (BMI >= 25 || BMI < 30) {
    cout << "\nBerat badan berlebih";
  } else {
    cout << "\nObesitas";
  }
  
  return 0;
}