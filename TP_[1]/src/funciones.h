/*
 * funciones.h
 *
 *  Created on: 24 sep. 2021
 *      Author: matias
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

// DOCUMENTAR ACÁ ARRIBA DE LAS FUNCIONES!!!
/**
 * @brief función que suma dos números.
 *
 * @param n1 primer parámetro, primer número a sumar.
 * @param n2 segundo parámetro, segundo numero a sumar.
 * @return  retorno, solo retorna el resultado de sumar número 1 + número2
 */
float calculoSuma(float n1, float n2);
/**
 * @brief función que resta dos números.
 *
 * @param n1 primer parámetro, primer número a restar.
 * @param n2 segundo parámetro, segundo número a restar.
 * @return retorno, solo retorna el resultado de restar número1 - número2.
 */
float calculoResta(float n1, float n2);
/**
 * @brief  función que divide dos números.
 *
 * @param n1  primer parámetro, dividendo.
 * @param n2  segundo parámetro, divisor.
 * @param pResultadoDiv tercer parámetro, puntero a resultadoDivision, para escribir un valor de retorno allí.
 * @return retorno, retorna 0 si salió todoo bien,
 * retorna 1 si el divisor es 0,
 * retorna 2 si el dividendo es negativo, para que el resultado sea 0 en vez de -0, ya que uso operadores tipo float.
 */

float calculoDivision(float n1, float n2, float* pResultadoDiv);
/**
 * @brief  función que multiplica dos números.
 *
 * @param n1 primer parámetro, primer número a multiplicar.
 * @param n2 segunda parámetro, segundo número a multiplicar.
 * @param pResultadoMultiplicacion tercer parámetro, puntero a resultadoMultiplicacion.
 * @return retorna 0 si salió todoo bien,
 * retorna 2 o 3 si algún operador es negativo, para escribir 0 en vez de -0, porque mis operadores son flotantes.
 */
float calculoMultiplicacion(float n1, float n2, float* pResultadoMultiplicacion);
/**
 * @brief función que realiza factorial de un número (operador1).
 *
 * @param n1 primer parámetro, número a factoriar.
 * @param pResultadoFacA segundo parámetro, puntero a resultadoFactorialA.
 * @return retorno, retorna 0 si todoo salio bien
 * retorna 1 si el numero es 0, para darle el valor 1 a resultadoFactorialA.
 * retorna 2 si el número no es entero.
 * retorna 3 si el número es negativo.
 * retorna 4 si es mayor a 12(se desborda).
 */
float calculoFactorialA(float n1, float* pResultadoFacA);
/**
 * @brief función que realiza factorial de un número (operador2).
 *
 * @param n1 primer parámetro, número a factoriar.
 * @param pResultadoFacB segundo parámetro, puntero a resultadoFactorialB.
 * @return retorno, retorna 0 si todoo salio bien
 * retorna 1 si el numero es 0, para darle el valor 1 a resultadoFactorialb.
 * retorna 2 si el número no es entero.
 * retorna 3 si el número es negativo.
 * retorna 4 si es mayor a 12(se desborda).
 */
float calculoFactorialB(float n2, float* pResultadoFacB);

#endif /* FUNCIONES_H_ */
