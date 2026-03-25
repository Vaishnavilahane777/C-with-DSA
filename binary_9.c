#include<stdio.h>
int main()
{
    int left=0,right=4,mid,found=0,key;
    int arr[]={1,2,3,4,5};
    printf("Enter key value to be searched: ");
    scanf("%d",&key);
    for(int i=0;i<5;i++)
    {
        mid=(left+right)/2;
        if(arr[mid]==key)
        {
            found=1;
            break;
        }
        else if(arr[mid]<key)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    if(found==1)
    {
        printf("Element found ");
    }
}
