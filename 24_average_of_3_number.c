#include <stdio.h>
float average( int , int , int );

float average( int a, int b , int c){
return (a+b+c)/3.0;    
}

int main() {
    float d = average(10,20,30);
    printf("The average is %.2f\n",d);
    
    return 0;
}