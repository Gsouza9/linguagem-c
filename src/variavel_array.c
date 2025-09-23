#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    int notas1 = 10;
    int notas2 = 8;
    int notas3 = 5;

    int notas [3] = {10,8,5};

    printf("A nota é %d - posição em memória %p\n", notas1, &notas1);
    printf("A nota é %d - posição em memória %p\n", notas2, &notas2);
    printf("A nota é %d - posição em memória %p\n", notas3, &notas3);
    printf("\n------------------------------------------------\n");
    printf("A primeira nota é %d - posição de memória %p\n",notas[0],&notas[0]);
    printf("A primeira nota é %d - posição de memória %p\n",notas[1], &notas[1]);
    printf("A primeira nota é %d - posição de memória %p\n",notas[0], &notas[0]);
    
    return 0;
}