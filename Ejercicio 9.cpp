#include<iostream>
using namespace std;
bool FechaEsValida(int dia, int mes, int a�o) {
	bool VoF;
	if (a�o>=0)
	{
	if (a�o%4==0&&(a�o%100!=0||a�o%400==0))
	{
		switch (mes) {
		case 1:
			if (dia>=1&&dia<=31)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 2:
			if (dia>=1&&dia<=29)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 3:
			if (dia>=1&&dia<=31)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 4:
			if (dia>=1&&dia<=30)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 5:
			if (dia>=1&&dia<=31)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 6:
			if (dia >= 1 && dia <= 30)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 7:
			if (dia >= 1 && dia <= 31)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 8:
			if (dia >= 1 && dia <= 31)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 9:
			if (dia >= 1 && dia <= 30)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 10:
			if (dia >= 1 && dia <= 31)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 11:
			if (dia >= 1 && dia <= 30)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;
		case 12: 
			if (dia>=1&&dia<=31)
			{
				VoF = true;
			}
			else
			{
				VoF = false;
			}
			break;

		}
	}
	else
	{
	switch (mes) {
	case 1:
		if (dia >= 1 && dia <= 31)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 2:
		if (dia >= 1 && dia <= 28)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 3:
		if (dia >= 1 && dia <= 31)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 4:
		if (dia >= 1 && dia <= 30)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 5:
		if (dia >= 1 && dia <= 31)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 6:
		if (dia >= 1 && dia <= 30)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 7:
		if (dia >= 1 && dia <= 31)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 8:
		if (dia >= 1 && dia <= 31)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 9:
		if (dia >= 1 && dia <= 30)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 10:
		if (dia >= 1 && dia <= 31)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 11:
		if (dia >= 1 && dia <= 30)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;
	case 12:
		if (dia >= 1 && dia <= 31)
		{
			VoF = true;
		}
		else
		{
			VoF = false;
		}
		break;

	}
	}

	}
	else
	{
	VoF = false;
	}
	return VoF;
}
int main() {
setlocale(LC_CTYPE, "Spanish");
	int dia, mes, a�o;
	cout << "Ingrese Fecha: "  ;
	cin >> dia;
	cin >> mes;
	cin >> a�o;
	
	FechaEsValida(dia, mes, a�o);
	if (FechaEsValida(dia,mes,a�o) == true)
	{
		cout << "La fecha es correcta" << endl;
	}
	else if (FechaEsValida(dia, mes, a�o) == false)
	{
		cout << "La fecha no es correcta"<<endl;
	}
	system("pause");
}