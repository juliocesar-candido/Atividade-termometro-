#include <stdio.h>

int main() {
    int opcao;
    float temp, resultado;
    printf("Escolha a conversao:\n1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\n");
    scanf("%d", &opcao);
    if (opcao == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp);
        resultado = (temp * 9 / 5) + 32;
        printf("%.2f C e igual a %.2f F\n", temp, resultado);
    } else if (opcao == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp);
        resultado = (temp - 32) * 5 / 9;
        printf("%.2f F e igual a %.2f C\n", temp, resultado);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}