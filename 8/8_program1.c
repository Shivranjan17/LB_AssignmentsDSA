#include<stdio.h>
#define PI 3.14
double  Circlearea(float fRadius)
{
    double dArea = 0.0;
    

    dArea = PI * fRadius *fRadius;
    return dArea;

}
int main(int argc, char **argv)
{
    float fValue =0.0f;
    double dRet = 0.0;
    printf("Enter a radius value:");
    scanf("%f",&fValue);
    dRet = Circlearea(fValue);
    printf("Area of Circle is :%f",dRet);
    return 0;

}