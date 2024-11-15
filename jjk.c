#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void say(char **words, int count) {
    for (int i = 1; i < count; i++) {
        printf("%s ", words[i]); // Add a space for readability
    }
    printf("\n"); // Move to the next line after output
}

int getWords(char ***words) {
    char input[1000];
    int wordCount = 0;
    char *token;

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin); // Take input including spaces

    // Initialize an array of char pointers
    *words = NULL;

    // Tokenize the input string by spaces and newlines
    token = strtok(input, " \n");
    while (token != NULL) {
        // Reallocate memory for the array of word pointers to add a new word
        *words = realloc(*words, (wordCount + 1) * sizeof(char *));
        
        // Allocate memory for the new word and copy it
        (*words)[wordCount] = malloc(strlen(token) + 1);
        strcpy((*words)[wordCount], token);
        
        wordCount++; // Increment word count
        token = strtok(NULL, " \n"); // Move to the next word
    }

    return wordCount; // Return the total number of words
}

int main() {
    char **words = NULL; // Initialize words
    while (1) {
        int count = getWords(&words);
        
        if (count > 0) {
            if (strcmp(words[0], "say") == 0) {
                say(words, count);
            } else if (strcmp(words[0], "exit") == 0 || strcmp(words[0], "quit") == 0) {
                break; // Exit the loop
            } else {
                printf("not found!\n");
            }
        } else {
            printf("Enter a command first!\n");
        }

        // Free allocated memory for words
        for (int i = 0; i < count; i++) {
            free(words[i]); // Free each word
        }
        free(words); // Free the array of pointers
        words = NULL; // Reset words pointer
    }

    return 0;
}
