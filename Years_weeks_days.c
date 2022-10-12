
#include<stdio.h>
int main(){
    int number_of_days;
    printf("Enter the no.of days:");
    scanf("%d",&number_of_days);
    int years=0,weeks=0,days=0;
    if(number_of_days>=365){
        years=number_of_days/365;
        number_of_days=number_of_days%365;
    }
    if(number_of_days>=7){
        weeks=number_of_days/7;
        number_of_days=number_of_days%7;
    }
    printf("Years : %d \nWeeks : %d \nDays : %d",years,weeks,number_of_days);
}
