#include"header.h"
void strconcat(char str1[],char str2[])
{
    int i,j,l=0;
    for(i=0;str1[i]!='\0';i++)
        l++;
    for(i=0;str2[i]!='\0';i++)
    str1[l+i]=str2[i];
    str1[l+i]!='\0';

}
