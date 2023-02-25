#include<stdio.h>

int board[8][8];
int queen[8][8];
int minscore;

void solving(int row, int score){
    if(row == 8){
        if(minscore>0){
            if(score<minscore){
            minscore=score;
            return;
        }
        }else if (minscore==0){
            minscore = score;
        }
    }else{
        for(int kol = 0; kol<8; kol++){
            int valid = 1;
            for(int i = row-1;i>=0;i--){ // cek atasnya
                if(queen[i][kol]==1){
                    valid = 0;
                }
            }for(int i = row - 1 , j= kol+1; i>=0 && j<8;i--,j++){ // cek diagonal kanan
                if(queen[i][j]==1){
                    valid = 0;
                }
            }for(int i = row - 1 , j = kol - 1; i>=0 && j>=0;i--,j--){ //cek diagonal kiri
                if(queen[i][j]==1){
                    valid=0;
                }
            }if(valid == 1){
                queen[row][kol]=1;
                solving(row+1,score+board[row][kol]);
                queen[row][kol]=0;
            }
        }
    }
}

int main(){
    int T;
    scanf("%d",&T);
    for(int test = 1;test<=T;test++){
        for(int i = 0; i<8;i++){
            for(int j = 0; j< 8;j++){
                queen[i][j] = 0;
                scanf("%d",&board[i][j]);
            }
        }
        minscore =0;
        solving(0,0);
        printf("%d\n",minscore);
    }
}