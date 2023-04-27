#include <stdio.h>

/* 7. Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */

int fibonacci(int n);

int main()
{

    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%i", &n);

    printf("O %iº termo é: %i", n, fibonacci(n));
}

int fibonacci(int n)
{

    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}