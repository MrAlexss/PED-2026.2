#include <stdio.h>

int main()
{
    int n;
    
    printf("Digite o para verificar sua tabuada: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", i, n, i * n);
    }

    return 0;
}