#include <stdio.h>

int main() {
    int A1, A2, A3;
    int tempo1, tempo2, tempo3, min;

    printf("Digite o numero de pessoas que trabalham no andar 1: ");
    scanf("%d", &A1);
    printf("Digite o numero de pessoas que trabalham no andar 2: ");
    scanf("%d", &A2);
    printf("Digite o numero de pessoas que trabalham no andar 3: ");
    scanf("%d", &A3);

    tempo1 = A2 * 2 + A3 * 4;
    tempo2 = A1 * 2 + A3 * 2;
    tempo3 = A1 * 4 + A2 * 2;

    min = tempo1;
    if (tempo2 < min) min = tempo2;
    if (tempo3 < min) min = tempo3;

    printf("O numero total de minutos a ser gasto eh: %d\n", min);

    return 0;
}
