#include<stdio.h>         // #include is a pre processor directive that tells the compiler to include the contents of the stdio.h header file, which contains declarations for input/output functions like printf and scanf.

int main() 
{
    int fact=1, n;
    printf("Enter a number whose factorial is needed: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
    fact=fact*i;
    }
    printf("Factorial of number is: %d",fact);
}
