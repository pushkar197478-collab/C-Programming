#include <stdio.h>

int main()
{
    int a, c;
    printf("Enter the Numeber\n");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        c = a * i;
        printf("%d * %d = %d\n", a, i, c);
    }
    return 0;
}