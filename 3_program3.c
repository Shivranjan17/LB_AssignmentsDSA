#include <stdio.h>
void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    if (iNo<=0)
    {
        iNo = -iNo;
    }
   for (iCnt = 1;iCnt <=iNo/2;iCnt++)
   {
    if ((iNo % iCnt == 0)&&(iCnt % 2==0))
    {
        printf("%d ",iCnt);
       // Call the function recursively to display  factors
    }
    
    
   }
}
int main(int argc, char **argv)
{
    int iValue = 0;
    printf("Enter Number :  \n");
    scanf("%d", &iValue);

    DisplayEvenFactors(iValue);
    
    return 0;
}