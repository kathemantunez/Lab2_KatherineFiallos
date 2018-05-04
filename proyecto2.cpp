#include<iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

//metodos

void ejercicio2();
void metodo_circulos(int.int,int,int);


//--------------
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
				ejercicio2();
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

//ejercicio 2
//
void ejercicio2(){
	bool bandera=false;
	char tecla;
	int x1=0,x2=0,y1=0,y2=0;

    	cout<<"\t1.ingresar numeros"<<endl;
	cout<<"\t2.numeros random"<<endl;
	cin>>tecla;
	switch(tecla){
		case '1': cout<<"ingrese x1:"<<endl;
			  cin>>x1;
			  cout<<"ingrese x2:"<<endl;
			  cin>>x2;
			  cout<<"ingrese y1:"<<endl;
			  cin>>y1;
			  cout<<"ingrese y2:"<<endl;
			  cin>>y2;
			  
			void metodo_circulos(x1,x2,y1,y2);


			  break;
		case '2': 
			  int c;
			  int cont=1;

			  srand(time(NULL));
			
			  for(c=1;c<=10;c++){
				while(cont<=4){
				if(cont==1){
				x1=1+rand()%(11-1);
			//	cout<<x1<<endl;
				cont++;
				}
				if(cont==2){
				x2=1+rand()%(11-1);
			//	cout<<x2<<endl;
				cont++;
				}
				if(cont==3){
				y1=1+rand()%(11-1);
			//	cout<<y1<<endl;
				cont++;
				}
				if(cont ==4){
				y2=1+rand()%(11-1);
			//	cout<<y2<<endl;
				cont++;
				}
				}


			  }
			void metodo_circulos(x1,x2,y1,y2);	

			  break;
		default:cout<<"opciòn incorrecta"<<endl;

			break;

	}
}

void metodo_circulos(int x1,int x2,int y1,int y2){


}



