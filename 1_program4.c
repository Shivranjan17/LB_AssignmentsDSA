#include<stdio.h>
#include<stdbool.h>

int  Check(int iNo)
{
    if ((iNo%5)==0)
    {
        return true;
    }
    else{
        return false;
    }


}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter an integer: \n");
    scanf("%d", &iValue);

    bRet = Check(iValue);
    if (bRet == true) 
    {
        printf("Number is Divisible by 5 \n");

    }
    else 
    {
        printf("Number is not Divisible by 5 \n");
    }
    return 0;
}