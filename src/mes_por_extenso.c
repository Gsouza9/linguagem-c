#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int mes;
    printf("digite o numero do mes e eu lhe direi o mes por extenso: \n");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("Este é o mes de Janeiro");
        break;

    case 2:
        printf("Este é o mes de Fevereiro");
        break;

    case 3:
        printf("Este é o mes de Março");
        break;

    case 4:
        printf("Este é o mes de Abril");
        break;

    case 5:
        printf("Este é o mes de Maio");
        break;

    case 6:
        printf("Este é o mes de Junho");
        break;
    case 7:
        printf("Este é o mes de Julho");
        break;

    case 8:
        printf("Este é o mes de Agosto");
        break;

    case 9:
        printf("Este é o mes de Setembro");
        break;

    case 10:
        printf("Este é o mes de Outubro");
        break;

    case 11:
        printf("Este é o mes de Novembro");
        break;

    case 12:
        printf("Este é o mes de Dezembro");
        break;

    default:
        printf("mes inválido");
        break;
    }
    printf("\n");
    return 0;
}