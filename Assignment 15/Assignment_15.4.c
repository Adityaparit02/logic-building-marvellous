#include<stdio.h>

int Mult(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        return 0;
    }

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Mult(iValue1,iValue2,iValue3);

    printf("%d\n",iRet);

    return 0;
}