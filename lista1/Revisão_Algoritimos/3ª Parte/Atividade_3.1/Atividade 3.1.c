#include <stdio.h>

int main()
{
    int num;
    int i = 0;
    
    printf("Digite o número para fazer a contagem: ");
    scanf("%d", &num);

    while (i <= num) {
        printf("%d\n", i);
        i ++;
    }

    return 0;
}