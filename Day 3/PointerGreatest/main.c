#include <stdio.h>

int main()  {
    int *p, *q, a, b;
    p = &a;
    q = &b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if(*p > *q) {
        printf("%d is bigger \n", *p);
    } else if (*p < *q){
        printf("%d is bigger \n", *q);
    } else if (*p == *q)    {
        printf("Equal \n");
    }
    return 0; 
}