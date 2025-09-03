#include <stdio.h>
// Exercícios da pagina 51
int main () {
    // Exercício 18
    // Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
    // Fahrenheit. Sabe-se que F = 180*(C + 32)/100.
    printf("#### Exercicio 18 ####\n");

    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = 180 * (celsius + 32) / 100;
    printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);

    return 0;
}