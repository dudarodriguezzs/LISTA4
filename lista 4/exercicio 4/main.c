#include <stdio.h>

void selectionSort(float arr[], int n) {
    int i, j, max_idx;
    float temp;
    
    for (i = 0; i < n-1; i++) {
        
        max_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        
        temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n, i;

    
    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    float notas[n];

   
    printf("Digite as notas dos alunos:\n");
    for (i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    
    selectionSort(notas, n);

    printf("\nNotas ordenadas em ordem decrescente:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }

    return 0;
}

    
