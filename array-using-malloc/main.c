#include <stdio.h>
#include <stdlib.h>

int main() {
    // Number of elements in the array
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array
    int *a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Populate the array with values
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Print the array elements
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(a);

    return 0;
}
