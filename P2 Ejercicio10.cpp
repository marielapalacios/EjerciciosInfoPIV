U2S2C5E1.cpp
#include <iostream>
using namespace std;

long potenciaDe(int base, int exponente);

int main(){
  int base, exponente;
  long resultado;
  cout << "Ingrese la base: " << endl;
  cin >> base;
  cout << "Ingrese el exponente: " << endl;
  cin >> exponente;
  resultado = potenciaDe(base,exponente);
  cout << "El resultado es: " << endl;
}

long potenciaDe(int base, int exponente){
  if(exponente !=1){
    return base * potenciaDe(base, exponente-1);
  } else{
    return base;
  }
}
