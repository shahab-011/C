// WAP to swap the values of two numbers.

#include<stdio.h>

void main(){
    int a,b,s;

    printf("Enter value of a and b :\n");
    scanf("%d\n %d", &a , &b);

    s=a;
    a=b;
    b=s;

    printf("a = %d\n", a);
    printf("b = %d", b);


}