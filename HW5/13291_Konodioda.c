#include<stdio.h>
int bar[2058]= {0};
int kol[2058]= {0};
int dkanan[4110]= {0};
int dkiri[4110]= {0};
int main()
{
    int T,N,angka,star;

    scanf("%d",&T);
    scanf("%d",&N);
    for(int x=1; x<=T; x++)
    {
        star = 0;
        for(int i=1;i<=N;i++){
            bar[i]=kol[i]=dkanan[i]=dkanan[i+N-1]=dkiri[i]=dkiri[i+N-1]=0;
        }
        for(int i = 1; i<=N; i++)
        {
            for(int j = 1; j<=N; j++)
            {
                scanf("%d",&angka);
                if(angka!=255)
                {
                    bar[i]=1;
                    kol[j]=1;
                    dkanan[i+j-1]=1;
                    dkiri[N+j-i]=1;
                }
            }
        }

        for(int a=1; a<=N; a++)
        {
            for(int b=1; b<=N; b++)
            {
                if(bar[a]==0 && kol[b]==0 && dkiri[N+b-a]==0 && dkanan[a+b-1]==0)
                {
                    star++;
                }
            }
        }
        printf("%d\n",star);
    }
}