#include <stdio.h>


// fat(0) -> return 1
// fat(1) -> fat(0) * 1  // 1 * 1
// fat(2) -> fat(1) * 2  // 1 * 2
// fat(3) -> fat(2) * 3  // 2 * 3
// fat(4) -> fat(3) * 4  // 6 * 4
// fat(5) -> fat(4) * 5  // 24 * 5
// fat(6) -> fat(5) * 6  // 120 * 6
// fat(7) -> fat(6) * 7  // 720 * 7


int fat(int n){
    // caso base
    if (n == 0) return 1;

    // caso recursivo
    else {
        return n * fat(n - 1);
    }
}

int main(){

    printf("%d", fat(7));

    return 0;

}