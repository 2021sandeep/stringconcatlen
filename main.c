#include"header.h"
#include<stdio.h>
#include<string.h>
void strconcat(char str1[],char str2[]);
void main()
{
    char str1[40];
    char str2[20];
    printf("enter the string 1:");
    fgets(str1);
    printf("enter the string 2:");
    fgets(str2);
    strconcat(str1,str2);
    printf("\n afterconcat %s :",str1);
    printf("%ld",strlen(str1));

}
