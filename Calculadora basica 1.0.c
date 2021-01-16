#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


main()
{

    float n1, n2, resultado;
    char operador;

    printf("Informe o primeiro numero: \n");
    scanf("%f", &n1);
    printf("Informe o segundo numero: \n");
    scanf("%f", &n2);
    printf("Informe o operador a ser utilizado: \n");
    scanf("%s", &operador);

    getch();

    if (operador == '+') {
    resultado = n1+n2;
    printf("\n O resultado e: %2.f", resultado);
    }
    else
    if (operador == '-') {
    resultado = n1-n2;
    printf("\n O resultado e: %2.f", resultado);
    }
    else
    if (operador == '*') {
    resultado = n1*n2;
    printf("\n O resultado e: %2.f", resultado);
    }
    else
    if (operador == '/') {
    resultado = n1/n2;
    printf("\n O resultado e: %2.f", resultado);
    }
    getch();
}
