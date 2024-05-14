#include <iostream>
using namespace std;

void tukarNilai(int *j, int *k){
  int temp; 

  temp = *j; // temp = 20
  *j = *k; // j = 10
  *k = temp; // k = 20
}

int main() {
  system("CLS");
  
  int a = 20, b = 10;
  cout << "nilai a : " << a << "\nnilai b: " << b << endl;
  tukarNilai(&a, &b);
  cout << "nilai a : " << a << "\nnilai b: " << b << endl;
  // getch();

  //j = &a;
  
  return 0;
}