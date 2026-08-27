#include <stdio.h>


// soma(1) -> return 1
// soma(2) -> soma(1) + 2  // 1 + 2
// soma(3) -> soma(2) + 3  // 3 + 3
// soma(4) -> soma(3) + 4  // 6 + 4
// soma(5) -> soma(4) + 5  // 10 + 5
// soma(6) -> soma(5) + 6  // 15 + 6
// soma(7) -> soma(6) + 7  // 21 + 7


int soma(int n){
    // caso base
    if (n == 1) return 1;

    // caso recursivo
    else {
        return soma(n - 1) + n;
    }
}

int main(){

    printf("%d", soma(7));

    return 0;

}