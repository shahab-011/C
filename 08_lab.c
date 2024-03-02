// WAP in c to enter number of days and print no of years, month and days.

#include<stdio.h>

void main(){
    int years , months , days;

    printf("Enter number of days :\n");
    scanf("%d", &days);

    years = days/365;
    months = (days%365)/30;
    days = ((days%365)%30);
    
    printf("%d Years %d months %d days.", years , months , days);

}