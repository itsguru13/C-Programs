#include <stdio.h>

int main()  {
    int a, b, result;
    char choice;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("(A)ddition, (M)ultiplication, (S)ubtraction, (D)ivision ?");
    scanf("%s", &choice);

    if(choice == "A" || choice == "a")  {
        result = a + b;
    } else if (choice == "M" || choice == "m")  {
        result = a * b;
    } else if (choice == "S" || choice == "s")  {
        result = a - b;
    } else if (choice == "D" || choice == "d") {
        result = a / b;
    }

    printf("Result: %d", result);
    return 0;
}