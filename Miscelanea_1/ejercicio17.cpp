/*
*Guillermo Cala; dec/ 04/ 2018
*elaborar un algoritmo que muestre los primeros 100 n�meros de izquierda a derecha usando un array de dos dimensiones
*la �ltima fila a mostrar� la suma de sus respectivas columnas.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int CFilas = 50;
	const int CColumnas = 50;
	int Numeros[CFilas][CColumnas];
	int Numero = 1, NumFilas = 10, NumColumnas = 10, i, j;
	for (i = 0; i < NumFilas; i++)/*lectura de datos*/
	{
		for (j = 0; j < NumColumnas; j++)
		{
			Numeros[i][j] = Numero;
			Numero++;
		}
	}
	for (i = 0; i < NumFilas; i++)/*suma de datos*/
	{
		int Suma = 0;
		for (j = 0; j < NumColumnas; j++)
		{
			Suma = Suma + Numeros[j][i];/*como se va a sumar las columnas el indice es al reves*/
		}
		Numeros[j][i] = Suma;/*como se ingresa en la ultima fila, el inidice debe seguir siendo el mismo*/
	}
	NumFilas++;
	for (i = 0; i < NumFilas; i++)/*imprime datos*/
	{
		for (j = 0; j < NumColumnas; j++)
		{
			cout << Numeros[i][j] << " ";
		}
		cout << endl;
	}
	system ("pause");
	return 0;
}
