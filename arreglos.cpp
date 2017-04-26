#include <iostream>
using namespace std;
void ejemplo();
void comparar(int, int);

int main(){

	cout<<"Hola Mundo"<<endl;
	int num=0;
	int salir =1;
	while(salir ==1){
	int arreglo[5];
	//leer valores
	for(int i = 0; i<5;i++){
	  cout<<"Escriba un numero:";
	  cin>>arreglo[i];
		
	}	
	//imprimir valores
	for(int i = 0; i<5;i++){
	  cout<<arreglo[i]<<endl;
	}
	
	cout<<endl<<"Ingrese 1 para continuar, 0 para salir";
	cin>>salir;
	}
ejemplo();
	
int numero1,numero2;

cout<<"Ingrese numero 1:";
cin >> numero1;
cout<<"Ingrese otro numero:";
cin>>numero2;

comparar(numero1,numero2);

return 0;
}

void comparar(int a, int b){
	if(a>b){
	
		cout<<a<<" es mayor que "<<b<<endl;		

	} else if(a==b){
		cout<<a<<"Es igual a "<<b<<endl;
	} else{
		cout<<b<<"Es mayor que "<<a<<endl;
	}

}

void ejemplo(){
cout<<"Saliendo del programa..."<<endl;
}
