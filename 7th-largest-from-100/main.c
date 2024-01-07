#include <stdio.h>
void sortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[100];
    printf("Enter 100 numbers:\n");
    for (int i = 0; i < 100; i++) {
        scanf("%d", &numbers[i]);
    }
    sortAscending(numbers, 100);
    printf("\nThe seventh largest number is: %d\n", numbers[6]);

    return 0;
}
