#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    char ch = '\0';
    char CH = '\0';

    for (i = 1 ; i <= iRow ; i++)
    {
        ch = 'a';
        CH = 'A';
        for (j = 1 ; j <= iCol ; j++ , ch++ , CH++)
        {
            if (i % 2 == 0 )
                {
                    printf("%c \t", ch);
                }
            else
            {
                printf("%c \t" , CH);
            }
        }
        printf("\n\n");
    }
}


int main()
{
    int iValue1 = 0 , iValue2 = 0 ;
    printf("Enter Number of Rows : ");
    scanf("%d" ,&iValue1);

    printf("Enter Number of Columns : ");
    scanf("%d" ,&iValue2);

    Pattern(iValue1 , iValue2);

    EXIT_SUCCESS;
}