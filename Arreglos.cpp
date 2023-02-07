#include <iostream>
using namespace std;

main()
{
	char letras[5];
	char* puntero;
	
	puntero = &letras[0];
	for(int i=0; i<5; i++){
		cout<<"Ingresa letra: ";
		cin>>letras[i];
	}
	
	cout<<"\nDATOS DE ARREGLO"<<endl;
	for(int i=0; i<=4;i++){
		cout<<"Letras ["<<*(puntero+i)<<"]\n";
	}
}
