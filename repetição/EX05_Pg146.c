#include <stdio.h>
// Exercício da pagina 146
int main() {
    // Exercício 5
    // Faça um programa que mostre as tabuadas dos números de 1 a 10.

    printf("#### Exercicio 5 ####\n");

     for (int i = 1; i <= 10; i++) {
        printf("\nTabuada do %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}