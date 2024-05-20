#include<stdio.h.>
void Pattern (int iNo1,int iNo2)
{
    int i = 0,j=0;
    char ch1 ='A';
    char ch2 ='a';
    
    for (i = 1;i<= iNo1;i++)
    {
        for (j = 1;j<=iNo2;j++)
        {
            if (i % 2 == 0)
        {
            printf("%c\t",ch2++);
        }
        else
        {
           printf("%c\t",ch1++);
        }
        
        }
        ch1 ='A';
        ch2='a';

     
        printf("\n");
        
        
    }
}
int main(int argc, char **argv)
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter NO. of Rows :");
    scanf("%d",&iValue1);
    printf("Enter No. of Column :");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;

}
// #include<stdio.h.>
// void Pattern (int iNo1,int iNo2)
// {
//     int i = 0,j=0;
//     char ch1 ='A';
    
    
//     for (i = 1;i<= iNo1;i++)
//     {
//         for (j = 1;j<=iNo2;j++)
//         {
//             printf("%c\t",ch1++);
        
        
//         }
//             if (i % 2 == 0)
//         {
//             ch1 = 'a';
//         }
//         else
//         {
//           ch1 = 'A';
//         }
        
        

     
//         printf("\n");
        
        
//     }
// }
// int main(int argc, char **argv)
// {
//     int iValue1 = 0,iValue2 = 0;
//     printf("Enter NO. of Rows :");
//     scanf("%d",&iValue1);
//     printf("Enter No. of Column :");
//     scanf("%d",&iValue2);
//     Pattern(iValue1,iValue2);
//     return 0;

// }
