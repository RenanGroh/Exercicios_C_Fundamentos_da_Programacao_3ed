#include <stdio.h>
// Exercício da pagina 146
int main() {
    // Exercício 2
    // Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
    // R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
    // R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
    // escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse preço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
    // máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro. 
    printf("#### Exercicio 2 ####\n");

    double preco, lucro, maior_lucro = -1.0, melhor_preco = 0.0;
    int ingressos, melhor_ingressos = 0;
    const double despesa = 200.0;

    printf("Preço\tIngressos\tLucro\n");
    for (preco = 5.0, ingressos = 120; preco >= 1.0; preco -= 0.5, ingressos += 26) {
        lucro = preco * ingressos - despesa;
        printf("R$ %.2f\t%d\t\tR$ %.2f\n", preco, ingressos, lucro);

        if (lucro > maior_lucro) {
            maior_lucro = lucro;
            melhor_preco = preco;
            melhor_ingressos = ingressos;
        }
    }

    printf("\nLucro máximo esperado: R$ %.2f\n", maior_lucro);
    printf("Preço do ingresso para lucro máximo: R$ %.2f\n", melhor_preco);
    printf("Quantidade de ingressos vendidos para lucro máximo: %d\n", melhor_ingressos);

    return 0;
}