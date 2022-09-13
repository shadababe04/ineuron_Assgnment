/**
 * @file    main.c
 * @author  shadab 
 * @brief   to swap values of two int variables 
 * @version 0.1
 * @date 2022-09-13
 * 
 */
#include<stdio.h>
int main()
{
    int a,b,s=0;
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swap A: %d B: %d\n",a,b);
    s = a;
    a = b;
    b = s;
    printf("After swap A: %d B: %d",a,b);

    return 0;
}