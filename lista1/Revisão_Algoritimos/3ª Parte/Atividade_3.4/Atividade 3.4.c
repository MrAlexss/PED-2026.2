#include <stdio.h>

int main()
{
    int n;
    int pares = 0;
    
    printf("Digite o número para verificar a contagem de pares: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0){
            pares++;
        }
    }

    printf("A contagem de 1 a %d tem %d números pares.", n, pares);

    return 0;
}