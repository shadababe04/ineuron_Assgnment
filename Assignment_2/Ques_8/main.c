/**
 * @file    main.c
 * @author  shadab (you@domain.com)
 * @brief   to check whether the given number is even or odd using a bitwise operator.
 * @version 0.1
 * @date    2022-09-13
 * 
 */

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if((a&1))
    {
        printf("ODD");
    }
    else
    {
        printf("EVEN");
    }
    return 0;
}
