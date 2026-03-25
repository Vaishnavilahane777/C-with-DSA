#include <stdio.h>
#include <stdlib.h>

int count2=0;
void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int SI=i;
        for(int j=i+1;j<n;j++)
        {
            count2++;
            if(arr[j]<arr[SI])
            {
                SI=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[SI];
        arr[SI]=temp;
    }
}

int main()
{
    int U2[1000],V2[1000],W2[1000];
    int bestcase,worstcase;

    for (int i=0;i<1000;i++)
    {
        U2[i]=i+1;
        V2[i]=1000-i;
        W2[i]=rand()%1000+1;
    }
    count2=0;
    printf("\n\nSorting using selection sort:\n");
    printf("\nArray in ascending order:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", U2[i]);
    }

    selectionSort(U2, 1000);

    printf("\n\nSorted array:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", U2[i]);
    }
      //printf("\nSelection Sort BEST CASE Operations: %d\n", count2);
      bestcase=count2;

      count2=0;
    printf("Array in random order:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", W2[i]);
    }

    selectionSort(W2, 1000);

    printf("\n\nSorted array:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", W2[i]);
    }
    //printf("\nTotal time complexity for AVERAGE CASE in SELECTION SORT is:  %d\n",count2);

      count2=0;
    printf("\n\nArray in descending order:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", V2[i]);
    }

    selectionSort(V2, 1000);

    printf("\n\nSorted array:\n");
    for (int i=0;i<1000;i++)
    {
        printf("%d ", V2[i]);
    }
      //printf("\nSelection Sort WORST CASE Operations: %d\n", count2);
      worstcase=count2;

    if(bestcase==worstcase)
    {
        printf("\n\nSelection sort runs same for ascending array and descending array\n");
    }
    else if(bestcase<worstcase)
    {
        printf("\n\nSelection sort runs FASTER on ascending array.\n");
    }
    else
    {
         printf("\n\nSelection sort runs FASTER on descending array.\n");
    }

    return 0;
}


