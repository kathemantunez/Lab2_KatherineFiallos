#include<iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

//metodos

void ejercicio2();
void ejercicio1();
void ejercicio3();
void metodo_circulos(int,int,int,int,int,int,int,int);


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
				ejercicio1();
				break;
 
			case '2':
			
				cout << "Elegiste el ejercicio 2.\n";
				ejercicio2();
				break;
 
			case '3':
				
				cout << "Elegiste el ejercicio 3.\n";
				ejercicio3();

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
	int x1=0,x2=0,y1=0,y2=0,w1=0,w2=0,z1=0,z2=0;

    	cout<<"\t1.ingresar numeros"<<endl;
	cout<<"\t2.numeros random"<<endl;
	cin>>tecla;
	switch(tecla){
		case '1':
			cout<<"primer circulo"<<endl;
		       	cout<<"ingrese x1:"<<endl;
			  cin>>x1;
			  cout<<"ingrese x2:"<<endl;
			  cin>>x2;
			  cout<<"ingrese y1:"<<endl;
			  cin>>y1;
			  cout<<"ingrese y2:"<<endl;
			  cin>>y2;
			  

			  cout <<"segundo circulo"<<endl;
			  cout<<"ingrese w1"<<endl;
			  cin>>w1;
			  cout<<"ingrese w2:"<<endl;
			  cin>>w2;
			  cout<<"ingrese z1:"<<endl;
			  cin>>z1;
			  cout<< "ingrese z2"<<endl;
			  cin>>z2;


			metodo_circulos(x1,x2,y1,y2,w1,w2,z1,z2);
			
			


			  break;
		case '2': 
			  int c;
			  int e;
			  int cont=0;
			  int cont2=0;

			  srand(time(NULL));
			
			  for(c=1;c<=10;c++){
				while(cont<4){
				if(cont==0){
				x1=1+rand()%(11-1);
			//	cout<<x1<<endl;
				cont++;
				}
				if(cont==1){
				x2=1+rand()%(11-1);
			//	cout<<x2<<endl;
				cont++;
				}
				if(cont==2){
				y1=1+rand()%(11-1);
			//	cout<<y1<<endl;
				cont++;
				}
				if(cont ==3){
				y2=1+rand()%(11-1);
			//	cout<<y2<<endl;
				cont++;
				}
				}


			  }


			  for(e=1;e<=4;e++){
				if(e==1){
				w1=1+rand()%(11-1);

				}
				if(e==2){
				w2=1+rand()%(11-1);
				}
				if(e==3){
				z1=1+rand()%(11-1);
				}
				if(e==4){
				z2=1+rand()%(11-1);
				}

			  }
		  metodo_circulos(x1,x2,y1,y2,w1,w2,z1,z2);
				

			  break;
		

	}
}
void  metodo_circulos(int x1,int x2,int y1,int y2,int w1,int w2,int z1,int z2){
	int distancia=0;
	int distancia2=0;
	int x,y;
	int k,m;
	//
	x=pow((x2-x1),2);
	y=pow((y2-y1),2);
	distancia=sqrt(x+y);

	k=pow((w2-w1),2);
	m=pow((z2-z1),2);
	distancia2=sqrt(k+m);

	cout<<"distancia circulo 1:"+distancia<<endl;
	cout<<"distancia circulo 2:"+distancia2<<endl;	


}
void ejercicio1(){

}


