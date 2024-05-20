#include<stdio.h>
#include<stdbool.h>

#define True 1
#define False 0
bool CheckZero(int iNo)
{
    int iDigit = 0;
      while(iNo!=0)
    {
        iDigit = iNo %10;
        
        iNo = iNo/10;
        if (iDigit == 0 )
        {
            return 1;
        }
        else 
        {
            return 0;
        }

    }
}
int main(int argc, char *argv[])
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter Number ");
    scanf("%d", &iValue);
    bRet = CheckZero(iValue);
    if (bRet == True)
    {
        printf("It contains 0");

    }
    else 
    {
        printf("It does not contain 0");
    }
    return 0;

}