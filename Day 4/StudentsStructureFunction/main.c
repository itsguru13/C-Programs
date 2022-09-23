#include <stdio.h>

struct studentData
{
    char name[25];
    int age;
};

void _display(struct studentData s);

int main()  {
    struct studentData s1;
    printf("Enter student name: ");
    scanf("%s", &s1.name);
    printf("Enter student age: ");
    scanf("%d", &s1.age);
    
    _display(s1);

    return 0;
}

void _display(struct studentData s)  {
    printf("Name of the Student: %s \n", s.name);
    printf("Age of the Student: %d", s.age);
}
