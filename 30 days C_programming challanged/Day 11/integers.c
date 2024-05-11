
#include <stdio.h>

int count_digits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;

    // Ask the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function to count the digits
    int digits = count_digits(number);

    // Print the result
    printf("Number of digits in %d: %d\n", number, digits);

    return 0;
}
