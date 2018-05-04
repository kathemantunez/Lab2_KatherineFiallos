#include<iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
 
int main()
{
    bool bandera=false;
    char tecla;
 
    do
    {
        
        cin.clear();
        cout << "LABORATORIO 2" << endl;
        cout << "-----------" << endl << endl;
        cout << "\t1 .- Ejercicio 1" << endl;
        cout << "\t2 .- Ejercicio 2" << endl;
        cout << "\t3 .- Ejercicio 3" << endl;
	cout << "\t4 .- SALIR"<<endl;
        cout << "Elije una opcion: ";
 
        cin >> tecla;
 
		switch(tecla)
		{
			case '1':
			
				cout<<"Elegiste el ejercicio 1.\n";
	
				break;
 
			case '2':
			
				cout << "Elegiste el ejercicio 2.\n";
	
				break;
 
			case '3':
				
				cout << "Elegiste el ejercicio 3.\n";
		
				break;
 
			case '4':
				bandera=true;
				//exit(1);
				break;
 
			default:
				
				cout << "Opcion no valida.\a\n";
			//	pausa();
				break;
		}
    }while(bandera!=true);
 
    return 0;


}

//ejercicio 1


