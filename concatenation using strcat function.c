1) strcat function

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50] = "Programming ";
    char str2[] = "In C";
    strcat(str1,str2);
    printf("\n str1 = %s",str1);
}
