#include <stdio.h>

int main()
{
    int n, soma, result;
    int i = 1;
    
    printf("Digite a quantidade de números a serem somados: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Digite o número: ");
        scanf("%d", &soma);
        result += soma;
        i ++;
    }

    printf("A soma total dos valores é: %d", result);

    return 0;
}