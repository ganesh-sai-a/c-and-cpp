#include<stdio.h>
#include<string.h>
int main()
{
{
    char a[25]="Hello",b[25]="Unschool";
    printf("string length of a is :%d \n",strlen(a));
    printf("string length of b is :%d \n",strlen(b));
    if(strcmp(a,b)==0)
    printf("a and b both are same strings \n");
    else if(strcmp(a,b)>0)
    printf("character in a is lexicographically after the character of b\n");
    else
    printf("character in a is lexicographically before the character of b \n");
    printf("string a after strupr() is : %s \n",strupr(a));
    printf("string b after strupr() is : %s \n",strupr(b));
    printf("string a after strlwr() is : %s \n",strlwr(a));
    printf("string b after strlwr() is : %s \n",strlwr(b));
    printf("string a after strrev() is : %s \n",strrev(a));
    printf("string b after strrev() is : %s \n",strrev(b));
}
{
    char a[25]="Hello",b[25]="Unschool";
    printf("strinf a after strcpy() is : %s \n",strcpy(a,b));
    printf("strinf b after strcpy() is : %s \n",strcpy(a,b));
}
{
    char a[25]="Hello",b[25]="Unschool";
    printf("strinf a after strcpy() is : %s \n",strcpy(b,a));
    printf("strinf b after strcpy() is : %s \n",strcpy(b,a));
}
    return 0;
}
