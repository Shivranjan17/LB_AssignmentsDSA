#include<stdio.h>

int  Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
      while(iNo!=0)
    {
        iDigit = iNo %10;
        
        iNo = iNo/10;
        if (iDigit >3 && iDigit<7 )
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
    iRet = Count(iValue);
    printf("Count of number greater than 3 and less than 7 is : %d",iRet );
    
    
    return 0;

}