#include <stdio.h>
int MultiFactor(int iNo)
{
    int iCnt = 0;
    int iMulti=1;
  
    for (int iCnt = 1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }
    return iMulti;
}
int main(int argc, char **argv)
{
    int iValue =0;
    int iRet = 0;
    printf("Enter an integer: \n");
    scanf("%d",&iValue);
    iRet = MultiFactor(iValue);
    printf("%d",iRet);
    return 0;

}