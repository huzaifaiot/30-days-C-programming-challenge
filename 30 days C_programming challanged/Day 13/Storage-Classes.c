#include <stdio.h>

// Global variable with static storage class
static int static_var = 10;

// Function with extern storage class
extern void extern_func();

int main() {
    // Automatic variable
    auto int auto_var = 20;

    // Register variable
    register int register_var = 30;

    // Static variable inside main function
    static int static_var_main = 40;

    printf("Automatic variable: %d\n", auto_var);
    printf("Register variable: %d\n", register_var);
    printf("Static variable inside main function: %d\n", static_var_main);
    printf("Static variable outside main function: %d\n", static_var);

    // Call function with extern storage class
    extern_func();

    return 0;
}

// Function definition with extern storage class
void extern_func() {
    printf("Extern function called.\n");
}