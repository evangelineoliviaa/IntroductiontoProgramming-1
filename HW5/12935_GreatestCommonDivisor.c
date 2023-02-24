#include<stdio.h>

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int temp=0;
    for (int i = 1; i<=A && i<=B; i++){
        if(A%i==0 && B%i==0){
            temp = i;
        }
    }printf("%d\n",temp);
}