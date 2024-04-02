#include<stdio.h>
int fact(int i);
int main()
{
    int i;
    printf("Enter positive integer:");
    scanf("%d",&i);
    printf("The factorial of %d is %d",i,fact(i));
    return 0;
}
int fact(int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
        return i*fact(i-1);
    }
}
