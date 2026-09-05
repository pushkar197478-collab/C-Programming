#include <stdio.h>
float Force();
float Force(){
    int m;
    float a = 9.8;
    printf("Enter the value of Mass\n");
    scanf("%d",&m);
return m*a;
}
int main() 
{
    printf("The value of Force is %.2f N\n",Force());
    return 0;
}