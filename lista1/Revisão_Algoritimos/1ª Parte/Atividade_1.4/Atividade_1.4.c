#include <stdio.h>
#include <math.h>

int main()
{
    float raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = M_PI * raio * raio;
    printf("A área do circulo é: %.2f", area);

    return 0;
}