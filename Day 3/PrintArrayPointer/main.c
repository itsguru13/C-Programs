#include<stdio.h>

int main() {
    double arr[]={16, -8, 0, -10.01, 11.22};
    double n = sizeof(arr)/sizeof(arr[0]);
    double *p=&arr[0];
    int i;
    for(i=0;i<5;i++)
        printf("%0.2lf ",*(p+i));
        printf("\n");
}