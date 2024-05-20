#include<stdio.h>
void RangeDisplayEven(int iNo1,int iNo2)
{
    int iCnt = iNo1;
    while (iCnt <= iNo2)
    {
        if (iCnt % 2 ==0)
        {
            printf("%d ",iCnt);
            
        }
        iCnt++;
         
            
    }
    
    
}
int main(int argc, char **argv)
{
    int iValue1 = 0,iValue2 =0;
    printf("Enter starting value: ");
    scanf("%d",&iValue1);

    printf("Enter ending Value :");
    scanf("%d",&iValue2);
    RangeDisplayEven(iValue1,iValue2);
    return 0;

}