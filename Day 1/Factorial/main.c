#include <stdio.h>

int main()  {
    int i, n, result = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)  {
        result = result * i;  
    }

    printf("%d \n", result);
}