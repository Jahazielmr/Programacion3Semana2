#include <iostream>

using namespace std;
int menu(); // la funcion muestra el menu y valida la entrada;retorna opcio;
int multi();
int factorial();
int main(){

bool salir = false;
while(!salir){

	switch(menu()){
	
	case 1:// si se declaran variables se usan llaves 
	{
	int num1, num2;
	
	cin>>num1;
	cout<<"Escriba un numero: ";
	cin >> num1;
	cout<<"Escribar otro numero: ";
	cin >> num2;
	cout<< "El resultado es: "<<num1*num2<<endl;
		
		break;
	}
	
	case 2:
		{
		int num1, num2;
		cout<<"Escriba un numero";
		cin >> num1;
		cout<<"Escriba otro numero";	
		cin >>num2;
		cout<<"El reultado es: "<<num1+num2<<endl;
		
		break;
		}
	case 3:{
		
		
		//cout<<"Escriba un numero";//divida y conquista tengo un problema y lo hago mas pequeño para hacelro mas facil de resolver>> fin de recursiva
// algoritmos para resolver problemas por soluciones parciales >>fin de recursiva o back tracking- ejemplo clasico laberinto.

				
		cout << "Escriba un numero:";
		cin >>num;
		cout<< "El factorial de"<<num<<"es:"<<factorial(num)<<endl:
		
		break;
		}
	case 4:
		salir =true;

		break;
	
	
	}	

}


return 0;
}

int menu(){

	int opcion;
	bool valido =false;
	do{
	    cout<< "Menu"<<endl
	    <<"1.multiplicar dos numeros"<<endl
	    <<"2.Sumar dos numeros"<<endl
	    <<"3.Calcular Factorial"<<endl
	    <<"4.Salir"<<endl;
	    
	    cout<<"Ingrese una opcion: ";
	    cin >> opcion;

	    if(opcion>0&&opcion<5)
	    valido= true;
	    else{
	
		cout<< "opcion no valida, intente de nuevo..."<<endl;
	    }
	//investigar el metodo clean y cin.ignore de cin	
	
	}while(!valido);
	return opcion;
}

int multi(int a, int b){

	int total;

	total = a*b;	
	
	return total;
	
}

int factorial (int i){
		if (i<0){
			return -1;
	
		}else if(i==0){
			return 1;
		} else{
			return i*factorial(i-1);
		}
	
}
