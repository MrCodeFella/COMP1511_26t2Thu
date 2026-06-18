#include <stdio.h>

int main(void) {
    int number;
    int number2;
    int ret_val = scanf("%d %d", &number, &number2);
    printf("%d", ret_val);
    // while (scanf("%d", &number) == 1) {
    //     printf("entered number: %d\n", number);
    // }
    
}