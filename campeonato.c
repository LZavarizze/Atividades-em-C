#include <stdio.h>

int main() {
    int pontosTimeA = 0;
    int pontosTimeB = 0;
    //Definir a pontuação dos times
    for (int jogo = 1; jogo <= 3; jogo++) {
        int placarTimeA, placarTimeB;
        printf("Informe o placar do jogo %d (time A x time B): ", jogo);
        scanf("%d %d", &placarTimeA, &placarTimeB);
        if (placarTimeA > placarTimeB) {
            pontosTimeA += 3;
        } else if (placarTimeA < placarTimeB) {
            pontosTimeB += 3;
        } else {
            pontosTimeA += 1;
            pontosTimeB += 1;
        }
    }
    //Printar os pontos do time A e B
    printf("Pontos do time A: %d\n", pontosTimeA);
    printf("Pontos do time B: %d\n", pontosTimeB);
    return 0;
}
