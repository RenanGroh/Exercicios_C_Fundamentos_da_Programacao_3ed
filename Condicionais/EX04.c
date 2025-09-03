#include <stdio.h>
// Exercícios da pagina 62
int main() {
    // Execício 4
    // Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
    // digitará três números diferentes.

    printf("#### Exercicio 4 ####\n");

    float x, y, z;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &x);
    printf("Digite o segundo numero: ");
    scanf("%f", &y);
    printf("Digite o terceiro numero: ");
    scanf("%f", &z);

    printf("Ordem crescente: ");
    if (x < y && x < z) {
        if (y < z)
            printf("%.2f, %.2f, %.2f\n", x, y, z);
        else
            printf("%.2f, %.2f, %.2f\n", x, z, y);
    } else if (y < x && y < z) {
        if (x < z)
            printf("%.2f, %.2f, %.2f\n", y, x, z);
        else
            printf("%.2f, %.2f, %.2f\n", y, z, x);
    } else {
        if (x < y)
            printf("%.2f, %.2f, %.2f\n", z, x, y);
        else
            printf("%.2f, %.2f, %.2f\n", z, y, x);
    }
    
    return 0;
}