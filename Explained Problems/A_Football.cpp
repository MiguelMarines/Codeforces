// Miguel Marines

#include <iostream> // Librería
#include <stdio.h> // Librería
#include <string.h> // Librería

using namespace std; // Namespace

int main() // Main
{
    char array[100]; // Arreglo de caracteres para guardar 1's y 0's seún el número del jugador.
    
    /* Ciclo para introducir los 1's y 0's según el equipo de los gugadores
    se introduzen mas números mientras no se introduzca end of line.*/
    while( scanf("%s", array) != EOF)
    {
        int length = strlen(array); // Variable con el valor del tamaño del string del arreglo.
        int counter = 1; // Variable para sacar la cantidad de jugadores seguidos de un equipo.
        
        char flag = array[0]; // Variable con la función de bandera, para comparar.
        
        /* Ciclo para determinar si la situación es peligrosa o no, el ciclo está controlado
        por el tamaño del arreglo.*/
        for(int i = 1; i < length; i++)
        {
            /* Compara  el elemento i del arreglo con la bandera, si se cumple la condición se 
            suma uno a la suma de jugadores por equipo.*/
            if(array[i] == flag) 
                counter++;
            
            /*En caso de que el elemento i del arreglo no sea igual a la bandera la suma se inicia en 1,
              ya que la condición para que sea una jugada peligrosa los jugadores tienen que estar seguidos.
              Además la vandera cambia su valor al caracter correspondiente al equipo del jugador.*/
            else
            {
                counter = 1;
                flag = array[i];
            }
            
            // Si se juntan los siete jugadores seguidos de un equipo termina el ciclo.
            if(counter >= 7)
                break;
        }
    
        if(counter >= 7)
        {
            cout<<"YES";
            // Imprime YES si se juntan los 7 jugadores y la situación es peligrosa.
            return 0; // Termina el programa.
        }
        else
        {
            cout<<"NO";
            // Imprime NO si no se juntan los 7 jugadores y la situación no es peligrosa.
            return 0; // Termina el programa.
        }
            
    }
    return 0; // Termina el programa.
}