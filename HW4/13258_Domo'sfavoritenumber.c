#include<stdio.h>

int main(){
    int L,R;
    scanf("%d %d",&L,&R);
    int ctk=0,temp=0,temp2=-1;
    for(int i = L; i<=R; i++){
        for(int x=1;x<=i;x++){
            if(i%x == 0){
                ctk++;
            }
        }
        if(ctk>=temp){
            temp = ctk;
            temp2 = i;
        }
        ctk = 0;
    }
    printf("%d",temp2);
}