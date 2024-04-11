// Miguel Marines

#include<iostream> // Libreria
#include<map> // Libreria

using namespace std; // Namespace

/*Mapa es un contenedor asociativo para contener en orden una
lista de parejas de valores únicos asociados como clave/valor.

map<key, value>
apuntes[key] = value;
En este caso la key está en el idioma 1, porque los inputs van a ser en el idioma 1,
porque es el idioma en el que se da la clase.
*/

map<string, string> apuntes; // Mapa apuntes 

int main() // Main
{
    // Variables enteras para el número de palabras en la clase y el número de palabras en cada idioma.
    int number_words_lecture, number_words_language;
    // Strings para las palabras en los dos idiomas word1 -> idioma 1  y  word2 -> idioma 2.
    string word1, word2;
    
    cin >> number_words_lecture; // Se introduce el número de palabras en la clase.
    cin >> number_words_language; // Se introduce el número de palabras en cada idioma.
    
    // Ciclo while, que se ejecuta mientras que el valor del numero de palabras en cada idioma sea diferente a 0.
    while(number_words_language != 0)
    {
        cin >> word1; // Se introduce palabra en el primer idioma.
        cin >> word2; // Se introduce palabra en el segundo idioma.
        
        /* Condicional, se usa la función length para obtener la longitud de los strings.
        Si la longitud del string 1 es mayor se guarda el string 2 (word2) en el mapa. 
        Si la longitud del string 2 es mayor se guarda el string 1 (word1) en el mapa.*/
        if(word1.length()>word2.length())
            apuntes[word1] = word2;
        else
            apuntes[word1] = word1;
            
        number_words_language--; // Se resta 1 al numero de palabras en cada idioma.
    }
    
    // Ciclo while, que se ejecuta mientras que el valor del numero de palabras en la clase sea diferente a 0.
    while(number_words_lecture != 0)
    {
        cin >> word1; /* Se introduce lapalabra dicha por el maestro, sería la llave 
        para obtener la palabra en el idioma más corto, previamente seleccionada y guardada en el mapa.*/
        cout << apuntes[word1] << " "; 
        /* Se imprime la palabra guardada en el mapa, se identifica con la key "word1", 
        que señala a la palabra previamente seleccionada en el idioma más corto.*/
        number_words_lecture--; // Se resta 1 al número de palabras en la clase.
    }
    
    return 0;
}