#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = iNo; iCnt >=1;iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
}
int main(int argc, char **argv)
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);
    Display(iValue );
    return 0;

}