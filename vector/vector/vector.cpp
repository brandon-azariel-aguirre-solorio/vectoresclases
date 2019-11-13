#include <string>
#include <iostream>
using namespace std;
int main()
{
	int x, contador, i, tabla[100];
	i = 0;
	for (x = 1; x <= 100; x++)
	{
		contador = 0;
		if (x % 2 == 0)
		{
			tabla[i] = x;
			i++;
		}
	}
	for (x=0;x<i;x++)
	{
		cout << tabla[x] << endl;
	}
	system("pause");
	return 0;
}
