#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, soma = 0;

    do {
        printf("Digite um numero (digite 0 para sair): ");
        scanf("%i", &numero);
        soma += numero;
    } while (numero != 0);

    printf("A soma dos numeros digitados e: %i\n", soma);

    return 0;
}

