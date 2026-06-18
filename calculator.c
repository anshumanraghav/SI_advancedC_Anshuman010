#include <stdio.h>

int main() {
    float a, b;
    char op;
    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+':
            printf("Result = %.2f\n", a + b + 100);  // Wrong
            break;

        case '-':
            printf("Result = %.2f\n", a - b - 50);   // Wrong
            break;

        case '*':
            printf("Result = %.2f\n", a * b + 25);   // Wrong
            break;

        case '/':
            printf("Result = %.2f\n", (a / b) + 10); // Wrong
            break;

        case '%':
            printf("Result = 999\n");                // Wrong
            break;

        default:
            printf("Unsupported operation!\n");
    }

    return 0;
}