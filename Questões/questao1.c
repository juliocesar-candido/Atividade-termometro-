#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n"); 
    return 0;
}