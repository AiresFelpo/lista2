#include <stdio.h>

int validaQuantidade(int qtdPecas) {
    if (qtdPecas >= 0) {
        return 1;
    } else {
        return 0;
    }
}

float calculaSalario(int qtdPecas) {
    float salarioBase = 600.0;
    float adicional = 0.0;

    if (qtdPecas > 50 && qtdPecas <= 80) {
        adicional = (qtdPecas - 50) * 0.5;
    } else if (qtdPecas > 80) {
        adicional = 30 * 0.5 + (qtdPecas - 80) * 0.75;
    }

    return salarioBase + adicional;
}

void mostraFinal(int qtdFuncionarios, float salarios[]) {
    printf("\nResultado final:\n");
    for (int i = 0; i < qtdFuncionarios; i++) {
        printf("Funcionário %d - Salário: R$ %.2f\n", i+1, salarios[i]);
    }
}

int main() {
    int qtdFuncionarios = 0;
    printf("Informe a quantidade de funcionários: ");
    scanf("%d", &qtdFuncionarios);

    int qtdPecas = 0;
    float salarios[qtdFuncionarios];

    for (int i = 0; i < qtdFuncionarios; i++) {
        printf("\nFuncionário %d\n", i+1);

        do {
            printf("Informe a quantidade de peças fabricadas: ");
            scanf("%d", &qtdPecas);
        } while (!validaQuantidade(qtdPecas));

        salarios[i] = calculaSalario(qtdPecas);
    }

    mostraFinal(qtdFuncionarios, salarios);

    return 0;
}