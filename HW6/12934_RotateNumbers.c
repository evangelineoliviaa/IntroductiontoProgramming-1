#include<stdio.h>
#include<string.h>
char angka[110],hasil[110];
int main(){
    scanf("%s",angka);
    int s;
    s = strlen(angka)-1;
    int temp=0,no=0;
    for(int i=0; i<=s; i++){
        if(angka[i]== '0'){
            hasil[s-i]='0';
        }else if(angka[i]== '1'){
            hasil[s-i]='1';
        }else if(angka[i]== '2'){
            no = 1;
        }else if(angka[i]== '3'){
            no = 1;
        }else if(angka[i]== '4'){
            no = 1;
        }else if(angka[i]== '5'){
            no = 1;
        }else if(angka[i]== '6'){
            hasil[s-i]='9';
        }else if(angka[i]== '7'){
            no = 1;
        }else if(angka[i]== '8'){
            hasil[s-i]='8';
        }else if(angka[i]== '9'){
            hasil[s-i]='6';
        }
    }if(no==1){
        printf("No\n");
    }else{
        int ctk=0;
        for(int i =0; i<=s;i++){
            if(hasil[i]!='0'){
                ctk =1;
            }if(ctk==1){
                printf("%c",hasil[i]);
            }
    }printf("\n");
} 
}
