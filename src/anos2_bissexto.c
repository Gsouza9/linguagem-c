#include <stdio.h>

int main() {
    int anoInicial, anoFinal, ano;

    printf("Digite o ano inicial: ");
    scanf("%d", &anoInicial);

    printf("Digite o ano final: ");
    scanf("%d", &anoFinal);

    printf("Anos bissextos entre %d e %d:\n", anoInicial, anoFinal);

    ano = anoInicial; 
    while (ano <= anoFinal) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("%d\n", ano);
        }
        ano++; 
    }

    return 0;
}
