#include<stdio.h>

int main(){
    float F,S;
    float sum;
    scanf("%f%f",&F,&S);
    if(S==0){
        printf("Error");
    }else{
    sum = F/S;
    printf("%.2f",sum);
    }
}