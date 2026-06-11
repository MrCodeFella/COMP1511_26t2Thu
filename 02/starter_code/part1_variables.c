// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

// double - decimal values 1.0 2.55555 -100.501
// int - whole numbers 1 100 -100 0
// char - 'a' ')' '/' '\n' ' '
// char my_char;

#define PI 3.14

int main(void) {
    // A = pi * r ^2 
    // 1. Declare the variables
    double area;
    double radius;
    // double pi = 3.14;
    
    // 2. Initalise the variables
    scanf("%lf", &radius);
    
    // 3. Calculate the area of the circle
    area = PI * radius * radius;
    
    // 4. Print the result
    printf("The area is %.2lf\n", area);

    return 0;
}
