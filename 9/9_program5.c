#include<stdio.h>
void RangeDisplayRev(int iNo1,int iNo2)
{
    
    int iCnt= 0;
    for (int iCnt = iNo2;iCnt>=iNo1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
   
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter Starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);
    RangeDisplayRev(iValue1,iValue2);
    return 0;



}