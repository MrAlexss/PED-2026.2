#include <stdio.h>

int main() {

    int num;
    int result = 1;
    int contador = 1;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);

    if (num < 0){
        printf("O número %d não é válido, por favor digite um número não negativo.", num);
    }
    else {
        while (contador <= num){
            result *= contador;
            contador++;
        }
        printf("O resultado do fatorial de %d é: %d", num, result);
    }

    return 0;
}