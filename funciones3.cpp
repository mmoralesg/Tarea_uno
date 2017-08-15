#include<iostream>

using namespace std;

int calculadora();

int main()
{
	calculadora();
	getchar();
    return 0;
}

int calculadora()

{
	float var1, var2, resultado;
	char opc;
	
	cout << "Ingrese el primer valor\t";
	cin >> var1;
	
	cout << "Ingrese el segundo valor\t";
	cin >> var2; 
	cout << "Operacion a realizar:" << endl;
	
	cout << "a) Suma" << endl;
	cout << "b) Resta" << endl;
	cout << "c) Multiplicacion" << endl;
	cout << "d) Division" << endl;
	cout << "e) Modulo" << endl;
	cin >> opc;
	
	switch (opc)
	{
		case 'a':   
		case 'A': resultado= var1 + var2;
		          cout << "El resultado de la suma es\t" << resultado << endl;
		          break;
		         
		case 'b':
		case 'B': resultado = var1 - var2;
	              cout << "El resultado de la resta es\t" << resultado << endl;
	              break;
		
		case 'c':
		case 'C': resultado = var1 * var2;
	              cout << "El resultado de la multiplicacion es\t" << resultado << endl;
	              break;
				 
		case 'd':
		case 'D': resultado = var1 / var2;
	              cout << "El resultado de la division es\t" << resultado << endl;
	              break;
				 
		case 'e':
		case 'E': resultado = (int) var1 % (int) var2;
	              cout << "El resultado del modulo es\t" << resultado << endl;
				  break;	
				 
		default : cout << "opcion no valida" << endl; 		 	 		 		         
	}
	
	return 0;
	
}


