#include <iostream>
#include <cmath>
using namespace std;

#define PHI 3.14

double sqr(double x) {
  return x*x;
}

int main() {
  system("CLS");
  double r;

  // Kerucut
  double s, tKerucut, vKerucut, lpKerucut, lsKerucut, laKerucut;

  cout << string(10, '=') << " Kerucut " << string(10, '=') << endl;

  cout << "Input jari-jari kerucut: ";
  cin >> r;

  cout << "Input tinggi kerucut: ";
  cin >> tKerucut;

  laKerucut = PHI * sqr(r);
  vKerucut = 1.00/3.00 * laKerucut * tKerucut;
  s = sqrt(sqr(tKerucut) + sqr(r));
  lsKerucut = PHI * r * s;
  lpKerucut = laKerucut + lsKerucut;

  cout << "\nVolume Kerucut = " << vKerucut << endl;
  cout << "Luas Permukaan Kerucut = " << lpKerucut << endl << endl;

  // Limas Segitiga
  double tSegitiga, aSegitiga, tLimas, tinggiSisiTegak, vLimas, lsLimas, lpLimas, laLimas, sisi;

  cout << string(10, '=') << " Limas Segitiga " << string(10, '=') << endl;

  cout << "Input alas Segitiga: ";
  cin >> aSegitiga;

  cout << "Input tinggi Segitiga: ";
  cin >> tSegitiga;

  cout << "Input tinggi Limas: ";
  cin >> tLimas;

  laLimas = 1.00/2.00 * aSegitiga * tSegitiga;
  vLimas = 1.00/3.00*(laLimas * tLimas);
  tinggiSisiTegak = sqrt(sqr(tLimas) + sqr(tSegitiga/2));
  lsLimas = 1.00/2.00*(3 * aSegitiga * tinggiSisiTegak);
  lpLimas = laLimas + lsLimas;

  cout << "\nVolume Limas Segitiga = " << vLimas << endl;
  cout << "Luas Permukaan Limas Segitiga = " << lpLimas << endl << endl;

  // Bola
  double vBola, lpBola;

  cout << string(10, '=') << " Bola " << string(10, '=') << endl;

  cout << "Input jari-jari bola: ";
  cin >> r;

  vBola = 4.00/3.00 * (PHI * sqr(r) * r);
  lpBola = 4 * PHI * sqr(r);

  cout << "\nVolume Bola = " << vBola << endl;
  cout << "Luas Permukaan Bola = " << lpBola << endl << endl;

  // Prisma

  double vPrisma, lpPrisma, lsPrisma, laPrisma, tPrisma, taPrisma, aPrisma, luasSisi;

  cout << string(10, '=') << " Prisma " << string(10, '=') << endl;

  cout << "Input alas Prisma: ";
  cin >> aPrisma;

  cout << "Input tinggi alas Prisma: ";
  cin >> taPrisma;

  cout << "Input tinggi Prisma: ";
  cin >> tPrisma;

  laPrisma = 1.00/2.00 * (aPrisma * taPrisma);
  vPrisma = laPrisma * tPrisma;
  luasSisi = tPrisma * aPrisma;
  lsPrisma = 3 * luasSisi;
  lpPrisma = 2 * laPrisma + lsPrisma;

  cout << "\nVolume Prisma = " << vPrisma << endl;
  cout << "Luas Permukaan Prisma = " << lpPrisma << endl << endl;

  return 0;
}