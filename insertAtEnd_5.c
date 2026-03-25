#include<stdio.h>
int main()
{
    int arr[6],i,ele;
    printf("Enter elements of size 6:");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to be added at last:");
    scanf("%d",&ele);
    arr[6]=ele;
    printf("\nArray after adding element at last:\n");
    for(i=0;i<=6;i++)
    {
        printf("%d\n",arr[i]);
    }
}
