/*
4) Escreva um programa para calcular e imprimir o número de lâmpadas necessárias para iluminar um
determinado cômodo de uma residência. Dados de entrada: a potência da lâmpada utilizada (em
watts), as dimensões (largura e comprimento, em metros) do cômodo. Considere que a potência
necessária é de 18 watts por metro quadrado.
*/
#include <stdio.h>

int main()
{
    int largura, comprimento, potenciaLampadas, numeroLampadas;
    printf("Insira as Dimensoes do comodo (largura  e comprimento): \nObs. Insira em linhas separadas \n ");
    scanf("%d%d", &largura, &comprimento);
    
    printf("Insira a potencia da lampada utilizada (watts): \n");
    scanf("%d", &potenciaLampadas);
    
    numeroLampadas = (18/potenciaLampadas)*(largura*comprimento);
    printf("Serão necessárias %d lampadas. \n", numeroLampadas);

    return 0;
}
