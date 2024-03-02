#include<stdio.h>

void main(){
    int x;
    printf("Enter year : \n");
    scanf("%d", &x);

    if (x%400==0){
        printf("%d is a leap year.\n",x);
    }
    else if (x%100==0){
        printf("%d is not a leap year.\n",x);
    }
    else if (x%4==0){
        printf("%d is a leap year.\n",x );
    }
    else {
        printf("%d is not a leap year.",x);
    }

}