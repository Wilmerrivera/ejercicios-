#include <iostream>
using namespace std;

float convertirkilometro(float milla){
	double kilometro = milla * 1.60934;
return kilometro;
}

int main(){
double milla;
cout <<"ingrese la cantidad de millas: " << endl;
cin >> milla;
cout << "la cantidad en kilometro es: " << convertirkilometro(milla);
return 0;
}

