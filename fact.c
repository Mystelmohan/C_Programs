#include<stdio.h>
int main(){
    int n,fact=1,i;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
