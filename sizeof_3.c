#include<stdio.h>
int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    printf("Size of int: %d bytes\n", sizeof(myInt));
    printf("Size of float: %d bytes\n", sizeof(myFloat));
    printf("Size of double: %d bytes\n", sizeof(myDouble));
    printf("Size of char: %d bytes\n", sizeof(myChar));

    //Incrementation of number
    printf("Increment operator:\n");
    int a=5;
    int b=5;
    printf("a++: %d\n",a++);
    printf("++a: %d\n",++a);
    printf("++b: %d\n",++b);
    return 0;
}