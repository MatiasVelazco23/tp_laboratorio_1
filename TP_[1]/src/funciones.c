/*
 * funciones.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Matías
 */

#include "funciones.h"
#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

float calculoSuma(float n1, float n2)
{
    float resultadoSuma;

    resultadoSuma=n1+n2;

    return resultadoSuma;
}


float calculoResta(float n1, float n2)
{
    float resultadoResta;

    resultadoResta=n1-n2;

    return resultadoResta;
}

float calculoDivision(float n1, float n2, float* pResultadoDiv)
{
    float resultadoDiv_Ok;
    int   resultadoDiv_Error=0;

    if(n2!=0 && pResultadoDiv!=NULL )
    {

        resultadoDiv_Ok=n1/n2;
        (*pResultadoDiv)=resultadoDiv_Ok;
            resultadoDiv_Error=0;

    }

    else if (pResultadoDiv!=NULL && (n1<0 && n2==0)){
    	resultadoDiv_Ok=0;
    	(*pResultadoDiv)=resultadoDiv_Ok;
    	resultadoDiv_Error=2;      //devuelve 2, esto es para evitar que resultado=0 no sea resultado=-0, porque uso float
    }

    else{
    resultadoDiv_Error=1;  //  devuelve 1 si se intenta dividir por 0
    }
    return resultadoDiv_Error;
}

float calculoMultiplicacion(float n1, float n2, float* pResultadoMultiplicacion)
{
    float resultadoMultiplicacion_Ok;
    int resultadoMultiplicacion_Error=-1;

   if(pResultadoMultiplicacion!=NULL){
        resultadoMultiplicacion_Ok=n1*n2;
    	(*pResultadoMultiplicacion)=resultadoMultiplicacion_Ok;
    	resultadoMultiplicacion_Error=0;
    }
   else if (pResultadoMultiplicacion!=NULL && (n1<0 && n2==0)){

    resultadoMultiplicacion_Ok=0;
    	(*pResultadoMultiplicacion)=resultadoMultiplicacion_Ok;
    	resultadoMultiplicacion_Error=1;
   }

   else{
	    resultadoMultiplicacion_Ok=0;
	    	(*pResultadoMultiplicacion)=resultadoMultiplicacion_Ok;
	    	resultadoMultiplicacion_Error=2;

   }

    return resultadoMultiplicacion_Error;
}

float calculoFactorialA(float n1, float* pResultadoFacA){
	int i; //  vara para la iteración del for
	float resultadoFactorialA_Ok=1;
	int resultadoFactorialA_Error;
	if(pResultadoFacA!=NULL && (n1-(int)n1==0)&& (n1>0 && n1<13)){
	for(i=1; i<=n1;i++){
		resultadoFactorialA_Ok=resultadoFactorialA_Ok*i;
		*(pResultadoFacA)=resultadoFactorialA_Ok;
		resultadoFactorialA_Error=0; // todoo salió bien, caso 0
    }
	}
	else if(pResultadoFacA!=NULL && n1==0){  // esto está bien
	resultadoFactorialA_Ok=1;
		*(pResultadoFacA)=resultadoFactorialA_Ok;
		resultadoFactorialA_Error=1; // en caso de que n1 sea 0.... darle valor 1 y darle valor 1 a la dirección de memoria
	}
	else if(n1-(int)n1!=0){
	resultadoFactorialA_Error=2; // si no es entero, darle valor 2
	}
	else if(n1<0){
	resultadoFactorialA_Error=3; // decir que es negativo, case 3
	}
	else{
	resultadoFactorialA_Error=4; // si es mayor a 12, caso default, decir que es demasiado grande
	}

	return resultadoFactorialA_Error;
}

float calculoFactorialB(float n2, float* pResultadoFacB){
	int i;
	float resultadoFactorialB_Ok=1;
	int resultadoFactorialB_Error=0;
	if(pResultadoFacB!=NULL && (n2-(int)n2==0)&& (n2>0 && n2<13)){
	for(i=1; i<=n2;i++){
		resultadoFactorialB_Ok=resultadoFactorialB_Ok*i;
		*(pResultadoFacB)=resultadoFactorialB_Ok;
		resultadoFactorialB_Error=0; // todoo salió bien, caso 0
    }
	}
	else if(pResultadoFacB!=NULL && n2==0){  //
	resultadoFactorialB_Ok=1;
		*(pResultadoFacB)=resultadoFactorialB_Ok;
		resultadoFactorialB_Error=1; // en caso de que n1 sea 0.... darle valor 1 y darle valor 1 a la dirección de memoria
	}
	else if((n2-(int)n2!=0) && n2!=0){
	resultadoFactorialB_Error=2; // si no es entero, darle valor 2
	}
	else if(n2<0){
	resultadoFactorialB_Error=3; // decir que es negativo, case 3
	}
	else{
	resultadoFactorialB_Error=4; // si es mayor a 12, caso default, decir que es demasiado grande
	}

	return resultadoFactorialB_Error;

}



