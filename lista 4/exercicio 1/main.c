#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    switch (idade / 18) {
        case 0:
            printf("Menor de idade\n");
            break;
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Maior de idade\n");
            break;
        default:
            printf("Idoso\n");
            break;
    }
    
    return 0;
}

