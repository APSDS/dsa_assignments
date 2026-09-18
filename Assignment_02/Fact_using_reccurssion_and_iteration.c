#include <stdio.h>

int factorialIteration(int n);
int factorialRecursion(int n);

int main() {
    int num;

    printf("Enter a positive integer ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } 
    else {
        printf("\n--- Results for %d! ---\n", num);
        printf("Using Iteration: %d\n", factorialIteration(num));
        printf("Using Recursion: %d\n", factorialRecursion(num));
    }

    return 0;
}

int factorialIteration(int n) {
    int result = 1;
    
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    return result;
}


int factorialRecursion(int n) {
    
    if (n ==0||n==1) {
        return 1;
    }
    return n * factorialRecursion(n - 1);
}
