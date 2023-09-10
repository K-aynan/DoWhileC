#include <stdio.h>
#include <stdlib.h>

int main() {
    int sexo, totalAlunos = 0, totalHomens = 0, totalMulheres = 0;

    do {
        printf("Digite o sexo do aluno (1 para masculino, 2 para feminino, 0 para sair): ");
        scanf("%i", &sexo);

        if (sexo == 1) {
            totalHomens++;
            totalAlunos++;
        } else if (sexo == 2) {
            totalMulheres++;
            totalAlunos++;
        } else if (sexo != 0) {
            printf("Opcao invalida. Use 1 para masculino, 2 para feminino ou 0 para sair.\n");
        }
    } while (sexo != 0);

    printf("Total de alunos: %i\n", totalAlunos);
    printf("Total de homens: %i\n", totalHomens);
    printf("Total de mulheres: %i\n", totalMulheres);

    return 0;
}

