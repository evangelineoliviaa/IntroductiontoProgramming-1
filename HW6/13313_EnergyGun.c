#include<stdio.h>
int main(){
    int N,M;
    int value[55];
	scanf("%d %d",&N,&M);
    for(int i = 0;i<M;i++){
        scanf("%d",&value[i]);
    }
    
    for(int i = 0;i<N-1 && i<M;i++){
        printf("0\n");
    }
    for(int i = 0; i<M-N+1;i++){
        printf("%d\n",value[i]);
    }
  
}
