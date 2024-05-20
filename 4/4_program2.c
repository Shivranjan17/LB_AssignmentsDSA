#include <stdio.h>
int FactRev(int iNo)
{
    int iCnt = 0;
   
    
  
    for (int iCnt =(iNo/2);  iCnt > 0;iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
          printf("%d",iCnt);
         
        }
         
    }
    
}
int main(int argc, char **argv)
{
    int iValue =0;
    
    printf("Enter an integer: \n");
    scanf("%d",&iValue);
    FactRev(iValue);
    
    return 0;

}