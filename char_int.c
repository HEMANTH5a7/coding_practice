#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);

    if((a>='a' && a<='z')||(a>='A' && a<='Z'))   printf("char");
    else printf("int");
    return 0;
}
