#include <stdio.h>
#include <string.h>
char new[20];
int last[20];

long long fak(int n){
    if(n<=1){
        return 1;

    }else{
        return n*fak(n-1);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long sum=0;
        scanf("%s",new);
        int len = strlen(new);
        for(int i = 0; i<len;i++){
            int ctk = 0;
            for(int j = i+1; j<len;j++){
                if(new[i]>new[j]){
                    ctk++;
                }
            }last[i]=ctk;
        }for(int i =0;i<len;i++){
            int temp = len-i-1;
            sum += last[i]*fak(temp);
        }printf("%lld\n",sum);
    }
}
