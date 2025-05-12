#include <stdio.h>
int main()
{
/*2) Escreva um programa para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor
correspondente em graus Celsius.*/

float celsius, fahrenheit;
printf("Digite o graus em Celsius: ");
scanf("%f", &celsius);

fahrenheit = celsius * 9/5 + 32;

printf("O grau em Fahrenheit é %.2f\n", fahrenheit);
    return 0;
}