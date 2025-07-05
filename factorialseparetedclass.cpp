      #include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number = 5;
    int result = factorial(number);
    printf("Factorial of %d is: %d\n", number, result);
    return 0;
}

