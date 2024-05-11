#include <stdio.h>

int main() {
    int num1 = 10; // 1010 in binary
    int num2 = 5;  // 0101 in binary
    int result;

    // Bitwise AND operation
    result = num1 & num2;
    printf("Bitwise AND of %d and %d: %d\n", num1, num2, result); // Output: 0 (0000)

    // Bitwise OR operation
    result = num1 | num2;
    printf("Bitwise OR of %d and %d: %d\n", num1, num2, result); // Output: 15 (1111)

    // Bitwise XOR operation
    result = num1 ^ num2;
    printf("Bitwise XOR of %d and %d: %d\n", num1, num2, result); // Output: 15 (1111)

    // Bitwise left shift operation
    result = num1 << 1;
    printf("Bitwise left shift of %d by 1: %d\n", num1, result); // Output: 20 (10100)

    // Bitwise right shift operation
    result = num1 >> 1;
    printf("Bitwise right shift of %d by 1: %d\n", num1, result); // Output: 5 (0101)

    return 0;
}