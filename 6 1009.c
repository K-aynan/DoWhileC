#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor, maior, menor;

    printf("Digite um valor positivo (ou um valor negativo para encerrar): ");
    scanf("%i", &valor);

    if (valor >= 0) {
        maior = menor = valor;

        do {
            if (valor > maior) {
                maior = valor;
            } else if (valor < menor) {
                menor = valor;
            }

            printf("Digite um valor positivo (ou um valor negativo para encerrar): ");
            scanf("%i", &valor);
        } while (valor >= 0);

        printf("Maior valor informado: %d\n", maior);
        printf("Menor valor informado: %d\n", menor);
    } else {
        printf("Nenhum valor positivo foi informado.\n");
    }

    return 0;
}

