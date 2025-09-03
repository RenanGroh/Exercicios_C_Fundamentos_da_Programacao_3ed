#include <stdio.h>
// Exercícios da pagina 82
int main() {
    // Exercício 22
    // Faça um programa que receba o salário base e o tempo de serviço de um funcionário. Calcule e mostre:
    // ■■ O imposto, conforme a tabela a seguir.
    // sALário BAsE % soBrE o sALári o BAsE
    // < R$ 200,00 isento
    // Entre R$ 200,00 (inclusive) e R$ 450,00 (inclusive) 3%
    // Entre R$ 450,00 e R$ 700,00 8%
    // >= R$ 700,00 12%
    // ■■ A gratificação, de acordo com a tabela a seguir.
    // sALário BAsE TEMPo dE
    // sErViço grATiFiCAção
    // Superior a R$ 500,00
    // Até 3 anos 20
    // Mais de 3 anos 30
    // Até R$ 500,00
    // Até 3 anos 23
    // Entre 3 e 6 anos 35
    // De 6 anos para cima 33
    // ■■ O salário líquido, ou seja, salário base menos imposto mais gratificação.
    // ■■ A categoria, que está na tabela a seguir.
    // sALário Líquido CLAssiFiCAção
    // Até R$ 350,00 A
    // Entre R$ 350,00 e R$ 600,00 B
    // De R$ 600,00 para cima C

    printf("#### Exercicio 22 ####\n");

    float salario_base, imposto = 0, gratificacao = 0, salario_liquido;
    int tempo_servico;
    char categoria;

    printf("Digite o salário base: ");
    scanf("%f", &salario_base);

    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &tempo_servico);

    // Calculo do imposto
    if (salario_base < 200.0) {
        imposto = 0;
    } else if (salario_base <= 450.0) {
        imposto = salario_base * 0.03;
    } else if (salario_base < 700.0) {
        imposto = salario_base * 0.08;
    } else {
        imposto = salario_base * 0.12;
    }

    // Calculo da gratificação
    if (salario_base > 500.0) {
        if (tempo_servico <= 3) {
            gratificacao = 20;
        } else {
            gratificacao = 30;
        }
    } else {
        if (tempo_servico <= 3) {
            gratificacao = 23;
        } else if (tempo_servico <= 6) {
            gratificacao = 35;
        } else {
            gratificacao = 33;
        }
    }

    // Salário líquido
    salario_liquido = salario_base - imposto + gratificacao;

    // Categoria
    if (salario_liquido <= 350.0) {
        categoria = 'A';
    } else if (salario_liquido < 600.0) {
        categoria = 'B';
    } else {
        categoria = 'C';
    }

    printf("Imposto: R$ %.2f\n", imposto);
    printf("Gratificação: R$ %.2f\n", gratificacao);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);
    printf("Categoria: %c\n", categoria);

    return 0;
}