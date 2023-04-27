#include <stdio.h>
#define DIFERENCA(a, b, c, d) ((a * b) - (c * d))

/* 1. Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”) */

int main()
{

    int a, b, c, d, resultado;

    printf("Atribua um valor para A: ");
    scanf("%i", &a);

    printf("Atribua um valor para B: ");
    scanf("%i", &b);

    printf("Atribua um valor para C: ");
    scanf("%i", &c);

    printf("Atribua um valor para D: ");
    scanf("%i", &d);

    resultado = DIFERENCA(a, b, c, d);

    printf("DIFERENCA = (%i * %i - %i * %i)", a, b, c, d);
    printf("\nDIFERENCA = %i",resultado);
}