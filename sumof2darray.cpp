#include <stdio.h>

int main() {
    int array1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int array2[2][3] = {
        {6, 5, 4},
        {3, 2, 1}
    };
    int result[2][3];

    // Calculate the sum of two 2D arrays
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Print the resulting array
    printf("Sum of two 2D arrays:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

