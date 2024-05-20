#include<stdio.h>
void Pattern(int iNo1,int iNo2 )
{
    int i = 0;int j = 0;
    char iChar= 'A';
    for (int i= 1;i <= iNo1;i++)
    {
        for (j =1;j<=iNo2;j++)
        {
            printf("%c\t",iChar++);
            
        }
        printf("\n");
        iChar = 'A';
    }

}
int main(int argc, char **argv)
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter Number of Rows :");
    scanf("%d",&iValue1);
    printf("Enter Number of Columns :");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;

}