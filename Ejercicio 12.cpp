#include<iostream>
#include<math.h>
using namespace std;
#define Num_pi 3.141516
double areaCirculo(double radio) {
	double Area;
	Area = Num_pi * (pow(radio, 2));
	return Area;
}
double periCirculo(double radio) {
	double Perimetro;
	Perimetro = 2 * Num_pi*radio;
	return Perimetro;
}
int main() {
	double radio;
	do
	{
		cout << "Ingrese el radio: ";
		cin >> radio;
	} while (radio<0);
	cout << "El Area del circulo es: " << areaCirculo(radio) << endl;
	cout << "El Perimetro del circulo es: " << periCirculo(radio) << endl;
	system("pause");
}