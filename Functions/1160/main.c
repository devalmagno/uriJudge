#include <stdio.h>

int calculaAnos(int populacaoA, int populacaoB, double taxaA, double taxaB);
void mostraValor(T);

int main() {
    int T;
    double taxaA, taxaB;
    scanf("%d", &T);

    mostraValor(T);

    return 0;
}

void mostraValor(T) {
    int i, populacaoA, populacaoB, anos;
    double taxaA, taxaB;

    for (i = 0; i < T; i++) {
        scanf("%d %d %lf %lf", &populacaoA, &populacaoB, &taxaA, &taxaB);

        anos = calculaAnos(populacaoA, populacaoB, taxaA, taxaB);

        if (anos > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", anos);
        }
    }
}

int calculaAnos(int populacaoA, int populacaoB, double taxaA, double taxaB) {
    int j;
    j = 0;

    while (populacaoA < populacaoB) {
        populacaoA += populacaoA * (taxaA / 100);
        populacaoB += populacaoB * (taxaB / 100);
        j++;
    }

    if (populacaoA == populacaoB) {
        j++;
    }

    return j;
}