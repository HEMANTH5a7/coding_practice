#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int great = (a>b)?(a>c? a:c):(b>c?b:c);
    printf("%d",great);
    return 0;
}
