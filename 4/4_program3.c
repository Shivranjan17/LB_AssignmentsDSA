#include<stdio.h>
void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    printf("Non Factors of %d are : \n",iNo);
    for (int iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }

    }
}
int main(int argc, char **argv)
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);
    DisplayNonFactors(iValue);
    return 0;
}