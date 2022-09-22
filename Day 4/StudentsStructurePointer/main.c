#include <stdio.h>
 
struct student{
    char    name[30];
    int     roll;
    float   perc;
};

int main()
{
    struct student  std;        
    struct student  *ptr;       
     
    ptr= &std;                  
     
    printf("Enter details of student: ");
    printf("\nName :");        
    scanf("%s",ptr->name);
    
    printf("Roll No :");       
    if(scanf("%d",&ptr->roll)) {
    } else{
        printf("Error!");
        exit(-1);
    }
    
    printf("Percentage :");    
    if(scanf("%f",&ptr->perc)) {
    } else  {
        printf("Error!");
        exit(-1);
    }
     
    printf("\nEntered details: ");
    printf("\nName:%s \nRollNo: %d \nPercentage: %.02f\n",ptr->name,ptr->roll,ptr->perc);

    return 0;
}