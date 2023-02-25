#include <stdio.h>
#define N 9
int data[N][N];
void printing(int array[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j!=N-1){
                printf("%d ", data[i][j]);
            }else{
                printf("%d", data[i][j]);
            }
            
        }
        printf("\n");
    }
}
int check(int array[N][N],int row,int col,int num){
    for(int x = 0; x<N;x++){ //di row yang sama ada yg nomer nya sama ga
        if(data[row][x]==num){
            return 0;
        }
    }for(int x = 0; x<N;x++){ // di column yang sama ada yg nomernya sama ga
        if(data[x][col]==num){
            return 0;
        }
    }int startingrow = row - row%3, startingcolumn=col - col%3; // di dalem kotak 3*3 ada angka yang sama ga
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(data[i+startingrow][j+startingcolumn]==num){
                return 0;
            }
        }
    }return 1;
}
int solving(int array[N][N], int row, int col){
    if (row == N-1 && col == N){
        return 1;
    }if (col == N){
        row++;
        col=0;
    }if (data[row][col]>0){
        return solving(data,row,col+1);
    }for(int num = 1; num<=N; num++){
        if(check(data,row,col,num)==1){
            //assign the num assuming itu correct
            data[row][col]=num;
            // check kemungkinan selanjutnya next column
            if(solving(data,row,col+1)==1){
                return 1;
            }
        }// gajadi assigned klo ternyata ga nge return 1
        // cobain angka yang lain
        
    }data[row][col]=0;
    return 0;
}

int main()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }if(solving(data,0,0)==1){
        printing(data);
    }else{
        printf("no solution\n");
    }return 0;
}