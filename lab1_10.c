#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    int n, i, maxIndex = 0;
    struct Student *ptr;
 
    printf("Enter the number of students: ");
    scanf("%d", &n);
    ptr = (struct Student *)malloc(n * sizeof(struct Student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter details of %d students:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &ptr[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", ptr[i].name);

        printf("Enter Marks: ");
        scanf("%f", &ptr[i].marks);
    }

    for (i = 1; i < n; i++)
    {
        if (ptr[i].marks > ptr[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    printf("\nStudent with Highest Marks\n");
    printf("---------------------------\n");
    printf("Roll Number : %d\n", ptr[maxIndex].rollNo);
    printf("Name        : %s\n", ptr[maxIndex].name);
    printf("Marks       : %.2f\n", ptr[maxIndex].marks);

    free(ptr);
    printf("\nMemory has been released successfully.\n");

    return 0;
}