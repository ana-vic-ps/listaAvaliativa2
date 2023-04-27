#include <stdio.h>

/* 9. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade */

int main()
{

    int valorTotal, resposta;
    int qtdAcabaxi, qtdMaca, qtdPera;

    printf(" 1 => ABACAXI – 5,00 a unidade\n 2 => MAÇA – 1,00 a unidade \n 3 => PERA – 4,00 a unidade");

    printf("\n\nQuantos abacaxis deseja comprar? ");
    scanf("%i", &qtdAcabaxi);

    printf("Quantas maçãs deseja comprar? ");
    scanf("%i", &qtdMaca);

    printf("Quantas pêras deseja comprar? ");
    scanf("%i", &qtdPera);

    printf("\nDeseja retornar ao menu? (1 para sim / 2 para não): \n");
    scanf("%i", &resposta);

    if (resposta == 1)
    {
        printf(" 1 => ABACAXI – 5,00 a unidade\n 2 => MAÇA – 1,00 a unidade \n 3 => PERA – 4,00 a unidade");

        printf("\n\nQuantos abacaxis deseja comprar? ");
        scanf("%i", &qtdAcabaxi);

        printf("Quantas maçãs deseja comprar? ");
        scanf("%i", &qtdMaca);

        printf("Quantas pêras deseja comprar? ");
        scanf("%i", &qtdPera);

        printf("\nDeseja retornar ao menu? (1 para sim / 2 para não): ");
        scanf("%i", &resposta);
    }

    valorTotal = (qtdAcabaxi * 5) + (qtdMaca * 1) + (qtdPera * 4);

    printf("\nValor total da compra: %i", valorTotal);
}