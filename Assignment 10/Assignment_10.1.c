#include<stdio.h>

double CircleArea(float Radius)
{
    double dArea = 0.0;

    dArea = 3.14 * Radius * Radius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n",dRet);

    return 0;
}