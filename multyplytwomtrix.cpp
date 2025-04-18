 #include <stdio.h>

int main() {
    int matrix1[2][2] = {
        {1, 2},
        {3, 4}
    };
    int matrix2[2][2] = {
        {5, 6},
        {7, 8}
    };
    int result[2][2] = {0};

    // Multiply two matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the resulting matrix
    printf("Product of the matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

