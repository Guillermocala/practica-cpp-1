/*
<<<<<<< HEAD
*Guillermo Cala; 9/ april/ 19
*Non-type template arguments
*/
#include "iostream"
using namespace std;
template <class id, int Num>
id suma (id a);
int main(int argc, char const *argv[])
{
   int Num1;
   cout << "El numero sera multiplicado por 5: ";
   cin >> Num1;
   /*the template parameter is determined on compile-time*/
   cout << suma<int, 5>(Num1) << endl;
}
template <class id, int Num>
id suma (id a)
{
   id result = a * Num;
   return result;
=======
*Guillermo Cala; 10/ 06/ 19
*Arrays multidimensionales operados como array simple
*/
#include "iostream"
using namespace std;
void InsertData(int tabla[], int tope, int tope2);
void ShowInfo(int tabla[], int tope, int tope2);
int main()
{
   int Rows, Cols, Dim2;
   cout << "Ingrese las filas: ";
   cin >> Rows;
   cout << "Ingrese las columnas: ";
   cin >> Cols;
   int numeros[Rows * Cols];
   InsertData(numeros, Rows, Cols);
   ShowInfo(numeros, Rows, Cols);
   system("pause");
   system("cls");
   return 0;
}
void InsertData(int tabla[], int tope, int tope2)
{
   for(int i = 0; i < tope; i++)
   {
      for(int j = 0; j < tope2; j++)
      {
         cout << "Ingrese el dato: ";
         cin >> tabla[i * tope2 + j];
      }
   }
}
void ShowInfo(int tabla[], int tope, int tope2)
{
   for(int i = 0; i < tope; i++)
   {
      for(int j = 0; j < tope2; j++)
      {
         cout << tabla[i * tope2 + j] << " ";
      }
      cout << endl;
   }
>>>>>>> a140b80226981db464dcbb3eba8710dd7ccec963
}
