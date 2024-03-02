// WAP in c to enter a number and check weather they are even or odd;

#include<stdio.h>

void main(){
    int a ;
    printf("Enter number : \n");
    scanf("%d", &a);

    if(a%2 == 0){
        printf("%d is even.\n", a);
    }
    else{
        printf("%d is odd.", a);
    }
}