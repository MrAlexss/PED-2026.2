#include <stdio.h>

int main()
{
    int valor;
    
    printf("Digite o valor em reais: ");
    scanf("%d", &valor);
    
    printf("Calculo da menor quantidade de notas para pagar o valor: \n");
    printf("%d Nota(s) de R$100\n", valor / 100);
    valor = valor % 100;
    printf("%d Nota(s) de R$50\n", valor / 50);
    valor = valor % 50;
    printf("%d Nota(s) de R$20\n", valor / 20);
    valor = valor % 20;
    printf("%d Nota(s) de R$10\n", valor / 10);
    valor = valor % 10;
    printf("%d Nota(s) de R$5\n", valor / 5);
    valor = valor % 5;
    printf("%d Nota(s) de R$2\n", valor / 2);
    valor = valor % 2;
    printf("%d Nota(s) de R$1", valor / 1);

    return 0;
}