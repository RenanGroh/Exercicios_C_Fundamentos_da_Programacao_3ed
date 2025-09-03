#include <stdio.h>
// Exercício da pagina 116
int main() {
    // Exercício 4
    // Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
    // Foram obtidos os seguintes dados:
    // a) código da cidade;
    // b) número de veículos de passeio;
    // c) número de acidentes de trânsito com vítimas.
    // Deseja-se saber:
    // a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
    // b) qual é a média de veículos nas cinco cidades juntas;
    // c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio. 

    printf("#### Exercicio 4 ####\n");

    int codigo, veiculos, acidentes;
    int maior_indice = -1, menor_indice = -1;
    int cidade_maior = 0, cidade_menor = 0;
    int soma_veiculos = 0;
    int soma_acidentes_menor2000 = 0, cidades_menor2000 = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Cidade %d:\n", i);
        printf("Digite o código da cidade: ");
        scanf("%d", &codigo);
        printf("Digite o número de veículos de passeio: ");
        scanf("%d", &veiculos);
        printf("Digite o número de acidentes com vítimas: ");
        scanf("%d", &acidentes);

        // a) Maior e menor índice de acidentes e cidades correspondentes
        if (i == 1) {
            maior_indice = acidentes;
            menor_indice = acidentes;
            cidade_maior = codigo;
            cidade_menor = codigo;
        } else {
            if (acidentes > maior_indice) {
                maior_indice = acidentes;
                cidade_maior = codigo;
            }
            if (acidentes < menor_indice) {
                menor_indice = acidentes;
                cidade_menor = codigo;
            }
        }

        // b) Soma de veículos
        soma_veiculos += veiculos;

        // c) Soma acidentes e contagem de cidades com menos de 2000 veículos
        if (veiculos < 2000) {
            soma_acidentes_menor2000 += acidentes;
            cidades_menor2000++;
        }
    }

    printf("Maior índice de acidentes: %d (Cidade %d)\n", maior_indice, cidade_maior);
    printf("Menor índice de acidentes: %d (Cidade %d)\n", menor_indice, cidade_menor);
    printf("Média de veículos nas cinco cidades: %.2f\n", soma_veiculos / 5.0);
    if (cidades_menor2000 > 0) {
        printf("Média de acidentes nas cidades com menos de 2000 veículos: %.2f\n",
               soma_acidentes_menor2000 / (float)cidades_menor2000);
    } else {
        printf("Nenhuma cidade com menos de 2000 veículos de passeio.\n");
    }

    return 0;
}