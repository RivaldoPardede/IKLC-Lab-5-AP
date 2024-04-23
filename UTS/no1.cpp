#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  string kalimat;

  cout << "Masukkan suatu Kalimat: ";
  getline(cin, kalimat);


  cout << "Hasil Akhir: \n";
  for (int i = kalimat.length()-1; i >= 0; i--) {
    cout << kalimat[i] << endl;
  }

  return 0;
}