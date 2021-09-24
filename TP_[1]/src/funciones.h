/*
 * funciones.h
 *
 *  Created on: 24 sep. 2021
 *      Author: matias
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

// DOCUMENTAR ACÁ ARRIBA DE LAS FUNCIONES!!!
float calculoSuma(float n1, float n2);
float calculoResta(float n1, float n2);
float calculoDivision(float n1, float n2, float* resultadoDiv);
float calculoMultiplicacion(float n1, float n2, float* resultadoMultiplicacion);
float calculoFactorialA(float n1, float* resultadoFacA);
float calculoFactorialB(float n2, float* resultadoFacB);
int utn_getNumero(int* pResultado, char mensaje, char mensajeError, int minimo, int maximo, int reintentos);

#endif /* FUNCIONES_H_ */
