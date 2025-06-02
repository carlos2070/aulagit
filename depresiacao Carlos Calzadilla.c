#include <stdio.h>

int main() {
    float valorBem;              // Valor inicial
    float valorDepreciado;       // Valor al aplicar depreciación
    float depreciacao;           // Valor da depreciación anual
    float taxaDepreciacao;       //depreciación anual (en %)
    float depreciacaoAcumulada = 0;  //Acumulado depreciación
    int anos;                    //años para depreciar
    int i;                       //bucle

    // Entrada de dados pelo usuario
    printf("Informe o valor do bem a ser depreciado: ");
    scanf("%f", &valorBem);
    printf("Informe o periodo da depreciacao (em anos): ");
    scanf("%d", &anos);
    printf("Informe a taxa de depreciacao anual (%%): ");
    scanf("%f", &taxaDepreciacao);

    //encabezado
    printf("\nAno\tValor do Bem\tDepreciacao\tValor Depreciado\n");
    printf("=========================================================\n");

    // Bucle para calcular y mostrar a depreciación año por año
    for (i = 1; i <= anos; i++) {
        // Cálculo da depreciación anual (valorBem * tasa)
        depreciacao = valorBem * (taxaDepreciacao / 100);
        
        // Cálculo do novo valor do bien (valor actual - depreciación)
        valorDepreciado = valorBem - depreciacao;

        // Impresión dos dados do ano actual
        // Formato: Ano | Valor inicial | Depreciación | Valor depreciado
        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", i, valorBem, depreciacao, valorDepreciado);

        // Atualizacao de variables para o próximo ano
        depreciacaoAcumulada += depreciacao;  // Suma ao acumulado total
        valorBem = valorDepreciado;           // o novo valor será o valor depreciado
    }

    // Línea adorno
    printf("=========================================================\n");
    // Impreson do total acumulado da depreciacao
    printf("Depreciacao acumulada: %.2f\n", depreciacaoAcumulada);

    return 0;
}