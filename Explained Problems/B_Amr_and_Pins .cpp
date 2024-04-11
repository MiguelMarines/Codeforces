// Miguel Marines

#include <iostream> //Librería
#include <cmath> // Librería para las funciones matemáticas más avanzadas.
using namespace std; // Namespace

int main() // Main
{
    int radius, x_initial, y_initial, x_final, y_final;
    // Variables enteras para el radio y las coordenadas iniciales y finales del centro del circulo.
    
    cin >> radius >> x_initial >> y_initial >> x_final >> y_final;
    // Se introducen el radio y las coordenadas iniciales y finales del centro del circulo.
    
    double diameter = sqrt(pow(y_final - y_initial, 2.0) + pow(x_final - x_initial, 2.0));
    // Saca el nuevo diametro (hipotenusa) con el teorema de pitágoras y las nuevas coordenadas introducidas por el usuario.
    
    cout << (int)(ceil)(diameter / 2 / radius)<<endl;
    /* Se divide el nuevo diametro entre 2, para sacar el radio y se divide entre 
    el radio anterior para sacar el número de movimientos. Se usa la función ceil,
    porque los movimientos son enteros.*/
    
    return 0; // Termina el programa.
}