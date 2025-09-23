#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    FILE arquivo;
    arquivo = fopen("texto.txt","a");
    fprint(arquivo,"Sexta-Feira");
    fclose(arquivo);
    return 0;

}