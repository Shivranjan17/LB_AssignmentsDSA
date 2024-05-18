// #include<stdio.h>
// void Pattern(int iNo1,int iNo2)
// {
//     int i=0,j=0;
//     for (i=1;i<=iNo1;i++)
//     {
//         for (j=1;j<=(iNo1+iNo2+2);j++)
//         {
//             if (i%2 == 0){
//                 if(j%2!=0){
//                     printf("%d\t",j);
//                 }
//             }
//             else{
//                 if(j%2==0){
//                     printf("%d\t",j);
//                 }
//             }
            
//         }    
//         printf("\n");       
        
//     }
// }

// int main(int argc, char **argv)
// {
//     int iValue1=0,iValue2=0;
//     printf("Enter number of rows and column :");
//     scanf("%d %d",&iValue1,&iValue2);
//     Pattern(iValue1,iValue2);
//     return 0;

// }

#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
    int i=0,j=0;
    for (i=1;i<=iNo1;i++)
    {
        if (i%2 == 0){
        for (j=1;j<=(iNo1+iNo2+2);j++)
        {
            
                if(j%2!=0){
                    printf("%d\t",j);
                }
            }
        }
            else{
               for (j=1;j<=(iNo1+iNo2+2);j++)
        {
            
                if(j%2==0){
                    printf("%d\t",j);
                }
            }
            }
             printf("\n");  
            
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









