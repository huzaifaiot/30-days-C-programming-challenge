#include <stdio.h>

// Function to check whether a number is prime or not
int is_prime(int num) {
    // If the number is less than 2, it's not prime
    if (num < 2) {
        return 0;
    }
    
    // Check if the number is divisible by any integer from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If divisible, it's not prime
        }
    }
    
    return 1; // If not divisible by any number, it's prime
}

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the is_prime function to check if the number is prime
    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}