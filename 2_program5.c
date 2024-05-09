#include <stdio.h>
#include <stdbool.h>
bool CheckEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        printf("The Number is even \n");
        return true;
    }
    else 
    {
        printf("The Number is odd \n");
        return false;
    }

}
int main(int argc, char **argv)
{
    int iValue =0;
    bool bRet = false;

    printf("Enter number \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    
    return 0;


}