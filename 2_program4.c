#include <stdio.h>

void Display (int iNo,int iFrequency)
{
    int iCnt =0;
    if (iFrequency <0)
    {
        iFrequency = - iFrequency;

    }
    for (iCnt = 1;iCnt <=iFrequency;iCnt++)
    {
        printf("%d\t ",iNo);
    }

}
int main(int argc, char **argv)
{
    int iValue =0,iCount=0;
    printf("Enter Number that you want to Print : \n");
    scanf("%d",&iValue);

     printf("Enter Number how many times u want to print that number  : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

}