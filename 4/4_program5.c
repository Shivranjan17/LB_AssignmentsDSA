#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;
    for (int iCnt = 1; iCnt <iNo;iCnt++)
    {
        if ((iNo%iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;

        }
        else if ((iNo%iCnt) !=0)
        {
            iSum2 = iSum2 + iCnt;
        }
        

    }
    iDiff = iSum1 - iSum2;
    return iDiff;

}
int main(int argc, char **argv)
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);
    iRet = FactDiff(iValue);
    printf("%d",iRet);
    return 0;

}