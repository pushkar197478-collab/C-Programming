#include <stdio.h>// This code is for lower n like upto 50-100 because this have very large function. 
// Fibonacci series means 0 1 1 2 3 5 ....... means it is the sum of previous two numbers.
// fibonacci(nth term) = fibonacci(n-1)+fibonacci(n-2)
int fibonacci(int);
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    printf("Enter the nth term\t");
    scanf("%d",&n);
    printf("nth element is %d",fibonacci(n));
    return 0;
}