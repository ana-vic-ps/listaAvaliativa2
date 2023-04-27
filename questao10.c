#include <stdio.h>

/* 10. Faça um programa que leia 10 inteiros e imprima sua média. */

int main(){

    int vet[10], soma;
    float media;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &vet[i]);
        soma += vet[i] ;
    }

    media = soma / 10;

    printf("\nMédia dos valores: %0.2f", media);
    
}