#include <stdio.h>

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the maximum
    int max = arr[0];

    // Iterate through the array to find the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum value in the array is: %d\n", max);

    return 0;
}