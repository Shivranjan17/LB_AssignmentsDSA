#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
    int i = 0,j = 0 ;
    int k = 1;
    
    for (i= 1;i<=iNo1;i++)
    {
        for (j = 1;j<=iNo2;j++)
        {
                printf("%d\t ",k++);/* code */
                if (k>9)
                {
                    k=1;
                }
            
        }
        
        printf("\n");
    }
    
}
int main(int argc, char **argv)
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0;
    printf("Enter number of rows and column :");
    scanf("%d %d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
    return 0;



}