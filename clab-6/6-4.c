#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int mean(int ** array, int n){
    int min = 100;
    if (n > 255) exit(0);
    n = n -1;
    for (int i = 0; 0 < n; i++, --n) {
        for (int j = 0; j < n; ++j) {
            if (min > array[i][j]){
                min = array[i][j];
            }
        }
    }

    return min;
}
int main(){
    int max = 100, min = -100, n = 10;
    srand(time(NULL));
    int ** array = (int**)calloc(n*n, sizeof(int));
    for (int k = 0; k < n; ++k) {
        array[k] = (int*)calloc(n*n, sizeof(int));
    }
    if (array == NULL) {
        return 2;
    }
    for (int j = 0; j < n; j++) {
        printf("\n");
        for (int i = 0; i < n; i++) {
            array[j][i] = min + rand() % (max - min + 1);
            printf("%d ", array[j][i]);
        }
    }
    printf("\nThe smallest number in a two-dimensional matrix, which is located above the side diagonal - %d", mean(array, n));
    return 0;
}
