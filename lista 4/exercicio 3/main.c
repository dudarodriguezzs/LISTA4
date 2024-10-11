#include <stdio.h>

void insertionSort(float arr[], int n) {
    int i, j;
    float key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n, i;

    
    printf("Digite o n�mero de produtos: ");
    scanf("%d", &n);

    float precos[n];

    
    printf("Digite os pre�os dos produtos:\n");
    for (i = 0; i < n; i++) {
        printf("Pre�o %d: ", i + 1);
        scanf("%f", &precos[i]);
    }

    
    insertionSort(precos, n);

    
    printf("\nPre�os ordenados:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", precos[i]);
    }

    return 0;
}

