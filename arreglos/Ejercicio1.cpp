/*
	Sea el vector vec de 10 casillas,
	elaborar programa que guarde dichas
	casillas los n�meros 1,2,3, � 
	deber� desplegarlos y calcular la suma.
*/
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int vect [] = {1,2,3,4,5,6,7,8,9,10};
    int aux;
	for(int i=0; i<10; i++){
		cout<<vect[i]<<endl;
		aux += i;	
	}
	cout<<"La suma es:"<<aux; 
}
