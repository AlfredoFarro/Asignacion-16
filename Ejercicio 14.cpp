#include<iostream>
using namespace std;
void Invertir(int *x, int *y) {
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}
int main() {
	int Ax, By;
	int *x = &Ax, *y = &By;	
	cout << "Ingrese el valor de x: " ;
	cin >> Ax;
	cout << "Ingrese el valor de y: " ;
	cin >> By;
	Invertir(x, y);
	cout << "El nuevo valor de x es: " << Ax << endl;
	cout << "El nuevo valor de y es: " << By << endl;
	system("pause");
}