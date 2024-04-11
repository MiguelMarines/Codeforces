// Miguel Marines

#include <algorithm> // Libreria
#include <iostream> // Libreria

using namespace std; // namespace

int main() // Main
{
	int number_letters, position;
	// Variable entera para el número de letras en minusculas y para la posición del cursos.
	
	string str;
	// String con las letras en minusculas.
	
	cin>>number_letters>>position;
	// Se ingresan los valores del número de letras en minusculas y la posición inicial del cursor.
	
	position--;
	/*Se resta 1 al valor de la posición, porque en strings el primer elemento está en la posición 0 
	y el último elemento en la posición numero de elementos - 1.*/
	
	cin>>str;
	// Se ingresa el string con las letras en minusculas, para formar el palindrome.
	
	/*
	Variable entera para obtener la mitad menos 1 del tamaño del string, sirve para analizar la primera
	parte del string.
	*/
	int firstr;
	firstr=(number_letters/2)-1;
	
	int num_precion_flechas=0;
	// Variable entera para indicar el minimo número de veces que hay que precionar las flechas para cambiar el string en un palindrome.
	
	int mini=100000,maxi=0;
	//maxi indice del caracter más a la derecha que necesita ser cambiado en la primera mitad del string.
	//mini indice del caracter más a la izquierda que necesita ser cambiado en la primera mitad del string.
	
	
	/*Si el tamaño de la primera parte del string a analizar es mayor a la posición inicial del cursor.
	La posición del cursor se vuelve el numero de letras menos uno menos la posición inicial.
	*/
	if(position>firstr)
	{
		reverse(str.begin(),str.end());
		/*
		La función reverse cambia el orden del string, el primer elementos se convierte en el último y el último se convierte en primero.
		Para la función reverse se tiene que pasar como parámetros la posición inicial y la posición final del string, 
		para obtener las posiciones iniciales y finales se utilizan las funciones begin y end.
		*/
		position=number_letters-1-position;
		//Cambia la posición del cursor, ya que se invirtió el orden del string.
		
		/*
		Para obtener la posición del cursor se resta al número de letras uno y i,
	    porque se empieza en la posición 0. Por ejemplo si el string tiene 10 elemntos sus posiciones son del 0 al 9
	    entonces la posición 0 sería la posición 9, para obtener el nueve se obtiene al restarle al (numero de letras -1 -posición)
	    (10 -1 -0) -> 9. Por ejemplo si estubiera en la posición 1 sería la posición 8, (numero de letras -1 -posición) -> (10 -1 -1) -> 8, etc.
	    */
	}
	
	for(int i=0; i<firstr+1; i++)
	{
	    /*
	    Se compara si el elemento i del string es diferente a los elementos finales del string.
	    Para obtener los elementos finales del string se resta al número de letras uno y i,
	    porque se empieza en la posición 0. Por ejemplo si el string tiene 10 elemntos sus posiciones son del 0 al 9
	    entonces se compara el elemento 0 con el 9, para obtener el nueve se obtiene al restarle al (numero de letras -1 -i)
	    (10 -1 -0) -> 9. La segunda comparación sería 1 y 8, (numero de letras -1 -i) -> (10 -1 -1) -> 8, etc.
	    */
		if(str[i]!=str[number_letters-1-i])
		{
			num_precion_flechas+=min((abs(str[i]-str[number_letters-1-i])),abs(('z'-max(str[i],str[number_letters-1-i]))+min(str[i],str[number_letters-1-i])-'a'+1));
			/*
			Al numero de veces que se tienen que precionar las flechas para crear un palindorme se le agrega el menor valor absoluto, obtenido por la función min y el valor
			absoluto obtenido por la función abs. Los valores que se comparar para obtener el menor valor son:
			1. El valor absoluto de la posición i del string menos la posición final equivalente del string, obtenida por number_letters-1-i, explicada previamente.
			2. El valor absoluto de la resta de z menos el valor maximo de la posición i del string o la posición final equivalente del string, 
			   obtenida por number_letters-1-i, explicada previamente; más el valor mínimo de la posición i del string o o la posición final equivalente del string,
			   obtenida por number_letters-1-i, explicada previamente, menos a más uno.
			*/
			mini=min(mini,i);
			/*
			mini, (el indice del caracter más a la derecha que necesita ser cambiado), es igual al resultado de la función min, que devuelve el menor valor de entre
			el valor previo del indice del caracter más a la derecha que necesita ser cambiado y i.
			*/
			maxi=max(maxi,i);
		    /*
			maxi, (indice del caracter más a la derecha que necesita ser cambiado), es igual al resultado de la función max, que devuelve el mayor valor de entre
			el valor previo del indice del caracter más a la derecha que necesita ser cambiado y i.
			*/
		}
	}
	
	/*
	Si el valor de maxi, (indice del caracter más a la derecha que necesita ser cambiado en la primera mitad del string), es mayor a la posición del cursor y
	si el valor de mini, (indice del caracter más a la izquierda que necesita ser cambiado en la primera mitad del string), es menor a la posición del cursor.
	*/
	if( maxi > position && mini < position)
	{
	    /*
	    Si el valor absoluto de (la resta de la posición del cursor menos el indice del caracter más a la derecha que necesita ser cambiado en la primera mitad del string)
	    es menor al valor absoluto de (la posición del cursor menos el indice del caracter más a la izquierda que necesita ser cambiado en la primera mitad del string).
	    */
		if(abs(position-maxi) < abs(position-mini))
		{
			num_precion_flechas+=abs(position-maxi)*2;
			/*
			La variable para el numero de veces que hay que precionar las flechas se agrega el valor absoluto de (la posición del cursor menos el indice del caracter más a 
			la derecha que necesita ser cambiado en la primera mitad del string) por dos más uno.
			*/
			num_precion_flechas+=abs(position-mini);
			/*
			La variable para el numero de veces que hay que precionar las flechas se agrega el valor absoluto de (la posición del cursor menos el indice del caracter más a 
			la izquierda que necesita ser cambiado en la primera mitad del string) por dos más uno.
			*/
		}
		else
		{
			num_precion_flechas+=abs(position-mini)*2;
			/*
			La variable para el numero de veces que hay que precionar las flechas se agrega el valor absoluto de (la posición del cursor menos el indice del caracter más a 
			la izquierda que necesita ser cambiado en la primera mitad del string) por dos.
			*/
			num_precion_flechas+=abs(position-maxi);
			/*
			La variable para el numero de veces que hay que precionar las flechas se agrega el valor absoluto de (la posición del cursor menos el indice del caracter más a 
			la derecha que necesita ser cambiado en la primera mitad del string).
			*/
		}
	}
	
	// Si el maxi es mayor a la posición del cursor.
	else if(maxi>position)
		num_precion_flechas+=abs(position-maxi);
		// El número de veces que hay que precionar flechas es el valor absoluto de (la posición del cursor menos maxi) más uno.
	
	// Si el mini es menor a la posición del cursor.
	else if(mini<position)
		num_precion_flechas+=abs(position-mini);
	    // El número de veces que hay que precionar flechas es el valor absoluto de (la posición del cursor menos mini) más uno.
	    
	cout<<num_precion_flechas; // Se imprime el mínimo número de veces que hay que precionar las flechas para cambiar el string en un polindrome.
	
}