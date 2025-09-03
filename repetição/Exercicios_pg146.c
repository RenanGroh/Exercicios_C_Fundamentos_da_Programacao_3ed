#include <stdio.h>

// Exercícios da pagina 146

void ordenar_crescente(int v[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

void ordenar_decrescente(int v[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (v[j] < v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main () {

    // Exercício 1
    // Faça um programa que leia cinco grupos de quatro valores (A, B, C, D)
    // e mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.
    printf("#### Exercicio 1 ####\n");

    int grupo[4];

    for (int g = 1; g <= 4; g++) {
        printf("\nGrupo %d:\n", g);
        for (int i = 0; i < 4; i++) {
            printf("Digite o valor %c: ", 'A' + i);
            scanf("%d", &grupo[i]);
        }

        // Ordem lida
        printf("Ordem lida: ");
        for (int i = 0; i < 4; i++) {
            printf("%d ", grupo[i]);
        }
        printf("\n");

        // Ordem crescente
        int crescente[4];
        for (int i = 0; i < 4; i++) crescente[i] = grupo[i];
        ordenar_crescente(crescente, 4);
        printf("Ordem crescente: ");
        for (int i = 0; i < 4; i++) {
            printf("%d ", crescente[i]);
        }
        printf("\n");

        // Ordem decrescente
        int decrescente[4];
        for (int i = 0; i < 4; i++) decrescente[i] = grupo[i];
        ordenar_decrescente(decrescente, 4);
        printf("Ordem decrescente: ");
        for (int i = 0; i < 4; i++) {
            printf("%d ", decrescente[i]);
        }
        printf("\n");
    }

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

    // Exercício 5
    // Faça um programa que mostre as tabuadas dos números de 1 a 10.

    printf("#### Exercicio 5 ####\n");

     for (int i = 1; i <= 10; i++) {
        printf("\nTabuada do %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    // Exercício 10
    // Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
    // números primos.

    printf("#### Exercicio 10 ####\n");

    int num, soma_pares = 0, soma_primos = 0;
    
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %do número: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
            soma_pares += num;
        if (eh_primo(num))
            soma_primos += num;
    }

    printf("Soma dos números pares: %d\n", soma_pares);
    printf("Soma dos números primos: %d\n", soma_primos);
}