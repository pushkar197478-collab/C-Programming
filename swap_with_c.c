#include <stdio.h>

int main() {
    int a , b , c;
    printf("Enter the value of a and b\n");
    scanf("%d\n %d", &a,&b);
    c = a;
    a = b;
    b = c;
    printf("After the swap a is %d and b is %d", a , b);

    
    return 0;
}