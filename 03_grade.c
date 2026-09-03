#include <stdio.h>

int main() {
    int a;
    printf("Enter Your Marks: ");
    scanf("%d", &a);
    switch (a) {
        case 90 ... 100:
            printf("Your Grade is A\n");
            break;
        case 80 ... 89:
            printf("Your Grade is B\n");
            break;
        case 70 ... 79:
            printf("Your Grade is C\n");
            break;
        case 60 ... 69:
            printf("Your Grade is D\n");
            break;
        case 0 ... 59:

            printf("Your Grade is E\n");
            break;  
        default:
            printf("F\n");

    }
    return 0;
}