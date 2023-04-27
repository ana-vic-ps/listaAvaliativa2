#include <stdio.h>

/* Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo:
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66. */

int main()
{

    int n, divisor = 0;

    printf("Digite um número positivo: ");
    scanf("%i", &n);

    printf("\nOs divisores de %i são: ", n);

    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            divisor = i;
            printf("%i | ", divisor);
        }
    }
}