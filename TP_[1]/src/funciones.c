/*
 * funciones.c
 *
 *  Created on: 24 sep. 2021
 *      Author: matias
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

float calculoDivision(float n1, float n2, float* resultadoDiv)
{
    float resultadoDivOk;
    int   resultadoDivError=0;

    if(n2!=0 && resultadoDiv!=NULL )
    {

        resultadoDivOk=n1/n2;
        (*resultadoDiv)=resultadoDivOk;
            resultadoDivError=0;

    }

    else if (resultadoDiv!=NULL && (n1<0 && n2==0)){
    	resultadoDivOk=0;
    	(*resultadoDiv)=resultadoDivOk;
    	resultadoDivError=2;      //devuelve 2, esto es para evitar que resultado=0 no sea resultado=-0, porque uso float
    }

    else{
    resultadoDivError=1;  //  devuelve 1 si se intenta dividir por 0
    }
    return resultadoDivError;
}

float calculoMultiplicacion(float n1, float n2, float* resultadoMultiplicacion)
{
    float resultadoMultiplicacionOk;
    int resultadoMultiplicacionError=-1;

   if(resultadoMultiplicacion!=NULL){
        resultadoMultiplicacionOk=n1*n2;
    	(*resultadoMultiplicacion)=resultadoMultiplicacionOk;
    	resultadoMultiplicacionError=0;
    }
   else if (resultadoMultiplicacion!=NULL && (n1<0 && n2==0)){

    resultadoMultiplicacionOk=0;
    	(*resultadoMultiplicacion)=resultadoMultiplicacionOk;
    	resultadoMultiplicacionError=1;
   }

   else{
	    resultadoMultiplicacionOk=0;
	    	(*resultadoMultiplicacion)=resultadoMultiplicacionOk;
	    	resultadoMultiplicacionError=2;

   }

    return resultadoMultiplicacionError;
}

float calculoFactorialA(float n1, float* resultadoFacA){
	int i;
	float resultadoFactorialAOk=1;
	int resultadoFactorialAError;
	if(resultadoFacA!=NULL && (n1-(int)n1==0)&& (n1>0 && n1<13)){
	for(i=1; i<=n1;i++){
		resultadoFactorialAOk=resultadoFactorialAOk*i;
		*(resultadoFacA)=resultadoFactorialAOk;
		resultadoFactorialAError=0; // todoo salió bien, caso 0
    }
	}
	else if(resultadoFacA!=NULL && n1==0){  // esto está bien
	resultadoFactorialAOk=1;
		*(resultadoFacA)=resultadoFactorialAOk;
		resultadoFactorialAError=1; // en caso de que n1 sea 0.... darle valor 1 y darle valor 1 a la dirección de memoria
	}
	else if(n1-(int)n1!=0){
	resultadoFactorialAError=2; // si no es entero, darle valor 2
	}
	else if(n1<0){
	resultadoFactorialAError=3; // decir que es negativo, case 3
	}
	else{
	resultadoFactorialAError=4; // si es mayor a 12, caso default, decir que es demasiado grande
	}

	return resultadoFactorialAError;
}

float calculoFactorialB(float n2, float* resultadoFacB){
	int i;
	float resultadoFactorialBOk=1;
	int resultadoFactorialBError=0;
	if(resultadoFacB!=NULL && (n2-(int)n2==0)&& (n2>0 && n2<13)){
	for(i=1; i<=n2;i++){
		resultadoFactorialBOk=resultadoFactorialBOk*i;
		*(resultadoFacB)=resultadoFactorialBOk;
		resultadoFactorialBError=0; // todoo salió bien, caso 0
    }
	}
	else if(resultadoFacB!=NULL && n2==0){  //
	resultadoFactorialBOk=1;
		*(resultadoFacB)=resultadoFactorialBOk;
		resultadoFactorialBError=1; // en caso de que n1 sea 0.... darle valor 1 y darle valor 1 a la dirección de memoria
	}
	else if((n2-(int)n2!=0) && n2!=0){
	resultadoFactorialBError=2; // si no es entero, darle valor 2
	}
	else if(n2<0){
	resultadoFactorialBError=3; // decir que es negativo, case 3
	}
	else{
	resultadoFactorialBError=4; // si es mayor a 12, caso default, decir que es demasiado grande
	}

	return resultadoFactorialBError;

}



