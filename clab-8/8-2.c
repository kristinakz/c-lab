#include <stdio.h>

double Factorial(int n) {
    if (n <= 1) return 1;
    return (n * Factorial(n - 1));
}

double Counting(int n, int d) {
    return Factorial(n) / (Factorial(d) * Factorial(n - d));
}

int main() {
    double c = Counting(5,2);
    printf("%f - How many dictionaries you need to issue in order to be able to perform directly\n"
           "translations from five languages (Ukrainian, English, German, French, Russian) to any other of them?\n", c);
    return 0;
}