#include <stdio.h>

void referencia(int *p, int *q){
    int aux;

    if (*p < *q) {
        aux = *q;
        *q = *p;
        *p = aux;
    }
}

int main()
{
    int p, q;
    
    printf("Digite um número: ");
    scanf("%d", &p);
    printf("Digite outro número: ");
    scanf("%d", &q);

    referencia(&p, &q);

    printf("O maior número é %d e o menor é %d", p, q);
}