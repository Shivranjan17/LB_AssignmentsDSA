#include <stdio.h>
void Display(int iNo)
{
    int iCnt =0;
    if (iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }

}



int main()
{
    int iValue;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);




    return 0;

}