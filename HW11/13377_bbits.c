#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned long long sum=0;
    int x, y, z;
    scanf("%d%d%d",&x,&y,&z);
    int m = (x|y)^z;
    while(m){
        if(m%2){
            if(z%2){
                sum+=1;
            }else{
                sum+=(x%2)+(y%2);
            }
        }
        x = x>>1;
        y = y>>1;
        z = z>>1;
        m = m>>1;
    }
    printf("%llu\n",sum);
}