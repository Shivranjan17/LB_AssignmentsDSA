#include<stdio.h>
int   Multiply(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    while (iNo!= 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit ;
        iNo = iNo /10;

    }
    return iMult;

}
int main(int argc, char **argv)
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number :");
    scanf("%d", &iValue);
    iRet = Multiply(iValue);
    printf("Multiplication of Digits is :%d",iRet);
    return 0;

}