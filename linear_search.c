#include<stdio.h>
int main()
{
    int i,n,num,flag=1;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(i=1;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to be searched\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
        if(arr[i]==num)
        {
            flag=0;
            break;
        }
    if(flag==0)
        printf("%d is found in %d position",num,i+1);
    else
        printf("%d is not found");
}
