#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Entered elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    for(i=0;i<n-1;i++)
        for(j=0;j<(n-i-1);j++)
           if(arr[j]>arr[j+1])
           {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
           }
    printf("\nSorted elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
