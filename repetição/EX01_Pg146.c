#include <stdio.h>
// Exercício da pagina 146
void ordenar_crescente(int v[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

void ordenar_decrescente(int v[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (v[j] < v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}
int main() {
    // Exercício 1
    // Faça um programa que leia cinco grupos de quatro valores (A, B, C, D)
    // e mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.
    printf("#### Exercicio 1 ####\n");

    int grupo[4];

    for (int g = 1; g <= 4; g++) {
        printf("\nGrupo %d:\n", g);
        for (int i = 0; i < 4; i++) {
            printf("Digite o valor %c: ", 'A' + i);
            scanf("%d", &grupo[i]);
        }

        // Ordem lida
        printf("Ordem lida: ");
        for (int i = 0; i < 4; i++) {
            printf("%d ", grupo[i]);
        }
        printf("\n");

        // Ordem crescente
        int crescente[4];
        for (int i = 0; i < 4; i++) crescente[i] = grupo[i];
        ordenar_crescente(crescente, 4);
        printf("Ordem crescente: ");
        for (int i = 0; i < 4; i++) {
            printf("%d ", crescente[i]);
        }
        printf("\n");

        // Ordem decrescente
        int decrescente[4];
        for (int i = 0; i < 4; i++) decrescente[i] = grupo[i];
        ordenar_decrescente(decrescente, 4);
        printf("Ordem decrescente: ");
        for (int i = 0; i < 4; i++) {
            printf("%d ", decrescente[i]);
        }
        printf("\n");
    }

    return 0;
}