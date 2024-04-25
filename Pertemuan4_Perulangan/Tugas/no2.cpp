#include <iostream>
#include <cctype>
using namespace std;

int main() {
  system("CLS");
  
  string kalimat;
  char kata;
  int jumlahCharTerhapus = 0;

  cout << "Masukkan suatu kalimat: ";
  getline(cin, kalimat);

  cout << "Masukkan huruf yang ingin dihapus: ";
  cin >> kata;
  kata = tolower(kata);

  cout << "\nHasil -> ";
  for (char c : kalimat) {
    if (tolower(c) == kata) { 
      jumlahCharTerhapus++;
    } else {
      cout << c;
    }
  }
  cout << "\nKarakter Terhapus: " << jumlahCharTerhapus;
  
  return 0;
}
