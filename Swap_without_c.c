#include <stdio.h>

int main() {
    int a, b , c;
    printf("Enter the no a and b:\n");
    scanf("%d\n %d",&a , &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}