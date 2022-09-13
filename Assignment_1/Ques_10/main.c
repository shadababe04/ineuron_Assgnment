/**
 * @file    main.c
 * @author  shadab
 * @brief   WAP to take date as an input in below given format and convert the date format and     
 *          display the result as given below. 
 *          User Input date format – “DD/MM/YYYY”  (27/11/2022) 
 *          Output format –  
 *          “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022) 
 * @version 0.1
 * @date    2022-09-13
 * 
 */
#include<stdio.h>
int main()
{
    char s[20];
    printf("Enter the date in DD/MM/YYYY");
    scanf("%s",s);
    printf("%s",s);
    return 0;
}