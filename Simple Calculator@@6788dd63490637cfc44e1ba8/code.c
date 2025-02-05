#include <stdio.h>
int main() {
    int num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d",result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d",result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d", result);
            } else {
                printf("Error");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
