#include <stdio.h>
// Exercício da pagina 146
int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    // Exercício 10
    // Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
    // números primos.

    printf("#### Exercicio 10 ####\n");

    int num, soma_pares = 0, soma_primos = 0;
    
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %do número: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
            soma_pares += num;
        if (eh_primo(num))
            soma_primos += num;
    }

    printf("Soma dos números pares: %d\n", soma_pares);
    printf("Soma dos números primos: %d\n", soma_primos);

    return 0;
}