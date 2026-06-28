#include <stdio.h>

int main() {
    printf("Box Pattern:\n");
    int rows=6, cols=8;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
printf("\nHollow Box Pattern:\n");

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= cols; j++) {
            // Print star only on the boundaries
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("* ");
            } else {
                printf("  "); // Print two spaces to match "* "
            }
        }
        printf("\n"); // Move to the next row
    }



    return 0;
}
