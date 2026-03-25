#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int ele;
    int found=0;

    printf("Enter element to be searched: ");
    scanf("%d",&ele);
    for(int i=0;i<5;i++)
    {
        if(arr[i]==element)
        {
            found=1;
        }
    }

    printf("Element %d occurs %d times\n", element, count);

    return 0;
}
