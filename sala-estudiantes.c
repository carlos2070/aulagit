#include <stdio.h>

int estudantes[5], indice, sala, media = 0;

int main() {

    printf(">>> Bem-vindo ao siguente programa, que consulta a quantidade de estudantes em 5 salas, para logo calcular a media e determinar qual sala tem mais e menos estudantes.<<<\n");

    printf("Pressione Enter para continuar...\n");
    getchar();

    printf("Digite a quantidade de estudantes em 5 salas:\n");
    
    for(indice = 0; indice < 5; indice++) {
        printf("Sala %d: ", indice + 1);
        scanf("%d", &estudantes[indice]);
        media += estudantes[indice];
    }

    media = media / 5;

    int maior = estudantes[0], menor = estudantes[0];
    int sala_maior = 1, sala_menor = 1;

    for(indice = 1; indice < 5; indice++) {
        if(estudantes[indice] > maior) {
            maior = estudantes[indice];
            sala_maior = indice + 1;
        }
        if(estudantes[indice] < menor) {
            menor = estudantes[indice];
            sala_menor = indice + 1;
        }
    }

    printf("\nPara consultar a sala, digite um número de 1 a 5: ");
    scanf("%d", &sala);

    if(sala >= 1 && sala <= 5) {
        printf("A sala %d possui: %d estudantes.\n", sala, estudantes[sala - 1]);
        printf("A média de estudantes por sala é: %d.\n", media);
        printf("A sala com mais estudantes é a sala: %d, com %d: estudantes.\n", sala_maior, maior);
        printf("A sala com menos estudantes é a sala: %d, com %d: estudantes.\n", sala_menor, menor);
    } else {
        printf("Número de sala inválido, digite de 1 a 5.\n");
    }

    return 0;
}