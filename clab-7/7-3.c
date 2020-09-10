#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int **randomArrayGenerate(int colCount, int rowCount, int min, int max) {
    srand((unsigned) time(NULL));
    int **array = (int **) calloc(rowCount * colCount, sizeof(int));
    for (int i = 0; i < rowCount; ++i) {
        array[i] = (int *) calloc(rowCount * colCount, sizeof(int));
    }
    for (int i = 0; i < rowCount; ++i) {
        for (int j = 0; j < colCount; ++j) {
            array[i][j] = min + rand() % (max - min + 1);
        }
    }
    return array;
}

void printArray(int **array, int rowCount, int colCount) {
    for (int i = 0; i < rowCount; ++i) {
        printf("\n");
        for (int j = 0; j < colCount; ++j) {
            printf("%d \t", array[i][j]);
        }
    }
}

int minimal(int a, int b) {
    if (a < b) return a;
    return b;
}

int *getMinArray(int **array, int rowCount, int colCount) {
    int *newArray = (int *) calloc(rowCount, sizeof(int));
    for (int i = 0; i < rowCount; ++i) {
        for (int j = 0; j < colCount; ++j) {
            newArray[i] = minimal(array[i][j], newArray[i]);
        }
    }
    return newArray;
}

int main() {
    int colCount = 7, rowCount = 5;
    int arrayA = randomArrayGenerate(colCount, rowCount, -100, 100);

    printf("\nGenerated A array:");
    printArray(arrayA, rowCount, colCount);

    int * newArray = getMinArray(arrayA, rowCount, colCount);
    printf("\n");
    for (int i = 0; i < rowCount; ++i) {
        printf("\t[%d]%d", i, newArray[i]);
    }
    return 0;
}
