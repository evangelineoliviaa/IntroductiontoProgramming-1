#include <stdio.h>
#include <math.h>
int simpen[2200][2200];
void foo(int di, int dj, int len)
{
    int dii = di+ len/3;
    int djj = dj+ len/3;
    if(len == 1){
        return;
    }
    for(int i = 0; i<len/3; i++){
        for(int j = 0; j<len/3;j++){
            simpen[dii+i][djj+j]=1;
        }
    }
    // disini
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            int diii = ((len/3)*i)+di;
            int djjj = ((len/3)*j)+dj;
            foo(diii,djjj,len/3);
        }
    }
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    int size = pow(3, n);
    foo(0, 0, size);
    
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            if(simpen[i][j]==1){
                printf("#");
            }else{
                printf(".");
            }
        }printf("\n");
    }
}
