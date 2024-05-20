#include<stdio.h>
int KMtoMeter(int iNo)
{
    int iCnt = iNo;
    int iConv=0;
    iConv = iCnt *1000;
    return iConv;
    
}
int main(int argc, char **argv)
{
    int iValue =0 ,iRet = 0;
    printf("Enter Distance :");
    scanf("%d",&iValue);
    iRet = KMtoMeter(iValue);
    printf("KM to Meter %d",iRet );
    return 0;

}