#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(int iMarks, int iAge)
{
    if (iMarks >= 60 && iAge >= 18)
    {
        printf("Eligible for Admission");
    }
    else
    {
        printf("Not Eligible");
    }
}

int main()
{
    int iMarks = 0;
    int iAge = 0;

    printf("Enter marks and age : ");
    scanf("%d %d", &iMarks, &iAge);

    CheckAdmission(iMarks, iAge);

    return EXIT_SUCCESS;
}