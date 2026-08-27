#include <stdio.h>

int main()
{
    float kmPL, kmPerc, valorComb;
    int pessoas;
    
    printf("Quantos Km seu carro percorre com um litro de combustível ? ");
    scanf("%f", &kmPL);
    printf("Quantos Km você vai viajar de carro ? ");
    scanf("%f", &kmPerc);
    printf("Qual valor do combustível, no posto em que você abastece ? ");
    scanf("%f", &valorComb);
    printf("Quantas pessas vão viajar com você no carro ? ");
    scanf("%d", &pessoas);
    
    printf("Dividindo custo da viagem para as %d pessoas que estavam juntas, cada uma deve pagar o valor de R$%.2f.",
    pessoas, (kmPerc / kmPL * valorComb) / pessoas);

    return 0;
}