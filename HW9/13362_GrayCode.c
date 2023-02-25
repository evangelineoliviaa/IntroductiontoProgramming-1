#include<stdio.h>
#include<stdlib.h>
void* grayCode(int n, int* returnSize) {
    *returnSize=1<<n; //2^n
    int* pAns=(int*)malloc(*returnSize*sizeof(int));
    pAns[0]=0;
    printf("%d\n",pAns[0]);
    for (int i=1;i<*returnSize;i++){
        int temp=i;
        for (int j=0;j<n;j++){//xor the last bit which is not zero
            if (temp%2!=0){
                pAns[i]=pAns[i-1]^(1<<j);
                printf("%d\n",pAns[i]);
                break;
            }
            temp=temp>>1;
        }
    }
}
int main(){
    int arr[20];
    int N;
    scanf("%d",&N);
    grayCode(N,arr);
}
