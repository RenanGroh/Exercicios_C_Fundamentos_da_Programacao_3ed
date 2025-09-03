#include <stdio.h>
// Exercícios da pagina 36
int main() {
    // Exercício 1.
    // Faça um programa que receba quatro números inteiros, calcule
    // e mostre a soma desses números.

    printf(" #### Exercicio 1: ####\n");
    int a, b, c, d, soma;
    printf("Digite quatro numeros inteiros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    soma = a + b + c + d;
    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}