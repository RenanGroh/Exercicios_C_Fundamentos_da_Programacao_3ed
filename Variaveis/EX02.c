#include <stdio.h>
// Exercícios da pagina 36
int main() {    
    // Exercício 2.
    // Faça um programa que receba três notas,
    // calcule e mostre a média aritmética.

    printf(" #### Exercicio 2: ####\n");
    float nota1, nota2, nota3, media;
    printf("Digite tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("A media das notas e: %.2f\n", media);

    return 0;
}