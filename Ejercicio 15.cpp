#include<iostream>
#include<math.h>
using namespace std;
double factorial(int n) {
	int fact = 1;
	for (int i = 1; i <=n; i++)
	{
		fact *= i;
	}
	return fact;
}
double Combinatorio(int N, int K) {
	double combi;
	combi = factorial(N) / (factorial(K)*factorial(N - K));
	return combi;
}
int main() {
	int N, K;
	cout << "Ingrese el valor de N: ";
	cin >> N;
	cout << "Ingrese el valor de K: ";
	cin >> K;
	
	cout << "Combinatorio: " << Combinatorio(N, K) << endl;
	system("pause");
}