#include <stdio.h>
#include <stdlib.h>
#include <TIME.h>

int getCount(int *array, int colCount) {
    int count = 0;
    for (int i = 0; i < colCount; ++i) {
        if (array[i] < 7) count++;
    }
    return count;
}

int getProductBetweenTwoZeroElements(int *array, int colCount) {
    int product = 1;

    for (int i = 0; i < colCount; ++i) {
        if (array[i] == 0) {
            for (int j = i + 1; j < colCount && array[i] != 0; ++j) {
                product *= array[j];
            }
        }
    }
    if (product == 1) return 0;
    return product;
}

int main() {
    srand((unsigned) time(NULL));
    int n;
    do {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n <= 0);

    int *pArray = (int *) calloc(n, sizeof(int));
    for (int i = 0; i < n; ++i) {
        pArray[i] = -100 + rand() % (100 - -100 + 1);
    }

    printf("Get product between two zero elements: %d", getProductBetweenTwoZeroElements(pArray, n));
    printf("\nNumber of numbers below seven: %d", getCount(pArray, n));
    return 0;
}
