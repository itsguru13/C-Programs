#include <stdio.h>
int addTwoNumbers(long *, long *);
 
int main()
{
   int a, b, sum;

   printf(" Input the first number : ");
   scanf("%d", &a);
   printf(" Input the second  number : ");
   scanf("%d", &b);   
   sum = addTwoNumbers(&a, &b);
   printf(" The sum of %ld and %ld  is %ld\n\n", a, b, sum);
   return 0;
}
int addTwoNumbers(long *n1, long *n2) 
{
   int sum;
   sum = *n1 + *n2;
   return sum;
}