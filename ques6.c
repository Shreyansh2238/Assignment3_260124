#include<stdio.h>
#include<math.h>

int main(){
    int num,sq,i,a,b,count=0,div,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    sq=num*num;
    for(i=num;i>0;i=i/10)
    {
        count++;
    }
    div=(int)pow(10,count);
    a=sq/div;
    b=sq%div;
    sum=a+b;
    if(num==sum)
    {
        printf("Kaprekar number.\n");
    }
    else
    {
        printf("Not a Kaprekar Number.\n");
    }
    return 0;
}