#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
    int i = 0, j = 0;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (j>=i)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
                
            }
            


        }
        printf("\n");
    }
} 
int main(int argc, char **argv)
{
    int iValue1 = 0; 
    int iValue2 = 0;
    printf("Enter Number of Rows and Column :");
    scanf("%d%d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}