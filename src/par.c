#include <stdio.h>
// Ultilizaremos a biblioteca stdlib que guarda
// os comandos de limpar a tela e passe
#include <stdlib.h>

int main()
{
    // Comando para limpar a tela em linux
    system("clear");
    int n;
    printf("digite um numero inteiro e tecle enter\n");
    scanf("%d", &n);
    // Se o valor digitado pelo usuário dividido por 2 e
    // restar zero(0), então o valor par é
    if (n % 2 == 0)
    {
        printf("o numero que voce digitou é par \n", n);
    }
    return 0;
}