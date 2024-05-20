#include<stdio.h>
 int DollartoINR(int iNo)
{
    int iCnt = iNo;
    int iConv =70;
    
    
    iConv = iConv * iCnt;

    
    
}
int main(int argc, char **argv)
{
    int iValue = 0,iRet = 0;
    printf("Enter Number of USd:");
    scanf("%d", &iValue);
    iRet = DollartoINR(iValue);
    printf("Value of INR is %d",iRet );

    return 0;

}