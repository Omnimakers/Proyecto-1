/*
Escuela: Instituto Politecnico Nacinal - IPN
Plantel: ESIME- Culhuacan
Carrera: Ingenier�a Mec�nica
Materia: Fundamentos de Programaci�n
Grupo: 1MV35
Nombre: Roberto Moroni C�rdova S�nchez
Fecha: 23/10/2020
*/

//Practica 1


//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Constantes
#define PI 3.1415926535

main(){
	//variables
	float valorx;
	
		//procedimiento
		
		printf("\nPrograma para f(x)=x-sen(x)+3\n");
		printf("\nDame un valor de x= ");
		scanf("%f",&valorx);
		printf("\nEl resultado de x-sen(x)+3 = %.6f",valorx-sin(valorx*PI/180)+3);
	
}

