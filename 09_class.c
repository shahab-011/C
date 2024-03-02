// WAP a into create a simple calci if a user press 1 to addition 2 for substraction and 3 for division

#include<stdio.h>

void main(){
    char a,b,choice,sum;

    

    printf("Enter a for addition , s for substraction and d for division\n");
    scanf("%c", &choice);

    printf("Enter a , b\n");
    scanf("%d\n, %d", &a , &b);

    switch(choice){
        case 'a':
        sum = a+b;
        printf("%d", sum);
        break;

        case 's':
        choice = a-b;
        printf("%d\n", choice);
        break;

        case 'd':
        choice = a/b;
        printf("%d\n", choice);
        break;                      \\error

        default:
        printf("Wrong choice! Try again.");
    }

}