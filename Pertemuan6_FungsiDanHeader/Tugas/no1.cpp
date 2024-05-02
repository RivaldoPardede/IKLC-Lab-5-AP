#include <iostream>
#include <typeinfo>
using namespace std;

int sqr(int i){
    return i * i;
}

string fizzBuzz(int check) {
  if ((check % 3 == 0) && (check % 5 == 0)) {
    return "FizzBuzz";
  } else if (check % 3 == 0) {
    return "Fizz";
  } else if (check % 5 == 0) {
    return "Buzz";
  } else {
    return to_string(check);
  }
}

void deret_segitiga(int length) {
  string hasil;
  int angka[length], hasil_angka, a, b, c;

  a = 1;
  b = 1; 
  c = 0;

  for (int i = 0; i < length; i++) {
    angka[i] = (a * sqr(i+1)) + (b * (i+1)) + c;

    hasil = fizzBuzz(angka[i]);

    if (hasil == "FizzBuzz" || hasil == "Fizz" || hasil == "Buzz") {
      cout << hasil << " ";
    } else {
      hasil_angka = stoi(hasil);
      cout << hasil_angka << " ";
    }
  }

  cout << "\nTipe data " << hasil_angka << " adalah " << typeid(hasil_angka).name();
}

int main() {
  system("CLS");
  string hasil;
  int hasil_angka, length;

  cout << "Panjang Deret: ";
  cin >> length;

  cout << "Deret Segitiga -> ";
  deret_segitiga(length); 

  return 0;
}