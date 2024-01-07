#include <stdio.h>
#include <stdlib.h>

// Function to find the two largest numbers
void findTwoLargest(int *numbers, int n, int *largest, int *secondLargest) {
    int INT_MIN;
    *largest = *secondLargest = INT_MIN;  // Initialize to smallest possible integer

    for (int i = 0; i < n; i++) {
        if (numbers[i] > *largest) {
            *secondLargest = *largest;
            *largest = numbers[i];
        } else if (numbers[i] > *secondLargest && numbers[i] != *largest) {
            *secondLargest = numbers[i];
        }
    }
}

int main() {
    int n;
    int INT_MIN;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *numbers = (int *)malloc(n * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;  // Exit with an error code
    }

    // Input the elements
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Find the two largest numbers
    int largest, secondLargest;
    findTwoLargest(numbers, n, &largest, &secondLargest);

    // Print the result
    if (largest != INT_MIN && secondLargest != INT_MIN) {
        printf("The two largest numbers are: %d and %d\n", largest, secondLargest);
    } else {
        printf("Insufficient numbers to find two largest numbers.\n");
    }

    // Free dynamically allocated memory
    free(numbers);

    return 0;
}
