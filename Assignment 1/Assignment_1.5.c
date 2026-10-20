#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 1;

    for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*  ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    iValue =5;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}