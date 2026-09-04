#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Enter the value of x");
    scanf("%f", &x);
    float a = 0.0;
    for (int i; i<=7; i++ )

    {
        
        a += 0.5*pow((x - 1)/x, i);    

    }
    a = a + ((x-1)/x);
    printf("Sum is %f", a );


    return 0;
}