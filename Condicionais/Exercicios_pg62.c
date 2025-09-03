#include <stdio.h>

// Exercícios da pagina 62

int main () {

    // Exercício 2
    // Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
    // constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
    // tirar para serem aprovados, considerando que a média exigida é 6,0.
    // 0 - 3 -> Reprovado
    // 3 - 7 -> Exame final
    // 7 - 10 -> Aprovado

    printf("#### Exercicio 2 ####\n");

    float nota1, nota2, nota3, media, nota_exame;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;
    printf("\nMedia: %.2f\n", media);

    if (media < 3.0) {
        printf("Reprovado\n");
    } else if (media < 7.0) {
        printf("Exame final\n");
        nota_exame = 6.0 * 2 - media;
        printf("Para ser aprovado, precisa tirar %.2f no exame.\n", nota_exame);
    } else if (media <= 10.0) {
        printf("Aprovado\n");
    } else {
        printf("Media invalida.\n");
    }

    // Exercício 3
    // Faça um programa que receba dois números e mostre o maior    
    printf("#### Exercicio 3 ####\n");
   
    float num1, num2;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O primeiro numero é maior.\n");
    } else if (num1 < num2) {
        printf("O segundo numero é maior.\n");
    } else {
        printf("Os numeros sao iguais.\n");
    }

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
