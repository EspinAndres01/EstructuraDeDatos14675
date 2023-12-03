/***********************************************************************
 * Module:  Cproceso.cpp
 * Author:  Andres Espin
 * Modified: Domingo, 26 de noviembre de 2023 22:40:40
 * Purpose: Multiplicacion Recursiva
 ***********************************************************************/

#include "Cproceso.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cstring>

//Constructor
Cproceso::Cproceso(){
	mat1=(int **)calloc (3,sizeof(int*));
	mat2=(int **)calloc (3,sizeof(int*));
	matR=(int **)calloc (3,sizeof(int*));
}
//Get
int** Cproceso::getMat1(){
	return mat1;
}

int** Cproceso::getMat2(){
	return mat2;
}

int** Cproceso::getMatR(){
	return matR;
}

//Set
void Cproceso::setMat1(int** otroMat1){
	mat1=otroMat1;
}

void Cproceso::setMat2(int** otroMat2){
	mat2=otroMat2;
}

void Cproceso::setMatR(int** otroMatR){
	matR=otroMatR;
}

//Funcion para multiplicar por memoria Dinamica datos randomicos
void Cproceso::multiplicacionRecursivaMatrices(int** mat1, int** mat2, int** matR, int f1, int c1, int c2) {
    if (f1 >= 0) {
        if (c2 >= 0) {
            for (int k = 0; k <= c1; ++k) {
                *(*(matR + f1) + c2) += *(*(mat1 + f1) + k) * *(*(mat2 + k) + c2);
            }
            multiplicacionRecursivaMatrices(mat1, mat2, matR, f1, c1, c2 - 1);
        }
        if (c2 == 0) { // Cuando c2 llega a 0, pasa a la siguiente fila (f1-1) y reinicia c2
            multiplicacionRecursivaMatrices(mat1, mat2, matR, f1 - 1, c1, c1);
        }
    }
}
//Funcion por memoria Dinamica para capturar los valores randomicos
void Cproceso::encerarMatriz(){
		for(int j=0;j<3;j++){
		*(mat1+j)=(int*)calloc(3,sizeof(int*));
		*(mat2+j)=(int*)calloc(3,sizeof(int*));
		*(matR+j)=(int*)calloc(3,sizeof(int*));
	} 
}
//Funcion por memoria Dinamica para completar la matriz con datos randomicos
void Cproceso::llenarMatriz(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			*(*(mat1+i)+j)=(int)((rand()/32768.1)*1000);
			*(*(mat2+i)+j)=(int)((rand()/32768.1)*1000);
			*(*(matR+i)+j)=0;
		}
	}
}
//Funcion para imprimir el resultado con memoria Dinamica de datos randomicos
void Cproceso::imprimirMatriz(int **matAux,char *charMat){
	cout<<"\n>La matriz " <<*charMat<< " es :\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",*(*(matAux+i)+j));
			printf("%*s",j+5,"");
		}
		cout<<"\n";
	}
}
