#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
    int i=0,j=0,k = 1;
    char ch = 'a';
    for (i=1;i<=iNo1;i++)
    {
        for (j=1;j<=iNo2;j++)
        {
            if (i%2 == 0){
                
                    printf("%d\t",k++);
                
            }
            else{
                
                    printf("%c\t",ch++);
                
            }
            
        }    
        printf("\n"); 
        ch = 'a';
        k = 1;
              
        
    }
}

int main(int argc, char **argv)
{
    int iValue1=0,iValue2=0;
    printf("Enter number of rows and column :");
    scanf("%d %d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
    return 0;

}

