#include<iostream>
#include<math.h>
using namespace std;
#define NUM_PI 3.141516

void AreaCircu(double radio) {
	double Area;
	Area = NUM_PI * (pow(radio, 2));
	cout << "El Area del Circulo es: " << Area << endl;
}
int main() {
	double radio;
	do
	{
	cout << "Ingrese el radio: ";
	cin >> radio;
	} while (radio<0);
	AreaCircu(radio);
	system("pause");
}
