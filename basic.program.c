// #include <stdio.h>

// int main() {
//     // Print the name
//     printf("Hello, my name is John Doe.\n");

//     return 0;
// }
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
