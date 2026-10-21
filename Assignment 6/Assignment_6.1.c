#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits <= 100)
    {
        fBill = iUnits * 1.0f;
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 1.0f) + ((iUnits - 100) * 2.5f);
    }
    else
    {
        fBill = (100 * 1.0f) + (100 * 2.5f) + ((iUnits - 200) * 4.0f);
    }

    printf("Electricity Bill : %.2f", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units : ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}