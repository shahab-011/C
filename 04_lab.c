// WAP to enter 3 num from user and print greater from it.

#include<stdio.h>

void main(){
    int a,b,c;

    printf("Enter a , b , c\n");
    scanf("%d\n %d\n %d", &a, &b, &c);

    if ((a>b) && (a>c)){
        printf("Greater is : %d\n", a);
    }
    else if ((b>a) && (b>c)){
        printf("Greater is : %d\n", b);
    }
    else if ((c>a) && (c>b)){
        printf("Greater is : %d\n", c);
    }
    
}