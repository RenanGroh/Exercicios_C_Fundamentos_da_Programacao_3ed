#include <stdio.h>

// Exercícios da pagina 140

int main () {
    // Exercício 23
    // Faça um programa que receba o valor do salário mínimo, uma lista contendo a quantidade de quilowatts gasta por consumidor e o tipo de consumidor (1 — residencial; 2 — comercial; ou 3 — industrial) e que calcule e mostre:
    // ■■ o valor de cada quilowatt, sabendo que o quilowatt custa um oitavo do salário mínimo;
    // ■■ o valor a ser pago por consumidor (conta final mais acréscimo). O acréscimo encontra-se na tabela
    // a seguir:

    // | Tipo | % de acréscimo sobre o Valor gasto
    // | 1    | 5
    // | 2    | 10
    // | 3    | 15
    // ■■ o faturamento geral da empresa;
    // ■■ a quantidade de consumidores que pagam entre R$ 500,00 e R$ 1.000,00.
    // Termine a entrada de dados com quantidade de quilowats igual a zero.

    printf("#### Exercicio 23 ####\n");

    double salario_min, valor_kw, valor_conta, faturamento_geral = 0.0;
    int qtd_kw, tipo, consumidores_500_1000 = 0;

    printf("Digite o valor do salário mínimo: ");
    scanf("%lf", &salario_min);

    valor_kw = salario_min / 8.0;
    printf("Valor de cada quilowatt: R$ %.2f\n", valor_kw);

    while (1) {
        printf("\nDigite a quantidade de quilowatts consumidos (0 para encerrar): ");
        scanf("%d", &qtd_kw);
        if (qtd_kw == 0) break;

        printf("Digite o tipo de consumidor (1-Residencial, 2-Comercial, 3-Industrial): ");
        scanf("%d", &tipo);

        valor_conta = qtd_kw * valor_kw;

        if (tipo == 1) {
            valor_conta *= 1.05;
        } else if (tipo == 2) {
            valor_conta *= 1.10;
        } else if (tipo == 3) {
            valor_conta *= 1.15;
        } else {
            printf("Tipo inválido! Pulando consumidor.\n");
            continue;
        }

        printf("Valor a ser pago pelo consumidor: R$ %.2f\n", valor_conta);

        faturamento_geral += valor_conta;

        if (valor_conta >= 500.0 && valor_conta <= 1000.0) {
            consumidores_500_1000++;
        }
    }

    printf("\nFaturamento geral da empresa: R$ %.2f\n", faturamento_geral);
    printf("Quantidade de consumidores que pagam entre R$ 500,00 e R$ 1.000,00: %d\n", consumidores_500_1000);

    return 0;
}