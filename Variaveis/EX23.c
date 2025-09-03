#include <stdio.h>
// Exercícios da pagina 49
int main () {
    // Exercício 23
    //Faça um programa que receba um número real, encontre e mostre:
    // a) a parte inteira desse número;
    // b) a parte fracionária desse número;
    // c) o arredondamento desse número. 

    printf("#### Exercicio 23 ####\n");

    float numero;
    printf("Digite um numero real: ");
    scanf("%f", &numero);

    // a) parte inteira
    int parte_inteira = (int)numero;
    printf("A parte inteira e: %d\n", parte_inteira);

    // b) parte fracionaria
    float parte_fracionaria = numero - parte_inteira;
    printf("A parte fracionaria e: %.2f\n", parte_fracionaria);

    // c) arredondamento
    int arredondado = (int)(numero + 0.5);
    printf("O arredondamento e: %d\n", arredondado);

    return 0;
}