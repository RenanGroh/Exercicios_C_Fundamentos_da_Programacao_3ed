#include <stdio.h>

int main () {

    // Exercicio 1.
    // Faça um programa que receba quatro números inteiros, calcule 
    // e mostre a soma desses números.

    printf(" #### Exercicio 1: ####\n");
    int a, b, c, d, soma;
    printf("Digite quatro numeros inteiros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    soma = a + b + c + d;
    printf("A soma dos numeros e: %d\n", soma);

    // Exercicio 2.
    // Faça um programa que receba três notas,
    // calcule e mostre a média aritmética.

    printf(" #### Exercicio 2: ####\n");
    float nota1, nota2, nota3, media;
    printf("Digite tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("A media das notas e: %.2f\n", media);

    
}