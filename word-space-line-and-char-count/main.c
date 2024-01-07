#include <stdio.h>

void analyzeFile(FILE *file) {
    int charCount = 0, spaceCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0; // Flag to indicate if currently inside a word
    char c;

    // Read the file character by character
    while ((c = fgetc(file)) != EOF) {
        charCount++;

        // Check for space
        if (c == ' ' || c == '\t' || c == '\n') {
            spaceCount++;

            // If the previous character was part of a word, increment word count
            if (inWord) {
                inWord = 0;
                wordCount++;
            }

            // Check for newline character
            if (c == '\n') {
                lineCount++;
            }
        } else {
            inWord = 1;
        }
    }

    // Check if the last word in the file wasn't followed by space or newline
    if (inWord) {
        wordCount++;
    }

    // Check if the last line in the file wasn't followed by a newline
    if (c != '\n') {
        lineCount++;
    }

    // Output the results
    printf("Total characters: %d\n", charCount);
    printf("Total spaces: %d\n", spaceCount);
    printf("Total words: %d\n", wordCount);
    printf("Total lines: %d\n", lineCount);
}

int main() {
    FILE *file;
    char fileName[100];

    // Input file name
    printf("Enter the file name: ");
    scanf("%s", fileName);

    // Open the file
    file = fopen(fileName, "r");

    // Check if the file exists
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit with an error code
    }

    // Analyze the file
    analyzeFile(file);

    // Close the file
    fclose(file);

    return 0;
}

