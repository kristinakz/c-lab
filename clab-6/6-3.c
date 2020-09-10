#include <stdio.h>
#include <math.h>
#include <time.h>

int findTheMinimalElement(int array[]) {
    int min = 100;
    for (int i = 0; i < 100; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int * swap(int array[]){
    int min = findTheMinimalElement(array);
    for (int i = 0; i<100; i++){
        if (min == array[i]){
            array[i] = array[99];
            array[99] = min;
            printf("\n%d and %d swapped.\n", array[i], array[99]);
            break;
        }
    }
    return array;
}
int main() {
    int max = 100, min = -100;
    srand((unsigned )time(NULL));
    int array[100];
    for (int i = 0; i < 100; i++) {
        array[i] = min + rand() % (max - min + 1);
    }
    int * newArray = swap(array);
    return 0;
}
