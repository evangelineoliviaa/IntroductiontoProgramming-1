#include<stdio.h>

int main()
{
    int angka, ctk,k,ganjil;
    scanf("%d",&angka);
    if(angka%2 !=0){
        for(k = 1; k<=angka/2; k++){
            for(ctk=angka/2;ctk>=k;ctk--){
                printf(" ");
            }for(ctk=1; ctk<=2*k-1;ctk++){
                printf("*");
            }
            printf("\n");
        }for(k=0; k<angka; k++){
            printf("*");
        }printf("\n");
        for(k = 1; k<=angka/2; k++){
            for(ctk=1; ctk<=k;ctk++){
                printf(" ");
            }for(ctk=angka-2; ctk>=2*k-1;ctk--){
                printf("*");
            }
            printf("\n");
        }
    }else{
        printf("Stop drawing fake diamonds!\n");
    }
}

