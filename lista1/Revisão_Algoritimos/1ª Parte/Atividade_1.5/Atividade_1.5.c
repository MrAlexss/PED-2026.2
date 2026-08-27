#include <stdio.h>
#include <math.h>

int main()
{
    int seg, horas, min, segC;
    printf("Digite a quantidade de segundos para converter: ");
    scanf("%d", &seg);

    horas = seg / 3600;
    min = (seg % 3600) / 60;
    segC = seg % 60;

    printf("O resultado é %d:%d:%d", horas, min, segC);

    return 0;
}