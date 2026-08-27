#include <stdio.h>

int main()
{
    float grauC, grauF;
    printf("Digite a temperatura em C° ");
    scanf("%f", &grauC);
    float fator = 9.0/5.0;
    printf("A temperatura é %.0fFº",grauC * fator + 32);

    return 0;
}