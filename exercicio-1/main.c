#include <stdio.h>
#include <math.h>
int main()
{
//1) Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.

float raio, area;
printf("Digite o raio do circulo: ");
scanf("%f", &raio);

area = pow(raio, 2)*M_PI;

printf("A area do circulo é %.2f\n", area);
    return 0;
}