#include <stdio.h>

int main() {
    // Create a 2D array (3x3)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Access elements in the 2D array
    printf("Element at [0][0]: %d\n", matrix[0][0]);
    printf("Element at [1][2]: %d\n", matrix[1][2]);
    printf("Element at [2][1]: %d\n", matrix[2][1]);

    return 0;
}

