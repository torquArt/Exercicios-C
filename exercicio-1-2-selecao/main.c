/*
Escreva um programa que leia as notas das duas avaliações normais e a nota da avaliação optativa.
Caso o aluno não tenha feito a optativa deve ser fornecido o valor –1. Calcular a média do semestre
considerando que a prova optativa substitui a nota mais baixa entre as duas primeiras avaliações.
Escrever a média e mensagens que indiquem se o aluno foi aprovado, reprovado ou está em exame,
de acordo com as informações abaixo:
Aprovado : media >= 6.0
Reprovado: media < 3.0
Exame : media >= 3.0 e < 6.0
*/
#include <stdio.h>

int main()
{
    float nota1, nota2, optativa, media;
    printf("Insira a nota das duas avaliações normais e a optativa (0-10): \n Obs. Caso o aluno não tenha feito a optativa deve ser fornecido o valor –1.\n");
    scanf("%f%f%f", &nota1, &nota2, &optativa);
    
    if (optativa != -1){
        if(nota1<nota2 || nota1==nota2){
            if(optativa>nota1)nota1=optativa;
        }
        else if (nota2<nota1){
            if(optativa>nota2)nota2=optativa;
        }
    }
    
    media = (nota1+nota2)/2;
    printf("A media do aluno foi: %.1f\n", media);
    
    if (media >= 6.0) printf("Aprovado");
    if (media >= 3.0 && media < 6.0) printf("Exame");
    if (media < 3.0) printf("Reprovado");

        
    return 0;

}
