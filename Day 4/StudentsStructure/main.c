#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i, n;

    printf("Enter no. of students: ");
    scanf("%d", &n);
    printf("Enter information:\n");

    for (i=0; i<n; i++) {   
        printf("Enter student %d name: ", i+1);
        scanf("%s", &s[i].name);

        printf("Enter student %d roll number: ", i+1);
        if (scanf("%d", &s[i].roll))  {
        } else {
            printf("Error! Not a valid integer");
            exit(-1);
        }

        printf("Enter student %d marks: ", i+1);
        if (scanf("%f", &s[i].marks))  {
        } else {
            printf("Error! Not a valid integer");
            exit(-1);
        }
    }

    printf("Displaying Information:\n");
    for(i=0; i<n; i++)  {
        printf("Student %d Name: ", i+1);
        printf("%s \n", s[i].name);
        printf("Student %d Roll number: %d\n", i+1, s[i].roll);
        printf("Student %d Marks: %.1f\n", i+1, s[i].marks);
    }
    return 0;
}