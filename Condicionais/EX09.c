#include <stdio.h>
#include <time.h>

// Exercícios da pagina 68

int main () {

    // Exercício 9
    // Faça um programa que mostre a data e a hora do sistema nos seguintes formatos: DD/MM/AAAA –
    // mês por extenso e hora:minuto.

    printf("#### Exercicio 9 ####\n");

    time_t t = time(NULL);
    struct tm *data = localtime(&t);

    char *meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    printf("Data: %02d/%02d/%04d\n", data->tm_mday, data->tm_mon + 1, data->tm_year + 1900);
    printf("Data (mes por extenso): %02d de %s de %04d\n", data->tm_mday, meses[data->tm_mon], data->tm_year + 1900);
    printf("Hora: %02d:%02d\n", data->tm_hour, data->tm_min);

    return 0;
}