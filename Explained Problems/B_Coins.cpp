// Miguel Marines

#include <iostream> // Librería

using namespace std; // Namespace

int main() // Main 
{
    int n; // Variable de tipo entera para determinar el valor de la moneda más cara.
    cin>>n; // Se inggresa el valor de la moneda más cara.

    /* Ciclo controlado por el valor de la moneda más cara, i se iguala a este valor y cada vez
    que se ejecuta el ciclo se le va restando uno para checar el valor de las siguientes monedas, se empieza 
    de este modo porque se pide que las monedas sean imprimidas en orden descendente.*/
    for(int i=n; i>0; i--)
    {
        /* Verifica si el valor de n es divisible entre i, ya que es la restricción para
        determinar las nuevas monedas. */
        if(n%i==0)
        {
            cout<<i<<" "; // Imprime el valor de la moneda.
            n=i; // n se iguala a i.
        }
    }

    return 0; // Termina el programa.
}