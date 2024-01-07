#include <stdio.h>

// Function to concatenate two strings
void concatenateStrings(const char *str1, const char *str2, char *result) {
    int i, j;

    // Copy the first string to the result
    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    // Concatenate the second string to the result
    for (j = 0; str2[j] != '\0'; ++j) {
        result[i + j] = str2[j];
    }

    // Add the null terminator to the end of the concatenated string
    result[i + j] = '\0';
}

int main() {
    // Example strings
    const char str1[] = "Hello, ";
    const char str2[] = "world!";

    // Calculate the length of the concatenated string
    int len = strlen(str1) + strlen(str2);

    // Declare an array to store the concatenated string
    char result[len + 1]; // +1 for the null terminator

    // Call the concatenateStrings function
    concatenateStrings(str1, str2, result);

    // Print the concatenated string
    printf("Concatenated String: %s\n", result);

    return 0;
}
