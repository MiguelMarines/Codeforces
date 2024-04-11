// Miguel Marines

#include<iostream> // Librería

using namespace std; // Namespace

int main() // Main
{
	int a,b; // Variables enteras para representar los trozos de queso.
	int arr[] ={2,3,5}; // Arreglo con los números para evaluar la divisibilidad.
	int ca[3] = {0}, cb[3] = {0}; // Arreglo para llevar el número de operacione por cada número que se evalúa la divisibilidad.
	
	cin>>a>>b; // Se ingresan los pesos de los trozos de queso.

	

	// El ciclo se repite dos veces porque hay dos trozos de queso.
	for(int i = 0 ; i < 3 ; i++)
	{
		while(a%arr[i] == 0) // Evalua la divisibilidad del primer trozo de queso con los números del arreglo.
		{
			ca[i]++; // Se va sumando al arreglo el numero de operaciones que se van haciendo en la posición correspondiente por cada dividendo.
			a/=arr[i]; 
			/* Se divide la masa del primer trozo de queso entre el número divisible para obtener la nueva maza,
			ya que si es divisible entre dos, la zorra se come un medio y deja un medio, si es divisible entre tres,
			la zorra se come dos tercios y deja un tercio, si es divisible entre cinco, la zorra se come cuatro quintos 
			y deja un quinto.
			*/
		}
		while(b%arr[i] == 0) // Evalua la divisibilidad del segundo trozo de queso con los números del arreglo.
		{
			cb[i]++; // Se va sumando al arreglo el numero de operaciones que se van haciendo en la posición correspondiente por cada dividendo.
			b/=arr[i];
			/* Se divide la masa del segundo trozo de queso entre el número divisible para obtener la nueva maza,
			ya que si es divisible entre dos, la zorra se come un medio y deja un medio, si es divisible entre tres,
			la zorra se come dos tercios y deja un tercio, si es divisible entre cinco, la zorra se come cuatro quintos 
			y deja un quinto.
			*/
		}		
	}
	
	if(a!=b) // Checa si los dos trozos de queso son iguales, en caso de que no lo sean.
	    cout<<"-1"; // Imprime menos uno si es imposible hacer los trozos de queso iguales.
	else // En caso de que los trozos de queso sean iguales.
	{
		int num = 0; // Variable para el mínimo número de operaciones para hacer los trozos de queso iguales.
		for(int i = 0 ; i < 3 ; i++)//Ciclo para evaluar las operaciones que se hacen con los tres número que se evalua la divisibilidad.
		    num+=abs(ca[i] - cb[i]); // Valor absoluto de la diferencia de las operaciones en el primer y segundo trozo.
		cout<<num; // Imprime el mínimo número de operaciones para hacer los trozos de queso iguales.
	}

}