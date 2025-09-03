#include <stdio.h>
// Exercícios da pagina 49
int main () {
    // Exercicio 24
    // Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e
    // mostre a hora digitada apenas em minutos. Lembre-se de que:
    // - para quatro e meia, deve-se digitar 4.30;
    // - os minutos vão de 0 a 59.

    printf("#### Exercicio 24 ####\n");

    float hora;
    printf("Digite a hora (formato 4.30 para quatro e meia): ");
    scanf("%f", &hora);

    int hora_em_minutos = (int)hora * 60 + (int)((hora - (int)hora) * 100);
    printf("A hora em minutos e: %d\n", hora_em_minutos);

    return 0;
}