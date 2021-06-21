/*Hola esta es la practica 5 de fundamentos de programación*/
/*En esta practica voy convertir varios strings en contraseñas!*/
/*Eva Luna Álvarez Calderón zap363 Amerike*/

#include <iostream>
#include <stdio.h>


using namespace std;
int main()/*voy adeclarar variables primero. despeus a preguntar jeje*/
{
	string nombre_acuario;
	string frase_secreta1 = "Camus";
	string frase_secreta2 = "Degel";

	cout << "Ingrese el Nombre del portador de la  Armadura Acuario de el siglo XVIII o el de el siglo XX: " << endl;
	cin >> nombre_acuario;

	if (frase_secreta1 == nombre_acuario) /*El valor de la variable 1 debe ser igual al variable 2 para que se ejecute este comando*/
	{
		cout << endl;
		cout << "Elegiste bien" << endl;
		cout << "Bienvenido Camus " << endl;
	}
	else if (frase_secreta2 == nombre_acuario) /*Para que tambien funcione con la variable que contempla a Degel.*/
	{
		cout << "Bienvenido " << nombre_acuario << endl;
		
	}

	else
	{
		cout << "Deathmask deja de querer meterte a mi computadora! Ninguna de esas es mi palabra secreta, !TE EQUIVOCASTE! " << endl;
	}

	
}



