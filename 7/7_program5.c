#include<stdio.h>
int DisplayFact(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiffFact =0;
    for (int iCnt =1;iCnt <=iNo ;iCnt++)
    {
         if (iCnt % 2==0)
        {
            
        iEvenFact = iEvenFact * iCnt;
            
            
        }
        else if (iCnt % 2!=0)
        {
            
         iOddFact = iOddFact * iCnt;
            
            
        }
        iDiffFact = iEvenFact - iOddFact ;
        
    }
    return iDiffFact;
    
}
int main(int argc, char **argv)
{
    int iValue=0,iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = DisplayFact(iValue);
    printf("Differencr Between Even And Odd Factorial is  %d",iRet);
    return 0;

}