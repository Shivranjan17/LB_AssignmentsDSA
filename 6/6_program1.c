#include<stdio.h>
void Number(int iNo)
{
    
    if (iNo <50)
    {
    printf("The number is less than 50 \n");
    }
    else if(iNo>50 && iNo <100)
    {
       printf("The number is Medium \n"); 
    }
    
    else if(iNo>100)
    {
        printf("The number is greater than 100 \n");
    }
    

}
int main(int argc, char **argv)
{
    int iValue = 0;
    printf("Enter an integer: ");
    scanf("%d", &iValue);
    Number(iValue);
    
    
    return 0;
}