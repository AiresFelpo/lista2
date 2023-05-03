#include <stdio.h>

char validaSexo() {
    char sexo;
    do {
        printf("Informe o sexo do assalariado (M/F): ");
        scanf(" %c", &sexo);
    } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');
    return sexo;
}

float validaSalario() {
    float salario;
    do {
        printf("Informe o salário do assalariado: ");
        scanf("%f", &salario);
    } while (salario <= 1.0);
    return salario;
}

void classificaSalario(float salario, char* classificacao) {
    if (salario > 1400.0) {
        sprintf(classificacao, "Acima do salário mínimo");
    } else if (salario < 1400.0) {
        sprintf(classificacao, "Abaixo do salário mínimo");
    } else {
        sprintf(classificacao, "Igual ao salário mínimo");
    }
}

void mostraClassifica(char sexo, float salario, char* classificacao) {
    char sexo_extenso[20];
    if (sexo == 'M' || sexo == 'm') {
        sprintf(sexo_extenso, "Masculino");
    } else {
        sprintf(sexo_extenso, "Feminino");
    }
    printf("\nSexo: %s\nSalário: R$%.2f\nClassificação: %s\n", sexo_extenso, salario, classificacao);
}

int main() {
    int n, abaixo = 0, acima = 0;
    char sexo;
    float salario;
    char classificacao[50];
    printf("Informe a quantidade de assalariados a serem pesquisados: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nInforme os dados do %dº assalariado:\n", i+1);
        sexo = validaSexo();
        salario = validaSalario();
        classificaSalario(salario, classificacao);
        mostraClassifica(sexo, salario, classificacao);
        if (salario > 1400.0) {
            acima++;
        } else if (salario < 1400.0) {
            abaixo++;
        }
    }
    printf("\nQuantidade de assalariados abaixo do salário mínimo: %d", abaixo);
    printf("\nQuantidade de assalariados acima do salário mínimo: %d\n", acima);
    return 0;
}