#include <stdio.h>
// Exercício da pagina 116
int main() {
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
    
    return 0;
}