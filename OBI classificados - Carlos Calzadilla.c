#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int *)b - *(int *)a); // Orden descendente
}

int main() {
    int N, K;
    
    printf("Ingrese el numero de competidores (N): ");
    scanf(" %d", &N);  // Espacio para limpar buffer
    
    printf("Ingrese el numero minimo de clasificados (K): ");
    scanf(" %d", &K);  // Espacio para limpiar buffer
    
    int *puntuaciones = malloc(N * sizeof(int));
    if (puntuaciones == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }
    
    printf("Ingrese las %d puntuaciones (una por linea):\n", N);
    for (int i = 0; i < N; i++) {
        printf("Puntuacion %d: ", i+1);
        scanf(" %d", &puntuaciones[i]);  // Espacio para limpar buffer
    }
    
    // Ordenar de mayor a menor
    qsort(puntuaciones, N, sizeof(int), comparar);
    
    // Obter o umbral (K ésima posicaon)
    int umbral = puntuaciones[K - 1];
    int clasificados = 0;
    
    // Contar todos >= umbral (com empates)
    for (int i = 0; i < N; i++) {
        if (puntuaciones[i] >= umbral) {
            clasificados++;
        }
    }
    
    printf("\nNumero total de clasificados: %d\n", clasificados);
    free(puntuaciones);
    return 0;
}