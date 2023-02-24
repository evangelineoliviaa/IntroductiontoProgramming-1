#include<stdio.h>
int matriks[2110][2110]={0};
int matriks2[2110][2110]={0};
int mul[2110][2110]={0};
int main(){

    int N=1,M=1;
    scanf("%d",&N);
    scanf("%d",&M);
    for(int row=1;row<=N;row++){
        for(int kol=1;kol<=M;kol++){
            scanf("%d",&matriks[row][kol]);
        }
    }
    for(int row2=1;row2<=M;row2++){
        for(int kol2=1;kol2<=N;kol2++){
            scanf("%d",&matriks2[row2][kol2]);
        }
    }/*for(int row=1;row<=N;row++){
        for(int kol=1;kol<=M;kol++){
            printf("%d ",matriks[row][kol]);
        }printf("\n");
    }for(int row2=1;row2<=M;row2++){
        for(int kol2=1;kol2<=N;kol2++){
            printf("%d ",matriks2[row2][kol2]);
        }printf("\n");
    }*/
    for(int row=1;row<=N;row++){
        for(int kol=1;kol<=N;kol++){
            for(int temp=1;temp<=M;temp++){
                mul[row][kol]+=matriks[row][temp]*matriks2[temp][kol];
            }
        }
    }for(int row2=1;row2<=N;row2++){
        for(int kol2=1;kol2<=N;kol2++){
            printf("%d",mul[kol2][row2]);
            if(kol2!=N){
                printf(" ");
            }
        }printf("\n");
    }
}
