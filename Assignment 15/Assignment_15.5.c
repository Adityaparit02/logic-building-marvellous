#include<stdio.h>

float Percentage(float fTotal, float fObtained)
{
    float fPer = 0.0;

    if(fTotal == 0)
    {
        return 0.0;
    }

    fPer = (fObtained / fTotal) * 100;

    return fPer;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%f",&fValue1);

    printf("Please enter obtained marks: ");
    scanf("%f",&fValue2);

    fRet = Percentage(fValue1,fValue2);

    printf("Percentage is %f%%\n",fRet);

    return 0;
}