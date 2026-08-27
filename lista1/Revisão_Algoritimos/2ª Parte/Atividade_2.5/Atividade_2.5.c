#include <stdio.h>

int main()
{
    int mes;
    
    printf("Digite o número do mês que deseja saber o nome: ");
    scanf("%d", &mes);
    
    switch (mes) {
        case 1:
        printf("O mês %d é Janeiro!", mes);
        break;
        
        case 2:
        printf("O mês %d é Fevereiro!", mes);
        break;
        
        case 3:
        printf("O mês %d é Março!", mes);
        break;
        
        case 4:
        printf("O mês %d é Abril!", mes);
        break;
        
        case 5:
        printf("O mês %d é Maio!", mes);
        break;
        
        case 6:
        printf("O mês %d é Junho!", mes);
        break;
        
        case 7:
        printf("O mês %d é Julho!", mes);
        break;
        
        case 8:
        printf("O mês %d é Agosto!", mes);
        break;
        
        case 9:
        printf("O mês %d é Setembro!", mes);
        break;
        
        case 10:
        printf("O mês %d é Outubro!", mes);
        break;
        
        case 11:
        printf("O mês %d é Novembro!", mes);
        break;
        
        case 12:
        printf("O mês %d é Dezembro!", mes);
        break;
        
        default:
        printf("O número %d não é um mês válido, por favor digite um número de 1 a 12.", mes);
    }
    
    return 0;
}