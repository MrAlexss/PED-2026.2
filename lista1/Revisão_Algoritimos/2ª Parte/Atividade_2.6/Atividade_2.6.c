#include <stdio.h>

int main()
{
    int ano;
    
    printf("Digite um Ano com 4 digitos para saber se ele é bissexto: ");
    scanf("%d", &ano);
    
    if (ano % 4 == 0 && ano % 100 != 0) {
        printf("Sim, o Ano de %d é bissexto !", ano);
    }
    
    else if (ano % 400 == 0) {
        printf("Sim, o Ano de %d é bissexto !", ano);
    }
    
    else{
        printf("Não, o Ano de %d não é bissexto !", ano);
    }
    
    return 0;
}