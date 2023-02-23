#include<stdio.h>

int main(){
    int n1,n2;
    int jumlah=0;
    scanf("%d %d",&n1, &n2);
    if (n2 == 0){
        printf("Error");
    }
    else{
        jumlah = n1*n2;
        printf("%d",jumlah);
    }
}