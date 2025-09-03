#include <stdio.h>

// Exercícios da pagina 82

int main () {
    // Exercício 21
    // Faça um programa que receba:
    // ■■ o código do estado de origem da carga de um caminhão, supondo que a digitação do código do
    // estado seja sempre válida, isto é, um número inteiro entre 1 e 5;
    // ■■ o peso da carga do caminhão em toneladas;
    // ■■ o código da carga, supondo que a digitação do código seja sempre válida, isto é, um número inteiro
    // entre 10 e 40.

    printf("#### Exercicio 21 ####\n");

    int cod_estado, cod_carga;
    float peso_toneladas, peso_kg;

    printf("Digite o código do estado de origem (1 a 5): ");
    scanf("%d", &cod_estado);

    printf("Digite o peso da carga (em toneladas): ");
    scanf("%f", &peso_toneladas);

    printf("Digite o código da carga (10 a 40): ");
    scanf("%d", &cod_carga);

    peso_kg = peso_toneladas * 1000;

    printf("Código do estado: %d\n", cod_estado);
    printf("Peso da carga: %.2f toneladas (%.2f kg)\n", peso_toneladas, peso_kg);
    printf("Código da carga: %d\n", cod_carga);

    return 0;
}