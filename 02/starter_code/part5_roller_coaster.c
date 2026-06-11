// part5_roller_coaster
//
// This program was written by Conrad Vernon, z5478184
// on 11/6/2026
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they are not tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define MIN_HEIGHT 100
#define RIDE_ALONE 160

int main(void) {
    double height;
    scanf("%lf", &height);

    if (height <= 0) {
        printf("invalid height\n");
    } else if (height < MIN_HEIGHT) {
        printf("too short :(\n");
    } else if (height < RIDE_ALONE) {
        printf("ride with adult\n");
    } else {
        printf("you may ride alone\n");
    }

    return 0;
}
