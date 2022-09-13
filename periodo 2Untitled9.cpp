#include <iostream>
using namespace std;

float calcularperimetro(float); //prototipo de función

int main(){
double lado;
cout << "Ingrese el lado del cuadrado: " << endl;
cin >> lado;
cout << "El primetro del cuadro es: " << calcularperimetro(lado);
return 0;
}

float calcularperimetro (float lado){
	double perimetro = lado * 4;
return perimetro;
}

