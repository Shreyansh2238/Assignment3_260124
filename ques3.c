#include<stdio.h>

int main(){
    int a, b, c;
    printf("\nEnter three positive integers:");
    scanf("\n%d\n%d\n%d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        printf("These sides can form a triangle\n");
    } else {
        printf("These sides cannot form a triangle\n");
    }

    return 0;
}