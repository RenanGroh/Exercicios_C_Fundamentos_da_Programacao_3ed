#include <stdio.h>
// Exercício da pagina 116
int main() {
    // Exercício 1
    // Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
    // a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
    // b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
    // c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano
    // anterior.
    // Faça um programa que determine o salário atual desse funcionário.

    printf("#### Exercicio 1 ####\n");
    double salario = 1000.0;
    double percentual = 1.5;
    int ano_atual, ano;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    for (ano = 2006; ano <= ano_atual; ano++) {
        salario += salario * (percentual / 100.0);
        if (ano == 2006) {
            percentual *= 2; // Em 2007, dobra o percentual
        } else {
            percentual *= 2;
        }
    }
    printf("Salário atual em %d: R$ %.2lf\n", ano_atual, salario);

    return 0;
}