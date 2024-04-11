// Miguel Marines

#include <iostream> // Libreria
using namespace std; // Namespace

int main()  // Main
{
    int numero; // Variable entera para el numero a determina si es almost lucky.
    cin>>numero; // Se introduce el numero a determina si es almost lucky.
                // El numero puede ser entre (1≤n≤1000).
    
    bool flag = false; // Variable booleana que sirve como bandera.
                
    
    int array[14] = {4, 7, 47, 74, 44, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    // Arreglo con los lucky numbers.
    
    /*Ciclo for que se repite el numero de veces del tamaño del arreglo con los
    lucky numbers.*/
    for(int i = 0; i < 12; i++)
    {
	    if(numero%array[i] == 0) // Condición para determinar si un número es almost lucky.
	    {
		    flag = true; 
		    /* Cambia a verdadero el valor de la variable booleana en caso de que
		    el modulo del número a evaluar si es almost lucky y un lucky number es 0.*/
	    }
    }
    
    if(flag) // Si se cumplio la condición indicada por la vandera se imprime YES.
        cout<<"YES";
    else // Si la condición no se cumplió indicada por la vandera se imprime NO.
	    cout<<"NO";
	    
    return 0;
}