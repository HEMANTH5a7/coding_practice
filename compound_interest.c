#include<math.h>
#include<stdio.h>

int main(){
    int ci,p,t,r;
    scanf("%d %d %d",&p,&t,&r);
    r=r+1;
    ci= pow(r,t);
    ci=p*ci;
    printf("compound interest : %d",ci);
    return 0;
}
