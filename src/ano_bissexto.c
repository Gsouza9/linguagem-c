#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int n;
    printf("Digite um ano ano e clique enter\n");
    scanf("%d",&n);
    if ( n % 4 == 0){
        printf("O ano de %d que você digitou é bissexto\n",n);
    }
    else{
        printf("O ano de %d que você digitou não é bissexto\n",n);
    }
    return 0;
}