#include<stdio.h>

int main()
{
    int arr[6], i;

    printf("Enter 5 elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    // printf("Enter the element to be inserted at first: \n");
    //int element;
    //scanf("%d",&element);
    //for(i=5-1;i>=0;i--)
    //{
      //  arr[i+1]=arr[i];
    //}
    //arr[0]=element;
    //printf("Array after insertion is:\n");
    //for(i=0;i<=5;i++)
    //{
      //  printf("%d\n",arr[i]);
    //}
    int pos,element;

    printf("Enter position (1-6) where element is to be added: ");
    scanf("%d",&pos);

    pos=pos-1;   // convert to index

    // shift elements to right
    for(i=5;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }

    printf("Enter element to be added: ");
    scanf("%d",&element);

    arr[pos]=element;

    printf("Array after insertion is:\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}
