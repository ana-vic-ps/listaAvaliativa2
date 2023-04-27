#include <stdio.h>

/* 8. Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido */

int main()
{

    int n, maior, menor;

    maior = 0;
    menor = 0;

    do
    {
        printf("Digite um número inteiro: ");
        scanf("%i", &n);

        for (int i = n; i <= n; i++)
        {
            if (maior < i)
            {
                maior = i;
            }
            if (menor > i)
            {
                menor = i;
            }
        }

    } while (n >= 0);

    printf("\nMaior número: %i", maior);
    printf("\nMenor número: %i", menor);
}
