#include <stdio.h>
// Exercícios da pagina 62
int main() {
    // Exercício 5
    // Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. Suponha
    // que o usuário digitará quatro números diferentes.

    printf("#### Exercicio 5 ####\n");

    float n1, n2, n3, n4;
    float maior, meio1, meio2, menor;

    printf("Digite tres numeros em ordem crescente:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite o quarto numero (qualquer ordem):\n");
    scanf("%f", &n4);

    // Encontrar a ordem decrescente dos quatro números
    // Coloca todos em um vetor para facilitar
    float nums[4] = {n1, n2, n3, n4};
    // Bubble sort decrescente
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (nums[j] < nums[j+1]) {
                float temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    printf("Ordem decrescente: %.2f, %.2f, %.2f, %.2f\n", nums[0], nums[1], nums[2], nums[3]);
    
    return 0;
}