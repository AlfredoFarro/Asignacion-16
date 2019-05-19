#include<iostream>
using namespace std;
int EsBisiesto(int a) {
	if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) {
		cout << "El año " << a << " Si es bisiesto "<<endl;
	}
	else {
		cout << "El año " << a << " No es bisiesto "<<endl;
	}
	return 0;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	int a;
	do
	{
		cout << "Ingrese el año: ";
		cin >> a;
	} while (a<0);
	EsBisiesto(a);
	system("pause");
}