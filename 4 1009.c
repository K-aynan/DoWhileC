#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, totalSalarios = 0;
    int totalFuncionarios = 0;

    do {
        printf("Digite o salario do funcionario (digite 0 para sair): ");
        scanf("%f", &salario);

        if (salario != 0) {
            totalSalarios += salario;
            totalFuncionarios++;
        }
    } while (salario != 0);

    if (totalFuncionarios > 0) {
        double mediaSalarial = totalSalarios / totalFuncionarios;
        printf("Total de salarios: %.2f\n", totalSalarios);
        printf("Total de funcionarios: %d\n", totalFuncionarios);
        printf("Media salarial: %.2f\n", mediaSalarial);
    } else {
        printf("Nenhum salario foi informado.\n");
    }

    return 0;
}

