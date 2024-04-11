// Miguel Marines

#include<iostream> // Librería

using namespace std; // Namespace

int main() // Main
{
    int n; // Variable entera para el numnero de días.
    long long a,b; // Variables dadas para hacer los calculos de los tokens ahorrados con la formula dada.
    long long tokens_given[100000], tokens_saved[100000]; // Arrays para guardar los tokens dados y ahorrados por día.
    
    // Se introduce los valores de n, a y b, para hacer los calculos de los tokens ahorrados con la formula dada.
	cin>>n>>a>>b;
	// Ciclo controlado por el número de días que el empleado recibió tokens.
	for(int i = 0; i < n ; i++)
	{
		// Se introducen el número de tokens que recibío en el día n y se guardan en el arreglo.
		cin>>tokens_given[i];
		// Se calculan los tokens ahorrados y se guardan en el arreglo tokens_saved.
		tokens_saved[i] = (tokens_given[i]*a)% b/a;
	}
		
	// Ciclo controlado por el número de días que el empleado recibió tokens.
	for(int i = 0; i < n; i++)
	{
		if(i == n-1)
		{
			cout<<tokens_saved[i]; // Imprime el número de tokens que el empleado puede ahorrar en el día i.
		}
		else
		{
			cout<<tokens_saved[i]<<" "; // Imprime el número de tokens que el empleado puede ahorrar en el día i.
		}
	}
	return 0; // Termina el programa.
}