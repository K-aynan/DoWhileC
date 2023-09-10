#include <stdio.h>
#include <stdlib.h>

int main() {
	float media;
    int valor, totalValores = 0, soma = 0;

    do {
        printf("Digite um valor (digite um valor negativo para encerrar): ");
        scanf("%d", &valor);

        if (valor >= 0) {
            soma += valor;
            totalValores++;
        }
    } while (valor >= 0);

    if (totalValores > 0) {
        media = soma / totalValores; 
        printf("Total do somatório: %i\n", soma);
        printf("Media: %.2f\n", media); 
        printf("Total de valores lidos: %i\n", totalValores);
    } else {
        printf("Nenhum valor positivo foi lido.\n");
    }

    return 0;
}

