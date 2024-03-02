#include<stdio.h>

void main(){
    float basic;
    float hra, da, gross;
    printf("Enter salary :\n");
    scanf("%f", &basic);

    if (basic<=10000){
        hra = (basic*20)/100;
        da = (basic*80)/100;
    }
    else if (basic<=20000){
         hra = (basic*25)/100;
        da = (basic*90)/100;
    }
    else{
         hra = (basic*30)/100;
        da = (basic*95)/100;
    }
    
    gross = (basic+hra+da);
    printf("Gross salary is : %f\n", gross);


}