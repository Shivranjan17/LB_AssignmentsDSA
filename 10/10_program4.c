#include<stdio.h>

int  CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
      while(iNo!=0)
    {
        iDigit = iNo %10;
        
        iNo = iNo/10;
        if (iDigit ==4 )
        {
            iCount++;
        }
       

    }
    return iCount;
}
int main(int argc, char *argv[])
{
    int iValue = 0;
    int  iRet = 0;
    printf("Enter Number ");
    scanf("%d", &iValue);
    iRet = CountFour(iValue);
    printf("Count of 4 is : %d",iRet );
    
    
    return 0;

}