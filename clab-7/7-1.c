#include <stdio.h>


int maximalElementOfTheArray(int * array, int n){
    int max = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0 && i != 0){
            if (max < array[i]){
                max = array[i];
            }
        }
    }
    return max;
}
int main(){
    int n = 5;
    int array[] = {13,7,12,13,7};
    printf("\nThe maximum number of matrix that is a multiple of 2 - %d", maximalElementOfTheArray(array, n));
    return 0;
}
