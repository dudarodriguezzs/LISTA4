#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int buscaBinaria(int arr[], int n, int valor) {
    int inicio = 0, fim = n - 1, meio;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (arr[meio] == valor)
            return meio;
        if (arr[meio] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}

int main() {
    int n, i, valor, resultado;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    int arr[n];

    printf("Digite os elementos:\n");
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Digite o valor a ser pesquisado: ");
    scanf("%d", &valor);

    resultado = buscaBinaria(arr, n, valor);

    if (resultado != -1)
        printf("Valor encontrado na posição: %d\n", resultado);
    else
        printf("Valor não encontrado.\n");

    return 0;
}


