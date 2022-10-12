#include<stdio.h>
int main(){
    int *s;
    s=(int*)malloc(5*sizeof(int));
    if(s==NULL){
        printf("memory is not allocated");
        exit(0);
    }
    else{
            int total=0,avg,per,t;
            printf("Total score in each subject");
            scanf("%d",&t);
            printf("Enter the subjects marks");
            for(int i=0;i<5;i++){
                scanf("%d",&s[i]);
                total+=s[i];
            }
            avg=total/5;
            per=avg*100/t;
            printf("total=%d\n average = %d \n percentage = %d %",total,avg,per);

            free(s);
    }
}
