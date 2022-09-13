/**
 * @file main.c
 * @author  shadab 
 * @brief   to find the position of first 1 in LSB.
 * @version 0.1
 * @date 2022-09-13
 */
#include<stdio.h>
int main()
{
    int a,r=0,count=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(r!=1)
    {
        r = a%2;
        count ++;
        a=a/2;
    }
    printf("%d",count);
    return 0;
}