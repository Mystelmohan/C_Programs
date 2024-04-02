#include<stdio.h>
#include<conio.h>
int main()
{
    int length,i;
    char arr[100];
    printf("Enter the String:");
    gets(arr);
    for(i=0;arr[i]!=0;i++)
    {
        length++;
    }
    printf("The Length of a string is :%d",length);
}
