#include <stdio.h>

int minimal(int a, int b) {
    if (a < b)return a;
    return b;
}


int MinArray(int array[], int n) {
    int min = array[0];
    for (int i = 0; i < n; ++i) {
        min = minimal(min, array[i]);
    }
    return min;
}

int main() {
    int n = 10;
    int array[10] = {1, 6, 9, 3, -3, 2, 5, 7, 95, 10};
    printf("the minimum element of the specified array - %d", MinArray(array, n));
    return 0;
}