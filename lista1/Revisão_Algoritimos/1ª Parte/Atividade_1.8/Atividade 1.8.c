#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    printf("Então o valor do primeiro número é: %d e do segundo é: %d !", num1, num2);

    return 0;
}