#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;

    // Find the sum of diagonal elements
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i]; // Primary diagonal
        sum += matrix[i][3 - 1 - i]; // Secondary diagonal
    }

    // If the matrix is odd-sized, subtract the middle element to avoid double counting
    if (3 % 2 != 0) {
        sum -= matrix[3 / 2][3 / 2];
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}

