#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCnt = 0.0;
    dCnt = (fTemp - 32) * (5.0/9.0);
    return dCnt;

    

}
int main(int argc, char **argv)
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter temperature in Fahrenheit");
    scanf("%f", &fValue);

    dRet =FhtoCs(fValue);
    printf("Temperature in Celsi : %f",dRet);
}