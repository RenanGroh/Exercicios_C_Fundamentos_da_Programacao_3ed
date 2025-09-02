#include <stdio.h>

// Exercícios da pagina 49

int main() {

    // Exercício 23
    //Faça um programa que receba um número real, encontre e mostre:
    // a) a parte inteira desse número;
    // b) a parte fracionária desse número;
    // c) o arredondamento desse número. 

    printf("#### Exercício 23 ####\n");

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

    // Exercicio 24
    // Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e
    // mostre a hora digitada apenas em minutos. Lembre-se de que:
    // - para quatro e meia, deve-se digitar 4.30;
    // - os minutos vão de 0 a 59.

    printf("#### Exercício 24 ####\n");

    float hora;
    printf("Digite a hora (formato 4.30 para quatro e meia): ");
    scanf("%f", &hora);

    int hora_em_minutos = (int)hora * 60 + (int)((hora - (int)hora) * 100);
    printf("A hora em minutos e: %d\n", hora_em_minutos);

}