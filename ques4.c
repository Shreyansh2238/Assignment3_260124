#include<stdio.h>

int main(){
    int x1, y1, x2, y2, x3, y3;
    printf("\nEnter the coordinates of three points (x1, y1), (x2, y2), and (x3, y3):");
    scanf("\n%d%d\n%d%d\n%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        printf("These three points lie on the same straight line\n");
    } else {
        printf("These three points do not lie on the same straight line\n");
    }
    return 0;
}