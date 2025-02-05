#include <stdio.h>
int main() {
    int num1, num2, result;
    char operator;
    scanf("%d", &num1);
    scanf("%d", &num2);
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
