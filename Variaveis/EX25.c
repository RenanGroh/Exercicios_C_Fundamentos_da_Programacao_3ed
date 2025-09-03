#include <stdio.h>
// Exercícios da pagina 49
int main () {
    // Execício 25
    // Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
    // Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que,
    // pelo menos, o custo do espetáculo seja alcançado.

    printf("#### Exercicio 25 ####\n");

    float custo_espetaculo, preco_convite;
    printf("Digite o custo do espetaculo: ");
    scanf("%f", &custo_espetaculo);
    printf("Digite o preco do convite: ");
    scanf("%f", &preco_convite);

    int convites_necessarios = (int)(custo_espetaculo / preco_convite) + 1;
    printf("A quantidade de convites que devem ser vendidos e: %d\n", convites_necessarios);

    return 0;
}