#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (iYears >= 10)
    {
        fBonus = fSalary * 0.10f;
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 0.05f;
    }
    else
    {
        fBonus = 0.0f;
    }

    printf("Bonus = %.2f", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service : ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}