#include <iostream>
using namespace std;

void intercambio(int *n1, int *n2)
{
	int aux;
	if (*n1 > *n2)
	{
		aux = *n1;
		*n1 = *n2;
		*n2 = aux;
	}
}
int main()
{
	int N1, N2;
	int *n1, *n2;

	n1 = &N1;
	n2 = &N2;

	cout << "Ingrese el valor de la primera variable: "; 
	cin >> N1;
	cout << "Ingrese el valor de la segunda variable: "; 
	cin >> N2;
	cout << endl;
	intercambio(n1, n2);
	cout << "Valor de la variable menor: " << N1 << endl;
	cout << "Valor de la variable mayor: " << N2 << endl << endl;

	system("pause");
}
