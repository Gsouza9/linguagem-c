#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome_completo[30];
    float nota1, nota2, nota3, nota4;
    float soma, media;

    printf("Digite o seu nome:\n");
    fgets(nome_completo, 30, stdin);
    printf("Olá, %s\n", nome_completo);

    printf("Digite a sua nota de matemática:\n");
    scanf("%f", &nota1);

    printf("Digite a sua nota de Português:\n");
    scanf("%f", &nota2);

    printf("Digite a sua nota de Programação:\n");
    scanf("%f", &nota3);

    printf("Digite a sua nota de História:\n");
    scanf("%f", &nota4);

    soma = nota1 + nota2 + nota3 + nota4;
    media = soma / 4;

    printf("Media: %.2f\n", media);

    if (media >= 7.0){
    printf("O Aluno foi aprovado\n");
    }
    else if(media <= 4.0){
    printf("O Aluno foi reprovado\n");
    }
    else{
    printf("O Aluno está em recuperação\n");
    }


    return 0;
}