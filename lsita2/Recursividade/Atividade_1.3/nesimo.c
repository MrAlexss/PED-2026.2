#include <stdio.h>


// nesimo(1) -> return 1
// nesimo(2) -> nesimo(1) * 3  // 1 * 3
// nesimo(3) -> nesimo(2) * 3  // 3 * 3
// nesimo(4) -> nesimo(3) * 3  // 9 * 3
// nesimo(5) -> nesimo(4) * 3  // 27 * 3
// nesimo(6) -> nesimo(5) * 3  // 81 * 3

int nesimo(int n){
    // caso base
    if (n == 1) return 1;

    // caso recursivo
    else {
        return nesimo(n - 1) * 3;
    }
}

int main(){

    printf("%d", nesimo(6));

    return 0;

}