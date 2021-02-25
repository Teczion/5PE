/* 
 Sea el vector vec de 25 casillas reales,
  elaborar programa que guarde dichas casillas (y despliegue), 
  el exponencial natural así, e0, e1… calcular y desplegar suma. 
*/
#include<iostream>
#include<stdio.h>
#include <math.h>  
using namespace std;

int main(){
	double vec[25], aux;
	for(int i=0; i<=25; i++){
		vec[i] = exp(i);
		aux += vec[i];
		cout<< vec[i]<<endl;	
	}
	cout<<"La suma es: "<<aux<<endl;
}
