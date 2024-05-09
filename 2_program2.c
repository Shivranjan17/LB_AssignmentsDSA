#include <stdio.h>
void Display(int iNo)
{
    int iCnt =0;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    while (iCnt <iNo)
    {
        printf("*");
        iNo--;
    }
}
int main(int argc, char **argv)
{
    int iValue =0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);


}