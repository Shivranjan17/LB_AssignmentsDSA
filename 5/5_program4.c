#include<stdio.h>
void DisplayOdd(int iNo)
{
    int iCnt = 0;
    for (int iCnt = 1; iCnt <= iNo;iCnt++)
    {
    if (iCnt % 2 != 0)
    {
        printf("%d ", iCnt);
    }
    }
}
int main(int argc, char **argv)
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d", &iValue);
    DisplayOdd(iValue);

}