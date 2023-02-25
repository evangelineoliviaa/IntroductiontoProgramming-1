#include<stdio.h>

int main()
{
    long long int N=0,K=0,start;
    scanf("%lld %lld %lld",&N,&K,&start);
    long long int arrFrom[K],arrTo[K];
    for (long long int i=0; i<K; i++)
    {
        scanf("%lld %lld",&arrFrom[i],&arrTo[i]);
    }
    long long int st[K],pos=0;
    short kunjung[1001]={0};
    st[pos++] = start;

    while(pos!=0)
    {
        long long int titik = st[pos-1];
        pos--;
        kunjung[titik]=1;
        for (long long int i=0; i<K; i++)
        {
            if (arrFrom[i]==titik){
                if (kunjung[arrTo[i]]==0){
                    st[pos++] = arrTo[i];
                }
            }
        }
    }
    int pertama = 0;
    for (long long int  i=1;i<=N; i++){
        if (kunjung[i]==1){
            if (pertama==0){
                pertama=1;
                printf("%lld",i);
            }else{ printf(" %lld",i);}
        }
    }
    printf("\n");
}