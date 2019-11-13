#include <iostream>
#include <string>
using namespace std;
int main()
{
	int numeros[10];
	int i, num, suma, resta, multiplicacion, divicion;
	suma = 0;
	resta = 0;
	multiplicacion = 1;
	divicion = 1;
	for (i = 0; i <= 9; i++)
	{
		cout << "Introduce un numero: ";
		cin >> numeros[i];
		suma = suma + numeros[i];
		resta = resta - numeros[i];
		multiplicacion = multiplicacion * numeros[i];
		divicion = divicion / numeros[i];
	}
	cout << "La suma es de: " << suma << endl;
	cout << "La resta es de: " << resta << endl;
	cout << "La multiplicacion es de: " << multiplicacion << endl;
	cout << "La divicion es de: " << divicion << endl;
	return 0;

}

