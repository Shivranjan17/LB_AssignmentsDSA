#include<stdio.h>
void RangeDisplay(int iNo1,int iNo2)
{
    
    int iCnt= 0;
    for (int iCnt = iNo1;iCnt<=iNo2;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    /*
     int iCnt= iNo1;
    while (iCnt <= iNo2)
    {
        printf("%d ",iCnt);
        iCnt++;
    }
    
    
    */
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter Starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);
    RangeDisplay(iValue1,iValue2);
    return 0;



}