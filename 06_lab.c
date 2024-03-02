#include<stdio.h>

void main(){
    int x,y;

    printf("Enter x and y\n");
    scanf("%d\n %d", &x, &y);

    x = x+y;
    y = x-y;
    x = x-y;

    printf("x = %d\n", x);
    printf("y = %d", y);
}