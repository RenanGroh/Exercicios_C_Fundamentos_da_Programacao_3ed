#include <stdio.h>
// Exercício da pagina 116
int main() {
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

    return 0;
}