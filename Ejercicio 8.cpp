#include<iostream>
using namespace std;
int EsBisiesto(int a) {
	if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) {
		cout << "El a�o " << a << " Si es bisiesto "<<endl;
	}
	else {
		cout << "El a�o " << a << " No es bisiesto "<<endl;
	}
	return 0;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	int a;
	do
	{
		cout << "Ingrese el a�o: ";
		cin >> a;
	} while (a<0);
	EsBisiesto(a);
	system("pause");
}