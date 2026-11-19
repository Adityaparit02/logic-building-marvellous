#include <stdio.h>
#include <stdlib.h>
void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    int iNo = 0;

    for (i = 1 ; i <= iRow ; i++)
    {
        if (i% 2 != 0)
        {
            iNo = 2;
        }
        else
        {
            iNo = 1;
        }

        for (j = 1 ; j <= iCol ; j++)
        {

        printf("%d \t", iNo);
        iNo = iNo+2;

        }
        printf("\n\n");

    }
    
}


int main()
{   
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    EXIT_SUCCESS;
}