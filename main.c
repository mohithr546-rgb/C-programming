#include <stdio.h>

int main()
{
    int a, b, result;

    char op;

    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter operator (+, -, %%, *, /) : ");
    scanf("%s", &op);
    printf("Enter second number : ");
    scanf("%d", &b);

    switch (op){
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '%%':
            result = a%b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default:
            printf("Invalid op \n");
            return 0;
    }
    printf("Result = %d\n", result);
    return 0;
}
