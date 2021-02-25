/* 
 Sea el vector vec de 10 casillas reales, 
 elaborar programa que guarde dichas casillas 
 (y despliegue), 
 las raíces cuadradas de los números 90, 80, … 
 calcular y desplegar suma. 
*/
#include<iostream>
#include<stdio.h>
#include <math.h>  
using namespace std;

int main(){
	double vect [10], aux; 
	
	for(int j=9; j>=0; j--){
		vect[j] = sqrt(j*10);
		cout<<vect[j]<<endl;
		aux += vect[j];
	}
	cout<<"La suma es: "<<aux;
}
