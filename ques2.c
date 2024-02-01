#include<stdio.h>

int main(){
    int num1, num2, num3;
    printf("\nEnter three integers: ");
    scanf("\n%d\n%d\n%d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest integer\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest integer\n", num2);
    } else {
        printf("%d is the largest integer\n", num3);
    }
    return 0;
}