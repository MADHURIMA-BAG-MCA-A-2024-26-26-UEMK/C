#include <stdio.h>
#include <stdlib.h>  // For atoi()

int main(int argc, char *argv[]) {
    // Check if a number is provided as a command-line argument
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    // Convert the input argument from string to integer
    int number = atoi(argv[1]);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Variable to store the factorial result
    long long factorial = 1;

    // Calculate the factorial
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Output the result
    printf("Factorial of %d is: %lld\n", number, factorial);

    return 0;
}

