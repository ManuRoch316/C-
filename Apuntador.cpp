#include<iostream>
using namespace std;

main()
{
	/*
	cout<<"";Flujo de Salida
	cin>> XX(dato);Flujo de entrada
	*/
	
	int matricula = 1322134320;
	size_t tamano = sizeof(matricula);
	cout<<"Valor de la variable: "<<matricula<<endl;
	cout<<"\nTamaño de la variable: "<<tamano<<"  BYTES"<<endl;
	cout<<"BITS: "<<tamano*8; //Para darlo en BITS
	
	//Alterar el valor de una variable
	//Darle un nuevo valor
	
	matricula = 34524;
	cout<<"\nValor Modificado: "<<matricula<<endl;
	cout<<"Direción de memoria: "<<&matricula;
	
	//valor de variable: 34524
	//Direcion de memoria: 0x71ff08
	
	
	//CON ASTERISCO AMPERSON
	cout<<"\nValor obtenido con *&(apuntador)--> "<<*&matricula;
	//valor con apuntador *&: 34524---->El mismo, ultimo valor que se le dio
	
}
