#include <stdio.h>

int main() {
    int a ,b ;
    printf("Enter the no\n");
    scanf("%d", &a);
    for(int i = 1; i <=10; i++)
    {
        b= a * i;
        printf( "%d\n",b);        
        
    }
    return 0;
}