#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 100

// Function to swap two strings
void swap(char str1[], char str2[]) {
    char temp[MAX_LENGTH];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

// Function to sort names using Bubble Sort
void sortNames(char names[][MAX_LENGTH], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                swap(names[j], names[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    char names[MAX_NAMES][MAX_LENGTH];
    
    // Accept number of names
    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character after scanf
    
    // Accept names from user
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(names[i], MAX_LENGTH, stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Remove trailing newline
    }
    
    // Sort the names
    sortNames(names, n);
    
    // Display sorted names
    printf("\nSorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}
