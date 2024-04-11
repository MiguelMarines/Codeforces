// Miguel Marines

#include <iostream> // Libreria
using namespace std; // Namespace

int main() // Main
{
    int snack_array[100000]; // Arreglo Global de tipo int de tamaño 100,000 ya que el numero total de snacks puede ser entre (1 ≤ num_snacks ≤ 100000).
    
    int num_snacks; // Variable int para el numero total de snacks.
    cin>>num_snacks; // Se introduce el numero total de snacks.
    
    int current_snack=num_snacks; // La variable int current_snack se iguala al numero total de snacks, que el valor es igual al del snack mas grande.
    
    for(int i=0;i<num_snacks;i++) // Ciclo for repetido el mismo numero de veces que el numero total de snacks.
    {
        //La i del ciclo es el dia en el que callo el snack.
        
        int tamano_snack; // Variable int para el tamano del snack.
 	    cin>>tamano_snack; // Se introduce el valor del tamano del snack.
 	    
        snack_array[tamano_snack]=1;/* En el arreglo de snacks se iguala a uno en la posición del tamano correspondiente que callo el snack
        de esta forma se llena en orden el arrelo, ya que el tamaño es igual a la posición que le debe de corresponder dentro del arreglo.*/
        
        //Como no se llena de unos en orden el arreglo no se entra inmediatamente al ciclo while, por lo que ocurren unos saltos de linea.
        
        /* No se va a imprimir si no esta igualado a 1 la posición dentro del arreglo y el ciclo while empieza en la posición del snack mas 
        grande por lo que si el snack mas grande aun no se evalua en el ciclo, entonces se imprime un salto de linea y sigue hasta que en el 
        ciclo se evaluen primero los snacks mas grandes, el snack mas grande se obtiene con el numero total de snacks que se iguala a la 
        variable current_snack.*/
        
        while(snack_array[current_snack]==1) // Ciclo while controlado por el snack_array en la posicion del snack más grande que hay en el arreglo.
        {
            cout<<current_snack<<" "; // Imprime el snack correspondiente a la torre.
            current_snack--; // Se resta 1 a la variable current_snack, para cambiar al snack que sigue en la torre.
        }
        cout<<endl;  // Imprime salto de linea.
    }
    
    return 0; // Termina el programa.
}