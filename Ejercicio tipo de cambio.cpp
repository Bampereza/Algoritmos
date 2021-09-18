/*"Escribir un algorirtmo que realice el tipo de cambio de $ a Q o de Q a $ "*/
//Brandon Isaias AmpéreAldana 0909 - 21 - 4628 y Carlos Miguel Angel Gonzalez Rivera 0909 - 21 - 3359
#include <iostream>
using namespace std;
int	opcion;
int main (void) {
	double cadolar, Dolar, Quet;
	
	while (1==1){ // Colocamos para repetir las opciones de cambio con su respectiva salida

	cout<<"Que tipo de cambio quiere realizar: [1] Dolar $  [2] Quetzalez Q  [3] Salir "<< endl;	
	cin>> opcion;
	
	// Colocamos para la opcion del usuario sobre que tipo de opcion usara
	switch(opcion) 
	{ case 1: 
		cout << "El cambio actual del dolar es de Q7.79382" << endl;
		cout<<"Cuantos dolares quieres cambiar"<< endl;
		cin>> Dolar;
		
		cadolar= 7.79382 * Dolar;

		cout<< Dolar << " dolares equivalen a "<< "Q " << cadolar << endl;
		break;
	 case 2: 
	 
	   cout<<"El Cambio de Q1 es a 0.13 dolar "<< endl;
	   cout<<"Cuantos quetazalez quieres cambiar"<< endl;
	   cin>> Quet;
	   
	   cadolar=  Quet* 0.13; 
	   	cout<< Quet << " quetzalez equivalen a "<<" $ " << cadolar << endl;
	   	break;
	   	
	   	// Colocamos la opcion de salida
	case 3: 
	  exit(EXIT_SUCCESS);
		break;
	}	}
return 0;
}