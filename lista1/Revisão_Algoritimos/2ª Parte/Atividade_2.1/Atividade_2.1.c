#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite o número para descobrir se é par ou ímpar: ");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("O número %d é Par!", num);
    }
    else{
        printf("O número %d é Ímpar!", num);
    }

    return 0;
}