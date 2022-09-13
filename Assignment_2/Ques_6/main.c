/**
 * @file main.c
 * @author  shadab 
 * @brief   which takes a character as an input and displays its ASCII code. 
 * @version 0.1
 * @date 2022-09-13
 * 
 */
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    printf("ASCII Code: %d",c);
    return 0;
}