#include <iostream>
using namespace std;
class CNumber
{
	private: 
	   int a;
	   int b;
	   int c;
	public:  
		CNumber(int, int, int);
    	int SetNum1(int n1);
    	int SetNum2(int n2);
    	int SetNum3(int n3);
    	int EsMaximo();
    	int EsMinimo();
    	float EsPromedio();
    	int EsPar();
    	int EsImpar();
};

CNumber::CNumber(int n1, int n2, int n3)
{
	a = SetNum1(n1);
	b = SetNum2(n2);
	c = SetNum3(n3);
}

int CNumber::SetNum1(int n1)
{
	a = n1;
	return a;
}
int CNumber::SetNum2(int n2)
{	b = n2;
	return b;
}

int CNumber::SetNum3(int n3)
{	c = n3;
	return c;
}

int CNumber::EsMaximo()
{
	int max = a;
	if(a < b && b > c)
	{
		max = b;
	}
	if(a < c && b < c)
	{
		max = c;
	}
	return max;
}

int CNumber::EsMinimo()
{
 	int min = a;
	if(a > b && b < c)
	{
		min = b;
	}
	if(a > c && b > c)
	{
		min = c;
	}
	return min;
}

float CNumber::EsPromedio()
{
	return (a + b + c) / 3.0;
}
int CNumber::EsPar()
{
	int par = 0;
	if (a % 2 == 0)
	{
		par++;
	}
	if (b % 2 == 0)
	{
		par++;
	}
	if (c % 2 == 0)
	{
		par++;
	}
	return par;
}
int CNumber::EsImpar()
{
	int impar = 0;
	if (a % 2 != 0)
	{
		impar++;
	}
	if (b % 2 != 0)
	{
		impar++;
	}
	if (c % 2 != 0)
	{
		impar++;
	}
	return impar;
}

int main()

{
	int num1, num2, num3;
	cout << "Ingrese tres numeros separados por un espacio: ";
	cin >> num1 >> num2 >> num3;
	CNumber numeros(num1, num2, num3);
	cout<< "El maximo es: "<< numeros.EsMaximo() << endl;
	cout<< "El minimo es: "<< numeros.EsMinimo() << endl;
	cout<< "El promedio es: "<< numeros.EsPromedio() << endl;
	cout<< "La cantidad de numeros pares es de: "<< numeros.EsPar() << endl;
	cout<< "La cantidad de numeros impares es de: "<< numeros.EsImpar() << endl;
	return  0;
}
