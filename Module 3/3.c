#include <stdio.h>

#define MAX_SIZE 20

int main() {
    int n, count_neg_ones = 0;
    
    // Input matrix size
    printf("Enter the size of the matrix (1-20): ");
    scanf("%d", &n);
    
    if (n < 1 || n > MAX_SIZE) {
        printf("Invalid size! Please enter a value between 1 and 20.\n");
        return 1;
    }
    
    int matrix[MAX_SIZE][MAX_SIZE];
    
    // Fill the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {  // Diagonal elements
                matrix[i][j] = (i + 1) * (i + 1);
            } else if (i < j) {  // Above diagonal
                matrix[i][j] = i + j;
            } else {  // Below diagonal
                matrix[i][j] = i * j;
            }
            
            // Replace with -1 if divisible by 7
            if (matrix[i][j] % 7 == 0) {
                matrix[i][j] = -1;
                count_neg_ones++;
            }
        }
    }
    
    // Print the matrix
    printf("\nGenerated Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Display count of -1 values
    printf("\nNumber of -1 values in the matrix: %d\n", count_neg_ones);
    
    return 0;
}
---
  Here's the C program that generates and fills the `n x n` matrix based on your specified rules:

### Explanation:
1. **Takes user input (`n`)** ensuring it is within the range [1, 20].
2. **Fills the matrix using nested loops**:
   - **Diagonal (`i == j`)** → Square of 1-based index.
   - **Above diagonal (`i < j`)** → Sum of indices `(i + j)`.
   - **Below diagonal (`i > j`)** → Product of indices `(i * j)`.
3. **Replaces values divisible by 7 with `-1`** and keeps count.
4. **Displays the formatted matrix** and the count of `-1` values.

Let me know if you need any modifications! 🚀
