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

    return 0;
}