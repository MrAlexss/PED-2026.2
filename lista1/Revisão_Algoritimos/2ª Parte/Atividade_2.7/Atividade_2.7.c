#include <stdio.h>

int main()
{
    int l1, l2, l3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &l1);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &l2);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &l3);

    if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2) {

        if (l1 == l2 && l1 == l3) {
            printf("Este é um triângulo Equilátero !");
        }

        else if ( (l1 == l2 && l1 != l3) || (l2 == l3 && l2 != l1) || (l1 == l3 && l1 != l2) ) {
            printf("Este é um triângulo Isósceles !");
        }

        else {
            printf("Este é um triângulo Escaleno !");
        }
    }

    else {
        printf("Não é um triângulo válido.");
    }

    return 0;
}