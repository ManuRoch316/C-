#include <iostream>
using namespace std;

int main()
{
	cout<<"Slecciona una cantidad de numeros, menor a 10: ";
	int cantidad;
	cin>> cantidad;
	int numeros[10];//entonces cantidad<=numeros[10]
	int* puntero = &numeros[0];
	int sumapar = 0, sumaimpar = 0;
	
	for(int i = 0; i < cantidad; i++){
		cout<<"Ingrese los numeros: "<<endl;
		cin>> numeros[i];
	}
		for(int i = 0; i < cantidad; i++){
			cout<<"Puntero: "<<*(puntero+i)<<" "<<endl;
			
			if(*(puntero+i) %2 ==0){
				sumapar += *(puntero+i);
			}
			else{
				sumaimpar += *(puntero+i);
			}
		}
	cout<<"La suma de los pares es: "<<sumapar<<endl;
	cout<<"La suma de los impares es: "<<sumaimpar<<endl;
	
	cout<<"MARCA REGISTRADA: "<<"@JMCR - 1322134320";
}
