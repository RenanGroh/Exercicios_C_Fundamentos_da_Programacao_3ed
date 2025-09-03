#include <stdio.h>
// Exercício da pagina 116
int main() {
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

    return 0;
}