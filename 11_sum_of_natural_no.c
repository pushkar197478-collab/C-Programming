#include <stdio.h>

int main() {
    int a , b ;
    printf("Enter the no ");
    scanf("%d", &a);
    for(int i = 10; i >=0; i--)
    {
      b = a * i;
      printf("%d\n",b);

    }
    return 0;
}