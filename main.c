
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
int main()
{
    int operador1;
    int operador2;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    int resultadoFactorialA;
    int resultadoFactorialB;
    int opciones;
    int flagIngresoOperador1=0;
    int flagIngresoOperador2=0;
    int flagOpcInc=0;
    //MENÚ
    //switch

    printf("------Menú:------\n");
    printf("1-Ingresar 1er operando (A=x)\n");
    printf("2-Ingresar 2do operando (B=y)\n");
    printf("3-Calcular todas las operaciones\n");
    printf("4-Informar los resultados\n");
    printf("5-Salir\n");
    printf("\n");

    do
    {
        if(flagOpcInc==1 || isdigit((char)opciones)||opciones<1 && opciones>5 || (char)isspace(opciones))
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
            printf("Ingrese 1er operando: \n");
            scanf("%d", &operador1);
            flagIngresoOperador1=1;
            flagOpcInc=0;

            break;
        case 2:
            printf("Ingrese 2do operando: \n");
            scanf("%d", &operador2);
            flagIngresoOperador2=1;
            break;
        case 3:
            printf("Todas las opciones han sido calculadas con éxito.");
            break;
        case 4:
            printf("Los resultado son: \n");
            printf("a)El resultado de A+B es: r\n"); // %d %d es %d op1,op2,resultadoSuma
            printf("b)El resultado de A-B es: r\n"); // %d %d es %d op1,op2,resultadoResta
            printf("c)El resultado de A/B es: r\n"); // %d %d es %f op1,op2,resultadoDivision
            //o
            printf("c)No es posible dividir por cero\n"); //????
            printf("d)El resultado de A*B es: \n");// %d %d es %d op1,op2,resultadoMultiplicacion
            printf("e)El factorial de A es: r1 y El factorial de B es: r2\n\n"); // %d es %d y %d es %d op1,resultadoFactorialA, op2, resultadoFactorialB
            break;
        case 5:
            printf("Usted ha decidido salir del programa");
            break;
        default:
            flagOpcInc=1;
        }
    }while(flagOpcInc==1);
    //switch


    //INFORMAR RESULTADOs
    return 0;

}
