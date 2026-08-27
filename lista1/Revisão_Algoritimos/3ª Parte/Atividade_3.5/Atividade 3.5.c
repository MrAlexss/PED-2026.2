#include <stdio.h>

int main()
{
    int n;
    int primo = 1;
    
    printf("Digite o número para verificar se é um número Primo: ");
    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0){
            primo = 0;
            break;
        }
    }

    if (primo){
        printf("Sim, o número %d é Primo !\n", n);
    }
    else {
        printf("Não, o número %d não é Primo !\n", n);
    }

    return 0;
}