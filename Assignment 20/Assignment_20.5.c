#include <stdio.h>
#include <stdlib.h>
void Pattern(int iRow , int iCol)
{
    int i =0 , j= 0;

    for(j = 1 ; j <=iCol ; j++)
    {
        for ( i = 1 ; i <=iRow ; i++)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
          
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

    Pattern(iValue1,iValue2);
    EXIT_SUCCESS;
}