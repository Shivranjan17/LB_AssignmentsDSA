#include<stdio.h>

double SquareMeter(int iNo)
{
    double dCnt = iNo;
    double dConv =0.0;
    dConv = iNo * 0.0929;
    return dConv;

    

}
int main(int argc, char **argv)
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter area in square feet");
    scanf("%f", &fValue);

    dRet =SquareMeter(fValue);
    printf("Value in Square Meter : %f",dRet);
}