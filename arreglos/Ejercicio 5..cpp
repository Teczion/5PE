/* 	 
 Sea el vector votos de 5 casillas enteras,
 utilizarlo como acumulador elaborar programa que pregunte 
 para qué número de candidato es su voto
 ( dentro del ciclo while con cintílenla         -1=fin, 
 voto no debe ser menor a 1 o mayor a 5), 
 al final del ciclo, desplegar los datos del vector, 
 quien es el ganador y con cuantos votos.  
*/
#include<iostream>
#include<stdio.h>
#include <math.h> 
using namespace std;


int main ()
{
int votos[5]={0,0,0,0,0}, op, voto, mayor, indiceGanador = 0; 

do{
	cout<<"\nSeleccione candidato (entre 1 y 5 | -1 para finalizar): "; cin>>op;
	
	//Finaliza el ciclo si el usuario ingresa -1
	if(op==-1) { break; }
	
	cout<<"\n\tIngrese no de votos: "; cin>>voto;
	
	/*
		Se valida que tanto el numero de votos 
		como el numero de candidato se encuentren
		en el rango 1 - 5
	*/
	
	if(op<=5 && op>0 && voto<=5 && voto>0){
	   votos[op-1] += voto;
	}else{
		cout<<"\nERROR: Numero de candidato o numero de votos incorrectos"<<endl;
		cout<<"Vuelve a intentar"<<endl;
		system("pause");
		system("cls");
	}
	
}while(op!=-1);

cout<<"\n---------- RESUMEN ----------------"<<endl;

mayor=votos[0];
for(int i=0;i<5;i++){
	if(votos[i]>mayor) {
		mayor = votos[i];
		indiceGanador=i;
	}	
	cout<<"\nCandidato #"<<i+1<<" con "<<votos[i]<<" votos"<<endl;
}

cout<<"\n\nEL CANDIDATO "<<indiceGanador+1<<" ES EL GANADOR CON "<<mayor<<" VOTOS";
return 0;
}
