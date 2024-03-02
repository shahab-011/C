// WAP to compute perimeter and area of rectangle with height 7 inch and width 5 inch.

#include<stdio.h>

void main(){
    int height = 7 , width = 5 , area , perimeter;
    
    area = height * width;
    perimeter = 2*(height+width);

    printf("Area of rectangle : %d\n" , area);
    printf("Perimeter of rectangle : %d" , perimeter);
    

}