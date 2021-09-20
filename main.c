#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

float calculoSuma(float n1, float n2);

int main()
{
    //variables para los operadores
    float operador1;
    float operador2;

    //variables para las funciones y resultados
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    int resultadoFactorialA;
    int resultadoFactorialB;

    //variable para seleccionar los casos del switch para las 5/6 opciones
    int opciones;

    /*flags para el ingreso de operadores y error de no-número en case1-case2
    no se ingreso operador para el case3 todavía no hice lo del case1 y case2
    */
    int flagIngresoOperador1=0;
    int flagIngresoOperador2=0;
    int flagNoEsUnNumero=0;
    int flagNoSeIngresoOperador=0;

    //flag para ingreso de opción incorrecta
    int flagOpcInc=0;

    //flag para salir del programa
    int flagSalir=0;


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
            if(flagOpcInc==1  ||opciones<1 && opciones>5)
            {
                printf("\nError: Esta no es una opción válida.\n\n");
                printf("Recuerde ingresar una opción entre los números 1 y 5: \n");
                __fpurge(stdin);
                scanf("%d", &opciones);
                flagOpcInc=0;
            }

            else
            {
                printf("Ingrese a continuación el número de la opción que eligió: \n ");
                __fpurge(stdin);
                scanf("%d", &opciones);

            }
            switch(opciones)
            {
            case 1:

                printf("Ingrese 1er operando: \n\n");
                __fpurge(stdin);
                scanf("%f", &operador1);
                flagIngresoOperador1=1;

                break;
            case 2:
            do{
                printf("Ingrese 2do operando: \n\n");
                scanf("%f", &operador2);
                flagIngresoOperador2=1;
                printf("\n");
                if(isdigit((char)operador1))
                {
                printf("Esto no es un número");
                flagNoEsUnNumero=1;
                }
                }while(flagNoEsUnNumero==1);
                break;
            case 3:
                resultadoSuma= calculoSuma(operador1,operador2);
                /*calcResta=
                calcDivision=
                calcMultiplicacion=
                calcFactA=
                calcFactB=
                */
                printf("\nSe han realizado todos los cálculos posibles.\n\n");
                break;
            case 4:
                printf("Los resultado son: \n");
                //mostrar suma
                if(flagIngresoOperador1==0 && flagIngresoOperador2==1){
                flagNoSeIngresoOperador=1;
                }
                else if(flagIngresoOperador1==1 && flagIngresoOperador2==0){
                flagNoSeIngresoOperador=2;
                }
                else{
                flagNoSeIngresoOperador=3;
                }
                switch(flagNoSeIngresoOperador){
                case 1:
                printf("a) Falta el 1er operador para poder realizar la suma.\n");
                break;

                case 2:
                printf("a) Falta el 2do operador para poder realizar la suma.\n");
                break;

                case 3:
                printf("a) Faltan ambos operadores para realizar la suma\n");
                break;
                default:
                if((operador1 -(int)operador1==0) && (operador2-(int)operador2==0))
                    printf("a)El resultado de %.0f + %.0f es: %.0f\n", operador1,operador2, resultadoSuma);
                else if((((operador1 -(int)operador1!=0) && (operador2-(int)operador2!=0))) && (resultadoSuma - (int)resultadoSuma==0))
                {
                    printf("a)El resultado de %.2f + %.2f es: %.0f\n", operador1,operador2, resultadoSuma);
                }


                if((operador1-(int)operador1==0) && (operador2-(int)operador2==0))
                {
                    printf("a)El resultado de %.2f + %.0f es: %.2f\n", operador1,operador2, resultadoSuma);
                }
                if((operador1-(int)operador1!=0) && (operador2-(int)operador2==0))
                {
                    printf("a)El resultado de %.2f + %.0f es: %.2f\n", operador1,operador2, resultadoSuma);
                }
                if((operador2-(int)operador2!=0) && (operador1-(int)operador1==0))
                {
                    printf("a)El resultado de %.0f + %.2f es: %.2f\n", operador1,operador2, resultadoSuma);
                }
                }

                //mostrar resta
                printf("b)El resultado de A-B es: r\n"); // %d %d es %d op1,op2,resultadoResta
                printf("c)El resultado de A/B es: r\n"); // %d %d es %f op1,op2,resultadoDivision
                //o
                printf("c)No es posible dividir por cero\n"); //????
                printf("d)El resultado de A*B es: \n");// %d %d es %d op1,op2,resultadoMultiplicacion
                printf("e)El factorial de A es: r1 y El factorial de B es: r2\n\n"); // %d es %d y %d es %d op1,resultadoFactorialA, op2, resultadoFactorialB
                break;
            case 5:
                printf("Usted ha decidido salir del programa");
                flagSalir=1;
                break;
            default:
                flagOpcInc=1;
            }
        }while(flagOpcInc==1);
    }while(flagSalir==0);
    //switch


    //INFORMAR RESULTADOs
    return 0;

}
float calculoSuma(float n1, float n2)
{
    float resultadoSuma;

    resultadoSuma=n1+n2;

    return resultadoSuma;
}

