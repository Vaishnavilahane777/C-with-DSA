#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    for (int i=1;i<4;i++)
    {
        printf("*\n");
    }
    for(int j=1;j<5;j++)
    {
        printf("* ");
    }

    printf("\n\n");
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
           {
            if(i==1 ||i==4)
            {
                printf(" * ");
            }
            else
            {
                printf(" ");
            }
        }
}
}
}
