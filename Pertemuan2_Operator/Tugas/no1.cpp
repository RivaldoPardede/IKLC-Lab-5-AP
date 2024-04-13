#include <iostream>
#include <string>
using namespace std;

int main() {
  system("CLS");
  int i,k,l,c,u,s,bitwise;
  bool hasil;
  i = 2;
  k = 7;
  l = 1;
  c = 9;
  u = 5;
  s = 6;
  //1a
  hasil = (3-1 < i) || (k-5 > 8 + 2) && (l+7 >= 9+3);
  cout << "3-1 < i OR k-5 > 8 + 2 AND l+7 >= 9+3 = " << hasil << endl;
  //1b
  hasil = (l%3 > u) && (c/u < s) || (3*i-k > 0);
  cout << "l%3 > u AND c/u < s OR 3*i-k > 0 = " << hasil << endl;
  //1c
  hasil = (i-9 > k) || (l+3 < 4*c);
  cout << "i-9 > k OR l+3 < 4*c = " << hasil << endl;
  //1d
  bitwise = i | k & l ^ 3 << 2;
  cout << "i OR k AND l XOR 3 SHL 2 = " << bitwise;
  return 0;
}