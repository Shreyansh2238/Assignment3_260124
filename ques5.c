#include<stdio.h>

int main(){
    int days;
    printf("Enter the number of days by which the member is late:\n");
    scanf("%d", &days);
    if (days >= 1 && days <= 5) {
        printf("The fine to be paid is 1 rupee.\n");
    } else if (days >= 6 && days <= 10) {
        printf("The fine to be paid is 2 rupees.\n");
    } else if (days > 10 && days <= 30) {
        printf("The fine to be paid is 5 rupees.\n");
    } else if (days > 30) {
        printf("Membership cancelled.\n");
    } else {
        printf("No fine. Book returned on time.\n");
    }

    return 0;
}