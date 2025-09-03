#include <stdio.h>
// Exercícios da pagina 62
int main() {
    // Exercício 2
    // Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
    // constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
    // tirar para serem aprovados, considerando que a média exigida é 6,0.
    // 0 - 3 -> Reprovado
    // 3 - 7 -> Exame final
    // 7 - 10 -> Aprovado

    printf("#### Exercicio 2 ####\n");

    float nota1, nota2, nota3, media, nota_exame;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;
    printf("\nMedia: %.2f\n", media);

    if (media < 3.0) {
        printf("Reprovado\n");
    } else if (media < 7.0) {
        printf("Exame final\n");
        nota_exame = 6.0 * 2 - media;
        printf("Para ser aprovado, precisa tirar %.2f no exame.\n", nota_exame);
    } else if (media <= 10.0) {
        printf("Aprovado\n");
    } else {
        printf("Media invalida.\n");
    }

    return 0;
}