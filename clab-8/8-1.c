#include <stdio.h>

int progression(int n, int q, int b1) {
    if (n <= 1) return b1;
    return b1 + progression(n - 1, q, b1 * q);
}

int main() {
    int r = 1, q = 2;
    printf("Summ of progression : %d", progression(10, q, r));
    return 0;
}