//
//  main.c
//  Griet
//Fibonacci Series using Recursion
#include<stdio.h>
int fib(int n)
{
    if (n <= 1)
    return n;
    return fib(n-1) + fib(n-2);
}

int main ()
{
    int n;
    printf("Enter the input");
    scanf("%d",&n);
    printf("%d", fib(n));
    getchar();
    return 0;
}
