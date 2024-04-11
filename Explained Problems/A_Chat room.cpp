// Miguel Marines

#include <iostream> // Libreria
using namespace std; // Namespace

int main() // Main
{
    string inputString, compareString = "hello";
    // Variables para el string a revisar y el string a comparar.
    
    int j = 0;
    // Variable j para controlar los elementos del string con la que se compara.
    
    cin >> inputString;
    // Se ingresa el string a comparar.
    
    /*
    Ciclo para recorrer y evaluar el inputString, está controlado por el tamaño 
    del string.
    y 
    */
    for (int i = 0; i < inputString.size(); i++)
    {
        /*
        Se compara cada elemento del inputString con los elementos del
        compareString, cuando los elementos son iguales se cambia de elemento a 
        comparar y ya no lo vuelve a checar de esta manera se checa el orden.
        */
        if (inputString[i] == compareString[j])
        {
            j++;
            // Se suma uno a j para cambiar de elemento a evaluar del string.
            
            /*
            Como son cinco letras en hello, si se junta el valor de j = 5
            entonces quiere decir que es correcto.
            */
            if (j == 5)
            {
                break;
                /*Se rompe la ejecución de la comparación porque ya se vió que
                es correcto y evitar seguir consumiendo recursos.
                */
            }
        }
    }
    //Si j = 5 quiere decir que es correcto y se escribe YES.
    if(j==5)
    {
        cout<<"YES";
    }
    //Si j != 5 quiere decir que no es correcto y se escribe NO.
    else
        cout<<"NO";
}
