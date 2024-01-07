#include <stdio.h>

// Define a structure
struct Point {
    int x;
    int y;
};

// Function that takes a structure by reference and modifies it
void modifyPoint(struct Point *point) {
    // Increment the x and y coordinates of the structure
    point->x++;
    point->y++;
}

int main() {
    // Declare and initialize a structure
    struct Point myPoint = {10, 20};

    // Display the original values
    printf("Original Point: x = %d, y = %d\n", myPoint.x, myPoint.y);

    // Call the function with the structure passed by reference
    modifyPoint(&myPoint);

    // Display the modified values
    printf("Modified Point: x = %d, y = %d\n", myPoint.x, myPoint.y);

    return 0;
}
