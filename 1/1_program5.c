#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <=iNo;iCnt++)
    {
        printf("*\t");
    }

}
int main(int argc, char **argv)
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}