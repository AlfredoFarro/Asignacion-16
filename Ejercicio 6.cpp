#include<iostream>
using namespace std;
double convertirSoles(double dolares) {
	double soles;
	soles = dolares * 3.33;
	return soles;
}
double ConvertirDolares(double soles) {
	double dolares;
	dolares = soles * 0.30;
	return dolares;
}
int main() {
	int opcion;
	double dolares, soles;
	do
	{
		cout << "1.Convertir dolares a soles\n2.Convertir soles a dolares\n3.Salir\n";
		cin >> opcion;
	} while (opcion != 3 && opcion != 1 && opcion != 2);
	switch (opcion) {
	case 1:
		do
		{
			cout << "Ingrese la cantidad de dolares: ";
			cin >> dolares;
		} while (dolares < 0);
		cout << "La cantidad convertida a soles es: " << convertirSoles(dolares) << endl;
		break;
	case 2:
		do
		{
			cout << "Ingrese la cantidad de soles: ";
			cin >> soles;
		} while (soles < 0);
		cout << "La cantidad convertida a dolares es: " << ConvertirDolares(soles) << endl;
		break;
	case 3:
		exit(0);
	}
	system("pause");
}