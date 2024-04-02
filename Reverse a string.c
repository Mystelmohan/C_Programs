#include<stdio.h>

int main()
{   int i,j,n;
    printf("Enter the Size of Array:\n");
    scanf("%d",&n);
    printf("Enter the Elements of a String:\n");
    char arr[n],rev[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",&arr[i]);
    }
    j=n-1;
    for(i=0;i<n;i++)
    {
        rev[i]=arr[j];
        j--;
    }
    printf("The Reverse of a String is:%s",rev);

}
