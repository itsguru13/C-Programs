#include <stdio.h>

int main()  {
    int a, b, result;
    int choice;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("(1)Addition, (2)Multiplication, (3)Subtraction, (4)Division ?");
    scanf("%d", &choice);

    if(choice == 1)  {
        result = a + b;
    } else if (choice == 2)  {
        result = a * b;
    } else if (choice == 3)  {
        result = a - b;
    } else if (choice == 4) {
        result = a / b;
    }

    printf("Result: %d", result);
    return 0;
}