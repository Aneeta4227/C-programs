#include<stdio.h>
int main()
{
    int i,n,num,flag=0,first,last,mid;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in ascending order\n");
    for(i=1;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to be searched\n");
    scanf("%d",&num);
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]==num)
        {
            flag=0;
            break;
        }
        else if(arr[mid]<num)
            first=mid+1;
        else
            last=mid-1;
    }
    if(flag==1)
        printf("%d is found in %d position",num,i+1);
    else
        printf("%d is not found");
}
