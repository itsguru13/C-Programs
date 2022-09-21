#include <stdio.h>

void findFact(int,int*);

int main()  {
    int fact, a;
    printf(" Input a number : ");
    scanf("%d",&a);		 

    findFact(a,&fact);
    printf(" The Factorial of %d is : %d \n\n",a,fact);
    return 0;
}

void findFact(int n,int *f) {
    int i;
    *f =1;
    for(i=1;i<=n;i++)
    *f=*f*i;
}