#include <stdio.h>
//using heap sort
void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int heap[],int N,int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left<N && heap[left]>heap[largest])
    {
        largest = left;
    }
    if (right<N && heap[right]>heap[largest])
    {
        largest = right;
    }
    if (largest != i)
    {

        swap(&heap[i],&heap[largest]);
        heapify(heap, N, largest);
    }
}
void heapSort(int heap[],int N)
{
    for (int i=N/2-1;i>=0;i--)
    {
        heapify(heap, N, i);

    }
    for (int i=N-1;i>=0;i--)
    {
        swap(&heap[0], &heap[i]);
        heapify(heap, i, 0);
    }
}
void printArray(int heap[], int N)
{
    for (int i=0;i<N;i++)
    {
       printf("%d ", heap[i]);
    }
    printf("\n");
}
int main()
{
    int i, low, high, mid, n, key;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int N = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, N);
    printf("Sorted array is\n");
    printArray(arr, N);
    printf("Enter value to find:\n");
    scanf("%d", &key);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
        {
            if(arr[mid] < key)
            {
                low = mid + 1;
            }
            else if (arr[mid] == key)
            {
                printf("%d found at location %d\n", key, mid+1);
                break;
            }
            else
            {
                high = mid - 1;
                mid = (low + high)/2;
            }
        }
        if(low > high)
        printf("Not found! %d isn't present in the list\n", key);
        return 0;
}
