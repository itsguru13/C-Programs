#include <stdio.h>
#include <stdlib.h>

int main()  {
    int i, n, result = 1;

    printf("Enter a number: ");
    if(scanf("%d", &n)) {
    } else {
        printf("Enter a number!");
        exit(-1);
    }

    for(i=1; i<=n; i++)  {
        result = result * i;  
    }

    printf("%d \n", result);
}
