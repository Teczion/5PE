	/*
	 Sea el vector vec de 15 casillas enteras,
	 elaborar programa que guarde dichas casillas 
	 (y despliegue), los exponentes 
	 de 3: 3^0, 3^1, 3^2, … 
	 calcular y desplegar sus sumas.
	*/
#include<iostream>
#include<stdio.h>
#include <math.h>  
using namespace std;
	
int main(){
	int vect [15], aux; 
	for(int i=0; i<=15; i++){
		vect[i] = pow(3,i);
		aux += vect[i];
		cout<<vect[i]<<endl;
		}		
	cout<<"La suma es: "<<aux;
}
