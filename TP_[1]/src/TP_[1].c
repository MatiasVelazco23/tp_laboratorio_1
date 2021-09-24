/*
 ============================================================================
 Name        : TP_[1].c
 Author      : Matías Velazco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"   //cambiar nombre en eclipse //hacer doxygen en eclipse

/*
1
Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
2
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
Cómo realizar y entregar el trabajo práctico
El trabajo práctico deberá ser entregado en el repositorio de GIT correspondiente al TP1 de la
materia.
El mismo consistirá en el proyecto de CodeBlocks con el programa funcionando y comentado,
respetando las reglas de estilo de la cátedra. La compilación no deberá arrojar mensajes de
error ni de warnings.
El proyecto deberá contar con la biblioteca descripta en la sección número dos, y se deberá
hacer uso de dichas funciones para resolver la lógica del programa.
*/
//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   token github
/*
float calculoSuma(float n1, float n2);
float calculoResta(float n1, float n2);
float calculoDivision(float n1, float n2);
float calculoMultiplicacion(float n1, float n2);
float factorialAB(float n1, float n2);
*/


int main()
{
    setbuf(stdout,NULL);
    //variables para los operadores
    float operador1;
    float operador2;

    //variables para las funciones y resultados.
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    float resultadoFactorialA; // hacer JUEVES
    float resultadoFactorialB; // hacer JUEVES
    int resultadoDivisionError;
    int resultadoMultiplicacionError;
    int resultadoFactorialAError;
    int resultadoFactorialBError;

    int flagIngresoOperador1=0;
    int flagIngresoOperador2=0;
    //int flagNoEsUnNumero=0; flag para validar si los operadores
    int flagNoSeIngresoOperador=0;
    int flagSeCalculo=0;
    //flag para salir del programa.
    int flagSalir=0;
    //flag para ingreso de opción incorrecta.
    int flagOpcInc=0;
    //variable para seleccionar los casos del switch.
    char opciones;
    // variable seguir para opción 3 y 4 de opciones.
    char seguir= 's';

    // dowhile para volver a pedir menú

    do
    {


        printf("--------------Menú:-------------\n");
        if(flagIngresoOperador1==0)
        {
            printf("1-Ingresar 1er operando (A=x)\n");
        }

        else if(operador1-(int)operador1!=0)
        {
            printf("1-Ingrese 1er operando (A=%.2f)\n", operador1);
        }


        else
        {
            printf("1-Ingrese 1er operando (A=%.0f)\n", operador1);
        }


        if(flagIngresoOperador2==0)
        {
            printf("2-Ingresar 2do operando (B=x)\n");
        }
        else if(operador2-(int)operador2!=0)
        {
            printf("2-Ingrese 2do operando (B=%.2f)\n", operador2);
        }
        else
        {
            printf("2-Ingrese 2do operando (B=%.0f)\n", operador2);

        }
        printf("3-Calcular todas las operaciones\n");
        printf("4-Informar los resultados\n");
        printf("5-Salir\n");
        printf("\n");

        //do while para pedir opción válida
        do
        {

            if(flagOpcInc==1)
            {
                printf("\nError: Esta no es una opción válida.\n");
                printf("Recuerde ingresar una opción entre los números 1 y 5: ");
                __fpurge(stdin);

                opciones=getchar();
                printf("\n");
                flagOpcInc=0;

            }


            else
            {
                printf("Ingrese a continuación el número de la opción que eligió: ");
                __fpurge(stdin);
                opciones=getchar();
                printf("\n");
                flagOpcInc=0;

            }

            switch(opciones)
            {
            case '1':

                printf("Ingrese 1er operando: ");
                scanf("%f", &operador1);
                printf("\n ");
                flagIngresoOperador1=1;

                break;
            case '2':
                printf("Ingrese 2do operando: ");
                __fpurge(stdin);
                scanf("%f", &operador2);
                printf("\n ");
                flagIngresoOperador2=1;
                flagOpcInc=0;

                break;
            case '3':
                do
                {
                	   if((flagIngresoOperador1==1) || (flagIngresoOperador2==1)){
                    resultadoSuma= calculoSuma(operador1,operador2);
                    resultadoResta= calculoResta(operador1,operador2);
                    resultadoDivisionError= calculoDivision(operador1,operador2, &resultadoDivision);
                    resultadoMultiplicacionError=calculoMultiplicacion(operador1, operador2, &resultadoMultiplicacion);
                    resultadoFactorialAError=calculoFactorialA(operador1, &resultadoFactorialA);
                    resultadoFactorialBError=calculoFactorialB(operador2, &resultadoFactorialB);


                    flagSeCalculo=1;
                    printf("\nSe han realizado todos los cálculos posibles.\n\n");
                	   }
                	   else{
                		   printf("Ingrese al menos un operador.\n");
                	   }
                    printf("¿Deseas volver al menú? Ingresa 's' ");
                    __fpurge(stdin);
                    seguir=getchar();
                }while(seguir!='s');
                break;
            case '4':
                do
                {


                    if(flagIngresoOperador1==0 && flagIngresoOperador2==1)
                    {
                        flagNoSeIngresoOperador=1;
                    }
                    else if(flagIngresoOperador1==1 && flagIngresoOperador2==0)
                    {
                        flagNoSeIngresoOperador=2;
                    }
                    else if(flagIngresoOperador1==0 && flagIngresoOperador2==0)
                    {
                        flagNoSeIngresoOperador=3;
                    }
                    else if(flagSeCalculo==0)
                    {
                        flagNoSeIngresoOperador=4;
                    }


                    else
                    {
                        flagNoSeIngresoOperador=0;
                    }
                    switch(flagNoSeIngresoOperador)
                    {
                    case 1:
                    	printf("Los resultados son: \n");
                        printf("a)Falta el 1er operador para poder realizar la suma, vuelva al menú y seleccione la opción 1.\n");
                        printf("b)Falta el 1er operador para poder realizar la resta, vuelva al menú y seleccione la opción 1.\n");
                        printf("c)Falta el 1er operador para poder realizar la división, vuelva al menú y seleccione la opción 1.\n");
                        printf("d)Falta el 1er operador para poder realizar la multiplicación, vuelva al menú y seleccione la opción 1.\n");
                        if(flagSeCalculo==1){
                        switch(resultadoFactorialBError){
                        case 0:

                        printf("e)Falta el 1er operador para poder realizar el factorial de A. El factorial de %.0f es: %.0f\n", operador2, resultadoFactorialB);
                        break;
                        case 1:
                        printf("e)Falta el 1er operador para poder realizar el factorial de A. El factorial de %.0f es: %.0f\n", operador2, resultadoFactorialB);
                        break;
                        case 2:
                        printf("e)Falta el 1er operador para poder realizar el factorial de A. El factorial de %.2f no se puede calcular porque no es entero.\n", operador2);
                        break;
                        case 3:
                        printf("e)Falta el 1er operador para poder realizar el factorial de A. El factorial de %.0f no se puede calcular porque es negativo.\n", operador2);


                        break;
                        default:
                        printf("e)Falta el 1er operador para poder realizar el factorial de A.\n El factorial de %.0f es demasiado grande para mostarse :( \n", operador2);
                        }
                        }
                        else if(((operador2-(int)operador2)!=0) && flagSeCalculo==0){
                            printf("e)Falta el 1er operando para poder realizar el factorial de A.\n El factorial de %.2f todavía no se calculó seleccione la opción 3 y vuelve a seleccionar la opción 4 para verlo. \n",operador2);

                        }
                        else{
                        printf("e)Falta el 1er operando para poder realizar el factorial de A.\n El factorial de %.0f todavía no se calculó seleccione la opción 3 y vuelve a seleccionar la opción 4 para verlo. \n",operador2);
                        }
                        flagNoSeIngresoOperador=0; //sé que estas banderas son innecesarias, pero por miedo a que me dé algún error las dejo.

                    case 2:
                    	printf("Los resultados son: \n");
                        printf("a)Falta el 2do operador para poder realizar la suma, vuelva al menú y seleccione la opción 2.\n");
                        printf("b)Falta el 2do operador para poder realizar la resta, vuelva al menú y seleccione la opción 2.\n");
                        printf("c)Falta el 2do operador para poder realizar la división, vuelva al menú y seleccione la opción 2.\n");
                        printf("d)Falta el 2do operador para poder realizar la multiplicación, vuelva al menú y seleccione la opción 2.\n");
                        if(flagSeCalculo==1){
                        switch(resultadoFactorialAError){
                        case 0:
                        printf("e)El factorial de %.0f es: %.0f. Falta el 2do operador para poder realizar el factorial de B.\n", operador1,resultadoFactorialA);
                        break;
                        case 1:
                        printf("e)El factorial de %.0f es: %.0f. Falta el 2do operador para poder realizar el factorial de B.\n", operador1,resultadoFactorialA);
                        break;
                        case 2:
                        printf("e)El factorial de %.2f no se puede calcular porque no es entero. Falta el 2do operador para poder realizar el factorial de B.\n", operador1);
                        break;
                        case 3:
                        printf("e)El factorial de %.0f no se puede calcular porque es negativo. Falta el 2do operador para poder realizar el factorial de B \n", operador1);
                        break;
                        default:
                        printf("e)El factorial de %.0f es demasiado grande para mostrarse :(. Falta el 2do operador para poder realizar el factorial de B \n", operador1);

                        }
                        }
                        else if(((operador1-(int)operador1)!=0) && flagSeCalculo==0){
                        printf("e)El factorial de %.2f todavía no se calculó seleccione la opción 3 y vuelve a seleccionar la opción 4 para verlo. \nFalta el 2do operador para poder realizar el factorial de B. \n",operador1);

                        }
                        else{
                        printf("e)El factorial de %.0f todavía no se calculó seleccione la opción 3 y vuelve a seleccionar la opción 4 para verlo. \nFalta el 2do operador para poder realizar el factorial de B. \n",operador1);
                        }


                        flagNoSeIngresoOperador=0;


                    case 3:
                    	printf("Los resultados son: \n");
                        printf("a)Faltan ambos operadores para realizar la suma, vuelva al menú y selecciónelos.\n");
                        printf("b)Faltan ambos operadores para realizar la resta, vuelva al menú y selecciónelos.\n");
                        printf("c)Faltan ambos operadores para realizar la división, vuelva al menú y selecciónelos.\n");
                        printf("d)Faltan ambos operadores para realizar la multiplicación, vuelva al menú y selecciónelos.\n");
                        printf("e)Faltab ambos operadores para factorizar.\n");
                        flagNoSeIngresoOperador=0;
                        break;
                    case 4:
                        printf("a)No se calculó la suma, vuelve al menú y selecciona la opción 3.\n");
                        printf("b)No se calculó la resta, vuelve al menú y selecciona la opción 3.\n");
                        printf("c)No se calculó la división, vuelve al menú y selecciona la opción 3.\n");
                        printf("d)No se calculó la multiplicación, vuelve al menú y selecciona la opción 3.\n");
                        printf("e)No se calculo el factorial ni de a ni de b, vuelva al menú y selecciona la opcion3.\n");
                        break;

                    default:
                        //mostrar suma
                    	printf("Los resultados son: \n");
                        if((operador1 -(int)operador1==0) && (operador2-(int)operador2==0))
                        {
                            printf("a)El resultado de %.0f + %.0f es: %.0f\n", operador1,operador2, resultadoSuma);
                        }
                        else if((((operador1 -(int)operador1!=0) && (operador2-(int)operador2!=0))) && (resultadoSuma - (int)resultadoSuma==0))
                        {
                            printf("a)El resultado de %.2f + %.2f es: %.0f\n", operador1,operador2, resultadoSuma);
                        }


                        else if((operador1-(int)operador1!=0) && (operador2-(int)operador2==0))
                        {
                            printf("a)El resultado de %.2f + %.0f es: %.2f\n", operador1,operador2, resultadoSuma);
                        }
                        else if((operador1-(int)operador1==0) && (operador2-(int)operador2!=0) )
                        {
                            printf("a)El resultado de %.0f + %.2f es: %.2f\n", operador1,operador2, resultadoSuma);
                        }
                        else
                        {
                            printf("a)El resultado de %.2f + %.2f es: %.2f\n", operador1,operador2, resultadoSuma);
                        }
                        //mostrar resta
                        if((operador1 -(int)operador1==0) && (operador2-(int)operador2==0))
                        {
                            printf("a)El resultado de %.0f - %.0f es: %.0f\n", operador1,operador2, resultadoResta);
                        }
                        else if((((operador1 -(int)operador1!=0) && (operador2-(int)operador2!=0))) && (resultadoResta - (int)resultadoResta==0))
                        {
                            printf("a)El resultado de %.2f - %.2f es: %.0f\n", operador1,operador2, resultadoResta);
                        }


                        else if((operador1-(int)operador1!=0) && (operador2-(int)operador2==0))
                        {
                            printf("a)El resultado de %.2f - %.0f es: %.2f\n", operador1,operador2, resultadoResta);
                        }
                        else if((operador1-(int)operador1==0) && (operador2-(int)operador2!=0) )
                        {
                            printf("a)El resultado de %.0f - %.2f es: %.2f\n", operador1,operador2, resultadoResta);
                        }
                        else
                        {
                            printf("a)El resultado de %.2f - %.2f es: %.2f\n", operador1,operador2, resultadoResta);
                        }
                        //mostrar división
                        switch(resultadoDivisionError)
                        {
                        case 1 :
                            printf("c)No es posible dividir por cero.\n");
                            break;
                        case 2 :
                        	if(operador1-(int)operador1!=0){
                        		printf("c)El resultado de %.2f / %.0f es: %.0f\n", operador1,operador2, resultadoDivision);
                        	}
                        		else{
                                printf("c)El resultado de %.0f / %.0f es: %.0f\n", operador1,operador2, resultadoDivision);

                                }


                        default:
                            if((operador1 -(int)operador1==0) && (operador2-(int)operador2==0)&& resultadoDivision-(int)resultadoDivision==0)
                            {
                                printf("c)El resultado de %.0f / %.0f es: %.0f\n", operador1,operador2, resultadoDivision);
                            }
                            else if((operador1 -(int)operador1==0) && (operador2-(int)operador2==0)&& resultadoDivision-(int)resultadoDivision!=0)
                            {

                                printf("c)El resultado de %.0f / %.0f es: %.4f\n", operador1,operador2, resultadoDivision);

                            }
                            else if((operador1 -(int)operador1!=0) && (operador2-(int)operador2!=0)&& resultadoDivision-(int)resultadoDivision!=0)
                            {

                                printf("c)El resultado de %.2f / %.2f es: %.4f\n", operador1,operador2, resultadoDivision);
                            }
                            else if((operador1 -(int)operador1!=0) && (operador2-(int)operador2!=0)&& resultadoDivision-(int)resultadoDivision==0)
                            {

                                printf("c)El resultado de %.2f / %.2f es: %.0f\n", operador1,operador2, resultadoDivision);
                            }
                            else if((operador1 -(int)operador1!=0) && (operador2-(int)operador2==0)&& resultadoDivision-(int)resultadoDivision==0)
                            {

                                printf("c)El resultado de %.2f / %.0f es: %.0f\n", operador1,operador2, resultadoDivision);
                            }
                            else if((operador1 -(int)operador1!=0) && (operador2-(int)operador2==0)&& resultadoDivision-(int)resultadoDivision!=0)
                            {

                                printf("c)El resultado de %.2f / %.0f es: %.4f\n", operador1,operador2, resultadoDivision);
                            }
                            else if((operador1 -(int)operador1==0) && (operador2-(int)operador2!=0)&& resultadoDivision-(int)resultadoDivision==0)
                            {

                                printf("c)El resultado de %.0f / %.2f es: %.0f\n", operador1,operador2, resultadoDivision);
                            }
                            else{
                                printf("c)El resultado de %.0f / %.2f es: %.2f\n", operador1,operador2, resultadoDivision);

                            }

                        }

                        //mostrar multiplicación
                        switch(resultadoMultiplicacionError){
                        case 0:
                        if((operador1 -(int)operador1==0) && (operador2-(int)operador2==0))
                        {
                            printf("d)El resultado de %.0f * %.0f es: %.0f\n", operador1,operador2, resultadoMultiplicacion);
                        }
                        else if((((operador1 -(int)operador1!=0) && (operador2-(int)operador2!=0))) && (resultadoMultiplicacion - (int)resultadoMultiplicacion==0))
                        {
                            printf("d)El resultado de %.2f * %.2f es: %.0f\n", operador1,operador2, resultadoMultiplicacion);
                        }


                        else if((operador1-(int)operador1!=0) && (operador2-(int)operador2==0))
                        {
                            printf("d)El resultado de %.2f * %.0f es: %.4f\n", operador1,operador2, resultadoMultiplicacion);
                        }
                        else if((operador1-(int)operador1==0) && (operador2-(int)operador2!=0) )
                        {
                            printf("d)El resultado de %.0f * %.2f es: %.4f\n", operador1,operador2, resultadoMultiplicacion);
                        }
                        else
                        {
                            printf("d)El resultado de %.2f * %.2f es: %.4f\n", operador1,operador2, resultadoMultiplicacion);
                        }
                        break;
                        case 1:
                        	if(operador1-(int)operador1!=0){
                        		printf("c)El resultado de %.2f * %.0f es: %.0f\n", operador1,operador2, resultadoMultiplicacion);
                        	}
                        		else{
                                printf("c)El resultado de %.0f * %.0f es: %.0f\n", operador1,operador2, resultadoMultiplicacion);

                                }
                        	break;
                        default:
                        	if(operador2-(int)operador2!=0){
                        		printf("c)El resultado de %.0f * %.2f es: %.0f\n", operador1,operador2, resultadoMultiplicacion);
                        	}
                        		else{
                                printf("c)El resultado de %.0f * %.0f es: %.0f\n", operador1,operador2, resultadoMultiplicacion);

                                }
                        }



                        // mostrar factorial A y B
                        switch(resultadoFactorialAError){
                        case 0:
                        printf("e)El factorial de %.0f es: %.0f.", operador1,resultadoFactorialA);
                        break;
                        case 1:
                        printf("e)El factorial de %.0f es: %.0f.", operador1,resultadoFactorialA);
                        break;
                        case 2:
                        printf("e)El factorial de %.2f no se puede calcular porque no es entero.", operador1);
                        break;
                        case 3:
                        printf("e)El factorial de %.0f no se puede calcular porque es negativo.", operador1);
                        break;
                        default:
                        printf("e)El factorial de %.0f es demasiado grande para mostrarse :(.", operador1);

                        }
                        switch(resultadoFactorialBError){
                        case 0:

                        printf(" El factorial de %.0f es: %.0f\n", operador2, resultadoFactorialB);
                        break;
                        case 1:
                        printf(" El factorial de %.0f es: %.0f\n", operador2, resultadoFactorialB);
                        break;
                        case 2:
                        printf(" El factorial de %.2f no se puede calcular porque no es entero.\n", operador2);
                        break;
                        case 3:
                        printf(" El factorial de %.0f no se puede calcular porque es negativo.\n", operador2);


                        break;
                        default:
                        	if(operador1-(int)operador1==0)
                        printf(" El factorial de %.0f es demasiado grande para mostarse :( \n", operador2);
                        }

                        flagSeCalculo=0;

                    }

                    printf("¿Deseas volver al menú? Ingresa 's' ");
                    __fpurge(stdin);
                    seguir=getchar();

                }while(seguir!='s');

                break;
            case '5':
                printf("Usted ha decidido salir del programa");
                flagSalir=1;

                break;
            default:
                flagOpcInc=1;
                break;
            }

        }while(flagOpcInc==1);

    }while(flagSalir==0);

    return EXIT_SUCCESS;

}
