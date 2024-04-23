#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is divisible by any integer from 2 to (number - 1)
    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = 0; // If divisible, it's not prime
            break;
        }
    }

    // Check if isPrime flag is still 1
    if (number <= 1) {
        isPrime = 0;
    }

    // Output whether the number is prime or not
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
