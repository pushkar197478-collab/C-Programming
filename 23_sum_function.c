#include <stdio.h>
int sum (int , int );//Starting int means our output is an number and the int , int inside the bracket means input value is also contain number. 
int sum (int a , int b ){
    printf("The sum is %d\n", a+ b);
    return a + b;

}
int main() {
    sum ( 5,78);
    sum (56 , 87);
    int c = 34;
    int d = 68;
    sum ( c , d);
    int f = sum (36,4);//give the return value of sum function.
    return 0;
}