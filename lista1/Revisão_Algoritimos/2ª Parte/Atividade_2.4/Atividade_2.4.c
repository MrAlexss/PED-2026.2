#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite a sua idade para saber sua classificação: ");
    scanf("%d", &idade);
    
    if (idade >= 0 && idade < 12){
        printf("Você é uma criança!");
    }
    else if (idade >= 12 && idade < 18){
        printf("Você é um adolescente");
    }
    else {
        printf("Você é um adulto!");
    }

    return 0;
}