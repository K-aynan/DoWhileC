#include <stdio.h>
#include <stdlib.h>

int main() {
    int produto, soma = 0, vmedio = 0;

    do {
        printf("Digite um produto): ");
        scanf("%i", &produto);
        soma += produto;
    } while (produto != 5);
    
    vmedio = soma / 5;
    printf("A soma dos numeros digitados e: %i\n", vmedio);

    return 0;
}

