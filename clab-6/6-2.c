#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int minimal(int a, int b) {
    if (a < b) return a;
    return b;
}

int minimalElement(int array[], int n) {
    int min = array[0];
    for (int i = 0; i < n; ++i) {
        min = minimal(min, array[i]);
    }
    return min;
}

int mArray(int array[], int n) {
    int returnedValue = 1;
    for (int i = 0; i < n && array[i] != 0; ++i) {
        returnedValue *= array[i];
    }
    return returnedValue;
}

int main() {
    srand((unsigned) time(0));
    int array[10];
    for (int i = 0; i < 10; ++i) {
        array[i] = -100 + rand() % (100 - -100 + 1);
        printf("[%d]%d ", i, array[i]);
    }

    printf("\nthe number of the minimum element of the array: %d", minimalElement(array, 10));
    printf("\nthe product of the elements of the array located to the first zero element: %d", mArray(array, 10));

    return 0;
}
