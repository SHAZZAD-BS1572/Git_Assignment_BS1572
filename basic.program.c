// #include <stdio.h>

// int main() {
//     // Print the name
//     printf("Hello, my name is John Doe.\n");

//     return 0;
// }
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 7;
    printf("Fibonacci sequence up to %d terms:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
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
