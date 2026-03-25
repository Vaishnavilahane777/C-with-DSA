#include<stdio.h>

int main()
{
    int arr[6], i;

    printf("Enter 5 elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos;
    printf("\nEnter a position whose element to be deleted:");
    scanf("%d",&pos);
    for(i=pos;i<=5;i++)
    {
      arr[i]=arr[i+1];
    }
    printf("Array after deletion is:\n");
    for(i=0;i<5-1;i++)
    {
       printf("%d\n",arr[i]);
    }
}
