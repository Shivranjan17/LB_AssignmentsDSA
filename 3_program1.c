#include <stdio.h>
void PrintEven(int iNo)
{
    int iCnt = 0;
    if (iNo<=0)
    {
        return ;
    }
   for (iCnt = 1;iCnt <=iNo;iCnt++)
   {
    
    printf("%d ",iCnt*2);
   }
}
int main(int argc, char **argv)
{
    int iValue = 0;
    printf("Enter Number :  \n");
    scanf("%d", &iValue);

    PrintEven(iValue);
    
    return 0;
}