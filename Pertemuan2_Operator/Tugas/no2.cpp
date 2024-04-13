#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int sqr(int b){
  b *= b;
  return(b);
}

int main() {
  system("CLS");
  int a,b,c;
  float hasil;
  
  cout << "Input nilai a: "; cin >> a;
  cout << "Input nilai b: "; cin >> b;
  cout << "Input nilai c: "; cin >> c;
  if (a = 1){
      cout << "Akar persamaan " << "x^2 + " << b << "x + " << c << endl;
  } else {
      cout << "Akar persamaan " << a << "x^2 + " << b << "x + " << c << endl;
  }
  cout << fixed << setprecision(3);
  hasil = (-b + (sqrt(sqr(b) - 4*a*c))) / 2*a;
  cout << "x 1 =  " << hasil << endl;
  hasil = (-b - (sqrt(sqr(b) - 4*a*c))) / 2*a;
  cout << "x 2 =  " << hasil << endl;
}