#include <stdio.h>

int main()  {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)   {
        printf("You're eligible to vote!");
    } else {
        age = 18 - age;
        printf("You're eligible to vote after %d year/years!", age);
    }
}