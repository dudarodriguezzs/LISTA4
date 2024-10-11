#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("Numeros pares entre 1 e %d sao:\n", numero);
    for (i = 2; i <= numero; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

