/*
 * funciones.c
 *
 *  Created on: 23 sep. 2021
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
    int   resultadoDivError;

    if(n2!=0)
    {

        resultadoDivOk=n1/n2;
        (*resultadoDiv)=resultadoDivOk;
            resultadoDivError=0;
    }

    else{
    resultadoDivError=1;
    return resultadoDivError;
    }
}

float calculoMultiplicacion(float n1, float n2 )
{
    float resultadoMultiplicacion;

    resultadoMultiplicacion= n1*n2;

    return resultadoMultiplicacion;
}


//falta factorial
