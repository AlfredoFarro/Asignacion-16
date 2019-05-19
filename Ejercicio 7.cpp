#include<iostream>
using namespace std;
double Invertir(long long n) {
	long long invertido=0;
	while (n>0)
	{
	invertido = invertido * 10 + (n % 10);
	n /= 10;
	}
	return invertido;
}
int main() {
	long long n;
	do
	{
		cout << "Ingrese el numero a invertir: ";
		cin >> n;
	} while (n<0);
	cout << "El numero invertido es: " << Invertir(n) << endl;
	system("pause");
}