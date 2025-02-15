#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    // Find the sum of even numbers
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            sum += numbers[i];
        }
    }

    printf("Sum of even numbers: %d\n", sum);

    return 0;
}

