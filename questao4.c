#include <stdio.h>

/* 4. Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou
se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem,
escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou
“Eixo Y”, conforme for a situação. */

int main()
{

    float x, y;

    printf("Atribua um valor a X. O valor deve possuir uma casa decimal: ");
    scanf("%f", &x);

    printf("Atribua um valor a Y. O valor deve possuir uma casa decimal: ");
    scanf("%f", &y);

    if (x == 0.0 && y == 0.0)
    {
        printf("Ponto sob a origem do plano cartesiano.");
    }
    else if (x == 0 && y != 0)
    {
        printf("Ponto sob eixo Y.");
    }
    else if (x != 0 && y == 0)
    {
        printf("Ponto sob eixo X.");
    }
    else if (x > 0 && y > 0)
    {
        printf("O ponto pertence ao quadrante 1 (Q1).");
    }
    else if (x < 0 && y > 0)
    {
        printf("O ponto pertence ao quadrante 2 (Q2).");
    }
    else if (x < 0 && y < 0)
    {
        printf("O ponto pertence ao quadrante 3 (Q3).");
    }
    else
    {
        printf("O ponto pertence ao quadrante 4 (Q4).");
    }
}