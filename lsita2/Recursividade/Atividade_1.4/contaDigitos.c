#include <stdio.h>


// contaDigito(0) -> return 0
// contaDigito(9) -> contaDigito(0) + 1 // 0 + 1
// contaDigito(98) -> contaDigito(9) + 1  // 1 + 1
// contaDigito(987) -> contaDigito(98) + 1  // 2 + 1
// contaDigito(9876) -> contaDigito(987) + 1  // 3 + 1
// contaDigito(98765) -> contaDigito(9876) + 1  // 4 + 1
// contaDigito(987654) -> contaDigito(98765) + 1  // 5 + 1

int contaDigito(int n){
    // caso base
    if (n == 0) return 0;

    // caso recursivo
    else {
        return contaDigito(n / 10) + 1;
    }
}

int main(){

    printf("%d", contaDigito(987654));

    return 0;

}