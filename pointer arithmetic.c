#include <stdio.h>
int main()
{
    int a,b,i;
    printf("Enter No.of elements in array: ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter Elements of array\n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int* ptr;
    ptr = arr;
    printf("Enter the maximum address of array for showing Array Elements: ");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        printf("%d ", ptr[0]);
        ptr++;
    }
}
