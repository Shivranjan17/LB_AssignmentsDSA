#include<stdio.h>
int DisplayFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for (int iCnt =1;iCnt <=iNo ;iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main(int argc, char **argv)
{
    int iValue=0,iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = DisplayFact(iValue);
    printf("Factorial of number is %d",iRet);

}