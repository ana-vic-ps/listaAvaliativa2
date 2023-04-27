#include <stdio.h>
#include <math.h>
#define X(a, b) ((a - b) * (a - b))
#define Y(a, b) ((a - b) * (a - b))

/* 2. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
após a vírgula, segundo a fórmula: dAB = √(xB – xA)² + (yB – yA)². */

int main()
{

    float x1, x2, y1, y2, soma, resultado;

    printf("Digite o valor de x no ponto 1: ");
    scanf("%f", &x1);

    printf("Digite o valor de y no ponto 1: ");
    scanf("%f", &y1);

    printf("\nDigite o valor de x no ponto 2: ");
    scanf("%f", &x2);

    printf("Digite o valor de y no ponto 2: ");
    scanf("%f", &y2);

    soma = X(x2, x1) + Y(y2, y1);

    resultado = sqrt(soma);

    printf("\nDistancia entre os dois pontos = %.4f", resultado);
}