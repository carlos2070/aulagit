#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int carneiros[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &carneiros[i]);
    }
    
    int pos = 0;
    int atacadas = 0;
    int visitado[N];
    for(int i = 0; i < N; i++) visitado[i] = 0; //inicia variable contador i, donde se ejecuta o bucle sempre e quando i sea menor que N
    
    while(pos >= 0 && pos < N) {
        int valor_antes = carneiros[pos];  // Guarda o valor antes de robar

        if(valor_antes > 0) {
            carneiros[pos]--; // Roba 1 carneiro

            if(!visitado[pos]) {
                visitado[pos] = 1;
                atacadas++;
            }

            if(valor_antes % 2 == 0) {
                pos--;  // Si era par antes de robar
            } else {
                pos++;  // Si era impar antes de robar
            }
        } else {
            break;
        }
    }
    
    int restantes = 0;
    for(int i = 0; i < N; i++) {
        restantes += carneiros[i];
    }

    printf("%d %d\n", atacadas, restantes);
    return 0;
}
