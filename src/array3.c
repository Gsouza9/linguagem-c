#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int valores[7] = {10, 56, 30, 13, 1, 47, 59};
    int numeros[5] = {3, 10, 4, 77, 47};

    printf("Pontos de interseção:\n");

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            if (valores[i] == numeros[j]) {
                printf("%d\n", valores[i]);
            }
        }
    }

    return 0;
}
