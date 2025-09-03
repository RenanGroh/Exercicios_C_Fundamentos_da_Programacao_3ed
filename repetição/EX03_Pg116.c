#include <stdio.h>
// Exercício da pagina 116
int main() {
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

    return 0;
}