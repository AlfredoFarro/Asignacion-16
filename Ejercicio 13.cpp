#include<iostream>
#include<math.h>
using namespace std;
#define Num_pi 3.141516

void AreaYPerimetroCir(double radio,double &Area,double &Perimetro) {
	Area = Num_pi * (pow(radio, 2));
	Perimetro = 2 * Num_pi*radio;
	
}
int main() {
	double radio;
	double Area;
	double Perimetro;
	
	do
	{
		cout << "Ingrese el radio: ";
		cin >> radio;
	} while (radio<0);
	AreaYPerimetroCir(radio,Area,Perimetro);
	cout << "El area es: " << Area << endl;
	cout << "El perimetro es: " << Perimetro << endl;
	system("pause");
}