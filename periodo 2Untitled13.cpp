#include <iostream>
#include <ctime>  //se utuliza para usar las funciones que crean números aleatorios
using namespace std;

int main(){
 int numeros[100];
 srand(time(0));
 
 for(int i = 0; i < 100; i++){
  numeros[i] = rand() % 100; //se le asignan numeros del 0 al 99
}
for(int i = 0; < 100; i++){
 cout  << numero[i] << endl;
}
