#include<stdio.h>

int main()
{
    float r,Area=0;
    printf("Enter the radius: ");
    scanf("%f",&r);
    Area = 3.14f * r * r;
    printf("Area of circle is %.2f having the radius %.2f", Area, r);

}