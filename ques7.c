#include<stdio.h>

int main(){

    float Marks,classAttn,classHeld,Total;
    printf("Enter marks obtained between 0 and 100:\n");
    scanf("%f",&Marks);
    printf("Enter number of classes attended:\n");
    scanf("%f",&classAttn);
    printf("Enter number of classes conducted necessarily greater than no of classes attended:\n");
    scanf("%f",&classHeld);
    Total=Marks*(classAttn/classHeld);
    if(Total>=90){
        printf("Grade: EX\n");
    }
    else if(Total>=80 && Total<90){
        printf("Grade: A\n");
    }
    else if(Total>=70 && Total<80){
        printf("Grade: B\n");
    }
    else if(Total>=60 && Total<70){
        printf("Grade: C\n");
    }
    else if(Total>=50 && Total<60){
        printf("Grade: D\n");
    }
    else if(Total>=40 && Total<50){
        printf("Grade: P\n");
    }
    else
    {
        printf("Grade: Fail\n");
    }
    return 0;
}