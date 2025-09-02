#include <stdio.h>

// Exercícios da pagina 51

int main () {

    // Execício 17
    // Faça um programa que receba o raio, calcule e mostre:
    // a) o comprimento de uma esfera; sabe-se que C = 2 * p R;
    // b) a área de uma esfera; sabe-se que A = p R2;
    // c) o volume de uma esfera; sabe-se que V = ¾ * p R3.

    printf("#### Exercicio 17 ####\n");

    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float pi = 3.14159;

    // a) comprimento
    float comprimento = 2 * pi * raio;
    printf("O comprimento da esfera e: %.2f\n", comprimento);

    // b) area
    float area = pi * raio * raio;
    printf("A area da esfera e: %.2f\n", area);

    // c) volume
    float volume = (4.0/3.0) * pi * raio * raio * raio;
    printf("O volume da esfera e: %.2f\n", volume);

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