#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int n;
    printf("Digite um número inteiro e tecle enter\n");
    scanf("%d",&n);
    if ( n % 2 == 0){
        printf("O numero %d que você digitou é Par\n",n);
    }
    else{
        printf("O numero %d que você digitou é ímpar\n",n);
    }
    return 0;
}