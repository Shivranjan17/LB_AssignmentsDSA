#include<stdio.h>
int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for (int iCnt = 1;iCnt <= iNo ; iCnt++)
    {
        if ((iNo % iCnt )!= 0)
        {
            
            iSum = iSum + iCnt ;
            
        }
       
    }
     return iSum;
}
int main(int argc, char **argv)
{
    int iValue= 0;
    int iRet = 0;
    printf("Enter Numberr : \n");
    scanf("%d", &iValue);
    iRet = SumNonFactors(iValue);
    printf("Sum of All Non Factors : %d\n",iRet );
    return 0;

}