
#include <stdio.h>

// Function to calculate the nth term of the Fibonacci sequence
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Ask the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call the function to calculate the nth term of the Fibonacci sequence
    int result = fibonacci(n);

    // Print the result
    printf("The %dth term of the Fibonacci sequence is: %d\n", n, result);

    return 0;
}
