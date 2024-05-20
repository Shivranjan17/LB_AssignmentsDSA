#include<stdio.h>
void DisplayConvert(char CValue)
{
    if (CValue>= 'A' && CValue<='Z')
    {
        
        printf("%c",tolower(CValue)); 
    }
    else if (CValue>='a' && CValue<='z')
    {
       
        printf("%c\n",toupper(CValue));
    }

}
int main(int argc, char **argv)
{
    char cValue ='\0';

    printf("Enter Charaacter \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}

/*================================================================

#include <stdio.h>
#include <ctype.h>
void DislayConvert(char cValue){
  if (islower(cValue)){
    printf ("%c",toupper(cValue));
  }
  else if (isupper(cValue)  ){
    printf ("%c",tolower(cValue));
  }
}
int main (){
  char cValue = '\0';
  printf ("Enter a character : ");
  scanf("%c", &cValue);
  DislayConvert (cValue);
  return 0;
}
*/