#include<stdio.h>

int main(){

    int Num,rev_Num;

    printf("Enter the number to reverse: ");

    scanf("%d",&Num);    

    //Calling our function that will repeat itself

    rev_Num=rev_Func(Num);

    printf("\nThe reversed number is :%d",rev_Num);

    return 0;

}

int sum=0,remainder;

rev_Func(int Num){    

    if(Num) {
        remainder=Num%10;

        sum=sum*10+remainder;

        rev_Func(Num/10);
    }
    else
        return sum;

    return sum;
}