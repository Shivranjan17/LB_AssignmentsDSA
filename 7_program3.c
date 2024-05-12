#include<stdio.h>
int DisplayFact(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    for (int iCnt =1;iCnt <=iNo ;iCnt++)
    {
        if (iCnt % 2==0)
        {
            
        iEvenFact = iEvenFact * iCnt;
            
            
        }
    }
    return iEvenFact;
}
int main(int argc, char **argv)
{
    int iValue=0,iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = DisplayFact(iValue);
    printf("Even Factorial of number is %d",iRet);
    return 0;

}