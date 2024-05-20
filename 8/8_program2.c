#include<stdio.h>
double RectArea(float fNo1,float fNo2)
{
    double darea = 0.0;
    darea = fNo1 * fNo2;
    return darea;
    
}
int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;
    printf("Enter width:");
    scanf("%f",&fValue1);

    printf("Enter height:");
    scanf("%f",&fValue2);

    dRet =RectArea(fValue1,fValue2);
    printf("Area is : %f",dRet);
    return 0;


}