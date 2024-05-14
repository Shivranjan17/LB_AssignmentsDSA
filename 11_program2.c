#include <stdio.h>
int CountOdd(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iCount = 0;
    for (int iCnt = 1;iCnt <=iNo;iCnt++)
    {
        iDigit = iDigit % 10;
        
        if (iNo % 2 != 0)
        {
            iCount++;
        }
        iNo =iNo /10;
    }
    return iCount ;

}
int main (int argc, char **argv)
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);
    iRet = CountOdd(iValue);
    printf("%d",iRet);

    return 0;

}