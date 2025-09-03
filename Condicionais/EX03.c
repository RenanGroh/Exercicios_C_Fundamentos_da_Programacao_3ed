#include <stdio.h>
// Exercícios da pagina 62
int main() {
    // Exercício 3
    // Faça um programa que receba dois números e mostre o maior    
    printf("#### Exercicio 3 ####\n");
   
    float num1, num2;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O primeiro numero é maior.\n");
    } else if (num1 < num2) {
        printf("O segundo numero é maior.\n");
    } else {
        printf("Os numeros sao iguais.\n");
    }
    
    return 0;
}