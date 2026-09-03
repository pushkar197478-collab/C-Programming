#include <stdio.h>

int main() {
    int marks_1 , marks_2 , marks_3 ;
    printf("Enter Your Marks for Subject A: ");
    scanf("%d", &marks_1);
    printf("Enter Your Marks for Subject B: ");
    scanf("%d", &marks_2);
    printf("Enter Your Marks for Subject C: ");
    scanf("%d", &marks_3);
    printf("Your Marks are: %d, %d, %d\n",marks_1,marks_2,marks_3);
    
    if (marks_1 > 33 && marks_2 > 33 && marks_3 > 33) {
        printf("You are pass\n");
    
    } else {
        printf("You are fail\n");
    }   
    
    
    return 0;
}