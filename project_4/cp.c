#include <stdio.h>

int main() {
    int start = 41; // Starting number

    // Outer loop for rows
    for (int i = 1; i <= 5; i++) {
        // Inner loop for printing numbers in each row
        for (int j = 0; j < i; j++) {
            printf("%d ", start + j);
        }
        printf("\n"); // Move to the next line after each row
    }
}