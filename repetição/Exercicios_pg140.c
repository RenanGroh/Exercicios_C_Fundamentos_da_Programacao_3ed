#include <stdio.h>

// Exercícios da pagina 140

int main () {

    // Exercício 22
    // Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para
    // preenchimento de vagas em seu quadro de funcionários. Supondo que você seja o programador dessa
    // empresa, faça um programa que leia, para cada candidato, a idade, o sexo (M ou F) e a experiência no
    // serviço (S ou N). Para encerrar a entrada de dados, digite zero para a idade.
    // O programa também deve calcular e mostrar:
    // ■■ o número de candidatos do sexo feminino;
    // ■■ o número de candidatos do sexo masculino;
    // ■■ a idade média dos homens que já têm experiência no serviço;
    // ■■ a porcentagem dos homens com mais de 45 anos entre o total dos homens;
    // ■■ o número de mulheres com idade inferior a 21 anos e com experiência no serviço;
    // ■■ a menor idade entre as mulheres que já têm experiência no serviço. 

    printf("#### Exercicio 22 ####\n");

    int idade, total_fem = 0, total_masc = 0;
    int soma_idade_masc_exp = 0, qtd_masc_exp = 0;
    int qtd_masc_mais45 = 0;
    int qtd_fem_menor21_exp = 0;
    int menor_idade_fem_exp = -1;

    char sexo, exp;

    while (1) {
        printf("Digite a idade do candidato (0 para encerrar): ");
        scanf("%d", &idade);
        if (idade == 0) break;

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Tem experiência no serviço? (S/N): ");
        scanf(" %c", &exp);

        if (sexo == 'F' || sexo == 'f') {
            total_fem++;
            if (exp == 'S' || exp == 's') {
                if (menor_idade_fem_exp == -1 || idade < menor_idade_fem_exp)
                    menor_idade_fem_exp = idade;
                if (idade < 21)
                    qtd_fem_menor21_exp++;
            }
        } else if (sexo == 'M' || sexo == 'm') {
            total_masc++;
            if (idade > 45)
                qtd_masc_mais45++;
            if (exp == 'S' || exp == 's') {
                soma_idade_masc_exp += idade;
                qtd_masc_exp++;
            }
        }
    }

    printf("\nNúmero de candidatas do sexo feminino: %d\n", total_fem);
    printf("Número de candidatos do sexo masculino: %d\n", total_masc);

    if (qtd_masc_exp > 0)
        printf("Idade média dos homens com experiência: %.2f\n", soma_idade_masc_exp / (float)qtd_masc_exp);
    else
        printf("Nenhum homem com experiência informado.\n");

    if (total_masc > 0)
        printf("Porcentagem de homens com mais de 45 anos: %.2f%%\n", (qtd_masc_mais45 * 100.0) / total_masc);
    else
        printf("Nenhum homem informado.\n");

    printf("Número de mulheres com menos de 21 anos e experiência: %d\n", qtd_fem_menor21_exp);

    if (menor_idade_fem_exp != -1)
        printf("Menor idade entre as mulheres com experiência: %d\n", menor_idade_fem_exp);
    else
        printf("Nenhuma mulher com experiência informada.\n");

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

    
}