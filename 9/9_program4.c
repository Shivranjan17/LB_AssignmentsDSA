#include<stdio.h>
int RangeSum(int iNo1,int iNo2)
{
    
    int iCnt =0;
    int iSum = 0;
    if (iNo1>iNo2)
    {
        printf("Invalid Range\n");
    }
    for (iCnt = iNo1;iCnt <=iNo2;iCnt++)
    {
        if (iCnt %2 ==0)
        {
            iSum = iSum + iCnt ;

        }
        
        

    }
    return iSum;



}
int main()
{
    int iValue1 =0,iValue2=0;
    int iRet =0;
    printf("Enter starting point :");
    scanf("%d",&iValue1);
    printf("\nEnter ending point   :");
    scanf("%d",&iValue2);
    iRet = RangeSum(iValue1,iValue2);
   
    printf("Addition is %d",iRet );
    return 0;
}