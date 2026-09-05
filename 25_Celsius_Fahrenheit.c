#include <stdio.h>
float C2F(int);
float C2F( int celsius){
    return (celsius * 9.0 / 5.0) + 32.0;
}
int main() {
    printf("The ans is %.2f",C2F(4) );

    return 0;
}