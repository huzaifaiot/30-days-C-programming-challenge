#include <stdio.h>

#define PI 3.14159

// Function to calculate the area of a circle
double calculate_area(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius, area;

    // Ask the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Call the calculate_area function to calculate the area of the circle
    area = calculate_area(radius);

    // Print the area of the circle
    printf("Area of the circle with radius %.2lf: %.2lf\n", radius, area);

    return 0;
}