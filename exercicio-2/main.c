#include <stdio.h>
int main()
{
/*2) Escreva um programa para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor
correspondente em graus Celsius.*/

float celsius, fahrenheit;
printf("Digite o graus em Fahrenheit: ");
scanf("%f", &fahrenheit);

celsius = ((fahrenheit - 32)/9) * 5;

printf("O grau em Celsius é %.2f\n", celsius);
    return 0;
}