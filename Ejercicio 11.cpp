#include<iostream>
#include<math.h>
using namespace std;
#define NUM_PI 3.141516

double AreaCircu(double radio) {
	double Area;
	Area = NUM_PI * (pow(radio, 2));
	return Area;
}
int main() {
	double radio;
	do
	{
		cout << "Ingrese el radio: ";
		cin >> radio;
	} while (radio < 0);
	cout << "El Area del Circulo es: " << AreaCircu(radio) << endl;
	system("pause");
}
