#include <stdio.h>

int main(void) {
    double array[3] = {1.0, 2.0, 3.5};
    double array_2[10] = {0.0};

    int i = 0;
    while (i < 3) {
        array_2[i] = array[i];
        i++;
    }

    int j = 0;
    while (j < 10) {
        printf("%lf ", array_2[j]);
        j++;
    }

    printf("\n");

    return 0;
}