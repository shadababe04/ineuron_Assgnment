/**
 * @file main.c
 * @author  shadab 
 * @brief   to input a three-digit number and display the sum of the digits. 
 * @version 0.1
 * @date 2022-09-13
 * 
 * 
 */

#include<stdio.h>
int main()
{
    int i,a,sum=0;
    printf("Enter three digit number: ");
    scanf("%d",&a);
    for(i=0;i<3;i++)
    {   int l=(a%10);
        sum=sum + l ;
        a= a/10;
    }
    printf("%d",sum);
    return 0;
}