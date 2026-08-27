#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite o número para descobrir se é positivo, negativo ou zero: ");
    scanf("%d", &num);
    
    if (num > 0){
        printf("O número %d é Positivo!", num);
    }
    else if (num < 0){
        printf("O número %d é Negativo!", num);
    }
    else if(num == 0){
        printf("O número %d é Zero!", num);
    }

    return 0;
}