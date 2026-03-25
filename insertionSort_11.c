#include <stdio.h>
#include <stdlib.h>
int count1=0;

void insertionSort1(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;

        while(j>=0&&arr[j]>key)
        {
            count1++;
            arr[j+1]=arr[j];
            j--;
        }
        count1++;
        arr[j+1]=key;
    }
}

void insertionSort2(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;

        while(j>=0&&arr[j]>key)
        {
            count1++;
            arr[j+1]=arr[j];
            j--;
        }
        //count1++;
        arr[j+1]=key;
    }
}

int main()
{
    int U1[1000],V1[1000],W1[1000];
    int bestcase,worstcase;

    for (int i=0;i<1000;i++)
    {
        U1[i]=i+1;
        V1[i]=1000-i;
        W1[i]=rand()%1000+1;
    }
//insertion sort
count1=0;
printf("\n\nSorting using insertion sort:\n");
    printf("Array in ascending order:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", U1[i]);
    }

    insertionSort1(U1, 1000);

    printf("\n\nSorted array:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", U1[i]);
    }
    //printf("\nTotal time complexity for BEST CASE in INSERTION SORT is:  %d\n",count1);
    bestcase=count1;

    count1=0;
    printf("\n\nArray in random order:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", W1[i]);
    }

    insertionSort1(W1, 1000);

    printf("\n\nSorted array:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", W1[i]);
    }
    //printf("\nTotal time complexity for AVERAGE CASE in INSERTION SORT is:  %d\n",count1);

    count1=0;
    printf("\n\nArray in descending order:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", V1[i]);
    }

    insertionSort2(V1, 1000);

    printf("\n\nSorted array:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", V1[i]);
    }
  //printf("\nTotal time complexity for WORST CASE is:  %d\n",count1);
  worstcase=count1;

  if(bestcase<worstcase)
    {
        printf("\n\nInsertion sort runs FASTER on ascending array.\n");
    }
    else
    {
        printf("\n\nInsertion sort runs FASTER on descending array.\n");
    }

    return 0;
}
