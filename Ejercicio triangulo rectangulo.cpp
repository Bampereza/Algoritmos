//Calculo de hipotenusa de triangulo rectangulo
//Brandon Isaias AmpéreAldana 0909 - 21 - 4628 y Carlos Miguel Angel Gonzalez Rivera 0909 - 21 - 3359
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;


int main () {
	
	// Colocamos opcion para ingresar nuestro nombre
	cout <<"Ingrese su nombre para continuar:  ";
 	string nombre;
 	cin>> (nombre);
 	cout <<" Hola " << nombre <<", Bienvenido al programa de calculo de Hipotenusas BC" <<endl;
    
    // colocamos variables necesarias
	float hipotenusa,cate1,cate2;
	
	printf("Coloque los 2 catetos del triangulo: ");
	scanf("%f %f",&cate1,&cate2);
	
	hipotenusa = sqrt(pow(cate1,2)+pow(cate2,2)); // colocamos la formula de la hipotenusa 
	
	printf("La hipotenusa del triangulo es %f",hipotenusa); // Colocamos opcion para que nos de el resultado de la hipotenusa
	
	return 0;
}
