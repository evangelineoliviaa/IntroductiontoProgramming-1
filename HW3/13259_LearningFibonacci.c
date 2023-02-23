#include<stdio.h>

int main(){
    int x,term1 = 0,term2= 1;
    scanf("%d",&x);
    printf("%d %d ",term1,term2);
    for(int i=3; i<=x; i++){
        int temp = term1+term2;
        printf("%d ",temp);
        term1 = term2;
        term2 = temp;
    }printf("\n");
}