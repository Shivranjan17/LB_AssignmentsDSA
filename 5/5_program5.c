#include<stdio.h>
void DisplayMultiple(int iNo)
{
    int iCnt = 0;
    int iMult =1;
    for (int iCnt = 1; iCnt <=5;iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
       
    }
    return iMult;
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter an integer: ");
    scanf("%d", &iValue);
    DisplayMultiple(iValue);
    return 0;


}