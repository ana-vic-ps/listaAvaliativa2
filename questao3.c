#include <stdio.h>
#define PI 3.14159
#define VOL (4 / 3.0) * PI * (raio * raio * raio)
#define AREA 4 * PI * (raio * raio)

/* 3. Faça um programa que calcule e mostre a área da superfície e o volume de uma esfera
sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R³. A
fórmula para calcular a área é: 4 * pi * R². Considere (atribua) para pi o valor 3.14159. Use o
conceito de constante Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas
linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é
outro inteiro */

int main()
{

    float raio, volume, area;

    printf("Digite um valor para o raio da esfera: ");
    scanf("%f", &raio);

    volume = VOL;

    area = AREA;

    printf("\nVolume da esfera cujo raio é %.2f = %.2f", raio, volume);

    printf("\n\nArea da esfera cujo raio é %.2f = %.2f", raio, area);
}