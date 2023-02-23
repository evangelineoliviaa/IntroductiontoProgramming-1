#include<stdio.h>
int main(){
    int i,row,space;
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(space=1;space<=row-i;space++){
            printf(" ");
        }
        for(int row1=1;row1<=i;row1++){
            printf("%d",row1);
        }for(int row2=i-1;row2>=1;row2--){
            printf("%d",row2);
        }
        printf("\n");
    }
}