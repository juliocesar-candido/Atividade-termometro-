#include <stdio.h>

int main() {
    int n;
    long long fatorial = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial = fatorial * i; 
        }
        
        printf("O fatorial de %d e: %lld\n", n, fatorial);
    }

    return 0;
}