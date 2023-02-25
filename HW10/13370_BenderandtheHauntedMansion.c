#include<stdio.h>
#include<math.h>
#include<string.h>
char list[10];
int main(){
    int n;
    scanf("%d",&n);
    long long int sum=0;
    scanf("%s",list);
    int pangkat = strlen(list)-1;
    for(int i = 0; list[i]!='\0';i++,pangkat--){
        int bil = list[i]-'0';
        if(list[i]>='A'&&list[i]<='F'){
            bil = 10 + list[i]-'A';
        }
        sum += bil * pow(n,pangkat);
    }
    printf("%lld\n",sum);
}