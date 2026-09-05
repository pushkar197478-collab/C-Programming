#include <stdio.h>

int main() {
    int i, j, k;
    int num = 1;   // starting number
    int rows = 4;  // क्योंकि 1+2+3+4 = 10

    for(i = 1; i <= rows; i++) {
        // spaces print करो (left side)
        for(j = 1; j <= rows - i; j++) {
            printf("  ");  // दो spaces
        }

        // numbers print करो (row में i numbers)
        for(k = 1; k <= i; k++) {
            if(num <= 10) {
                printf("%d   ", num);  // number + spaces
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}
