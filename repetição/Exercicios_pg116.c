#include <stdio.h>

// Exercícios da pagina 116

int main () {

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

    // Exercício 2
    // Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E, conforme a
    // fórmula a seguir:
    // E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

    printf("#### Exercicio 2 ####\n");
    int N;
    double E = 1.0, fatorial = 1.0;

    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        fatorial *= i;
        E += 1.0 / fatorial;
    }

    printf("O valor de E é: %.6lf\n", E);

    // Exercício 3
    // Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
    // lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor.

    printf("#### Exercicio 3 ####\n");
    int M;
    printf("Digite um numero inteiro e positivo para N: ");
    scanf("%d", &M);

    for (int i = 1; i <= M; i++) {
        int valor;
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &valor);

        // Calcular o fatorial
        int fatorial = 1;
        for (int j = 1; j <= valor; j++) {
            fatorial *= j;
        }

        printf("Valor lido: %d | Fatorial: %d\n", valor, fatorial);
    }

    // Exercício 4
    // Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
    // Foram obtidos os seguintes dados:
    // a) código da cidade;
    // b) número de veículos de passeio;
    // c) número de acidentes de trânsito com vítimas.
    // Deseja-se saber:
    // a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
    // b) qual é a média de veículos nas cinco cidades juntas;
    // c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio. 

    printf("#### Exercicio 4 ####\n");

    int codigo, veiculos, acidentes;
    int maior_indice = -1, menor_indice = -1;
    int cidade_maior = 0, cidade_menor = 0;
    int soma_veiculos = 0;
    int soma_acidentes_menor2000 = 0, cidades_menor2000 = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Cidade %d:\n", i);
        printf("Digite o código da cidade: ");
        scanf("%d", &codigo);
        printf("Digite o número de veículos de passeio: ");
        scanf("%d", &veiculos);
        printf("Digite o número de acidentes com vítimas: ");
        scanf("%d", &acidentes);

        // a) Maior e menor índice de acidentes e cidades correspondentes
        if (i == 1) {
            maior_indice = acidentes;
            menor_indice = acidentes;
            cidade_maior = codigo;
            cidade_menor = codigo;
        } else {
            if (acidentes > maior_indice) {
                maior_indice = acidentes;
                cidade_maior = codigo;
            }
            if (acidentes < menor_indice) {
                menor_indice = acidentes;
                cidade_menor = codigo;
            }
        }

        // b) Soma de veículos
        soma_veiculos += veiculos;

        // c) Soma acidentes e contagem de cidades com menos de 2000 veículos
        if (veiculos < 2000) {
            soma_acidentes_menor2000 += acidentes;
            cidades_menor2000++;
        }
    }

    printf("Maior índice de acidentes: %d (Cidade %d)\n", maior_indice, cidade_maior);
    printf("Menor índice de acidentes: %d (Cidade %d)\n", menor_indice, cidade_menor);
    printf("Média de veículos nas cinco cidades: %.2f\n", soma_veiculos / 5.0);
    if (cidades_menor2000 > 0) {
        printf("Média de acidentes nas cidades com menos de 2000 veículos: %.2f\n",
               soma_acidentes_menor2000 / (float)cidades_menor2000);
    } else {
        printf("Nenhuma cidade com menos de 2000 veículos de passeio.\n");
    }

    // Execício 5
    // Faça um programa que leia o número de termos e um valor positivo para X. Calcule e mostre o valor
    // da série a seguir:
    // S = -X^2/1! +X^3/2! –X^4/3! +X^5/4! -X^6/3! +X^7/2! -X^8/1! +X^9/2! -X^10/3! +X^11/4! -...

    printf("#### Exercicio 5 ####\n");

    int termos;
    double X, S = 0.0;

    printf("Digite o número de termos: ");
    scanf("%d", &termos);

    printf("Digite o valor de X (positivo): ");
    scanf("%lf", &X);

    int sinal = -1; // Começa negativo
    int fatorial_base = 1;
    int fatorial = 1;

    for (int n = 2; n < 2 + termos; n++) {
        // Determina o fatorial base conforme o padrão da série
        if ((n - 2) % 4 == 0) fatorial_base = 1;
        else if ((n - 2) % 4 == 1) fatorial_base = 2;
        else if ((n - 2) % 4 == 2) fatorial_base = 3;
        else fatorial_base = 4;

        // Calcula o fatorial
        fatorial = 1;
        for (int j = 1; j <= fatorial_base; j++) {
            fatorial *= j;
        }

        double termo = sinal * pow(X, n) / fatorial;
        S += termo;
        sinal *= -1; // alterna o sinal
    }

    printf("O valor da série S é: %.6lf\n", S);

    // Exercício 7
    // Faça um programa que monte os oito primeiros termos da sequência de Fibonacci.

    int fib[8];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 8; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Os oito primeiros termos da sequência de Fibonacci são:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}