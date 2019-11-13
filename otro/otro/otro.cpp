#include <iostream>
#include <string>
using namespace std;
int main()
{
	int numeros[10], i, num, vectorsuma[10], vectorresta[10], vectormultiplicacion[10], vectordivicion[10];
	for(i=1;i<=10;i++)
	{
		cout << "Ingresa un numero ";
		cin >> numeros[i];
	}
	vectorsuma[i] = vectorsuma[i]+ vectorsuma[i]+ vectorsuma[i]+ vectorsuma[i]+ vectorsuma[i]+ vectorsuma[i]+ vectorsuma[i]+ vectorsuma[i]+ vectorsuma[i]+ vectorsuma[i];
	
	cout << "La suma es de:" << vectorsuma[i] << endl;
	cout << "La resta es de:" << vectorresta[i] << endl;
	cout << "La multiplicacion es de:" << vectormultiplicacion[i] << endl;
	cout << "La divicion es de:" << vectordivicion[i] << endl;

	return 0;
}

