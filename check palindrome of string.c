#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    printf("Enter the Size of Array:\n");
    scanf("%d",&n);
    printf("Enter the Elements of a String:\n");
    char arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",&arr[i]);
    }
    int l=0;
    int h=strlen(arr)-1;
    while (h>l)
    {
        if (arr[l++] != arr[h--])
        {
            printf("%s is not a palindrome\n",arr);
            return 0;
        }
    }
    printf("%s is a palindrome\n",arr);
    return 0;
}
