#include<stdio.h>
void Pattern(int iRow ,int iColm)
{
    int i = 0, j = 0,k=1;
    for (i = 1;i<=iRow ;i++) 
    {
        
        for (j = 1;j<= iColm ;j++)
        {
            printf("%d\t",k++);

        }
        printf("\n");
    }
}
int main(int argc, char **argv)
{
    int iValue1=0,iValue2 =0;
    printf("Enter No of Rows:" );
    scanf("%d",&iValue1);
    printf("Enter number of column :");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;

}