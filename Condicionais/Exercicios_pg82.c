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
}