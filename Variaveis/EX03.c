#include <stdio.h>
// Exercícios da pagina 36
int main() {
    // Exercício 3.
    // Faça um programa que receba três notas e seus 
    // respectivos pesos,calcule e mostre a média ponderada.

    printf(" #### Exercicio 3: ####\n");
    float nota1, nota2, nota3, peso1, peso2, peso3, media_ponderada;
    printf("Digite tres notas e seus respectivos pesos: ");
    scanf("%f %f %f %f %f %f", &nota1, &peso1, &nota2, &peso2, &nota3, &peso3);
    media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    printf("A media ponderada e: %.2f\n", media_ponderada);

    return 0;
}