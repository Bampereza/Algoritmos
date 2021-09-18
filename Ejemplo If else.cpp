/* SENTENCIA IF */

/* if (condicion) {
        Instrucciones "SI se cumple la condicion" ;
	 }
	else{
	    Instrucciones "si NO se cumple la condicion";
	}
	
*/


#include<iostream>

using namespace std;

int main (){
	
	int numero = 2021;
	int dato;
	
	cout << "BIENVENIDO, ALGORITMO CON ESTRUCTURA SI" << "\n"; 
	
	cout << "INGRESE UN NUMERO:" << "\n";
	cin >> dato;
	
	if ( dato < numero  ){  // CONDICION

		cout << "EL NUMERO ES MENOR A 2021" << "\n" ;
    }
	else {
		cout << "EL NUMERO ES MAYOR A 2021" << "\n";
	} 
	
	return 0;
	
} 