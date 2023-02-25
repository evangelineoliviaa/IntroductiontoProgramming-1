#include <stdio.h>

#include <string.h>

#include <stdlib.h>

char string[100001][105];
int isUpper(char c){
    return((c>='A')&&(c<='Z'));
}
int cmp(const void *a,const void *b){

    int len1 = strlen(a);
    int len2 = strlen(b);
    int temp = len1;
    if(len1>len2){
        temp = len2;
    }
    for(int i = 0 ; i< temp; i++){
        char ca = *(char*)(a+i);
        char cb = *(char*)(b+i);
        
        if(isUpper(ca)){
            if(isUpper(cb)){
                if(ca>cb){
                    return 1;
                }if(cb>ca){
                    return -1;
                }
            }else{
                return -1;
            }
        }else{
            if(isUpper(cb)){
                return 1;
            }else{
                if(ca>cb){
                    return 1;
                }if(cb>ca){
                    return -1;
                }
            }
        }
    }if(len1<len2){
        return -1;
    }if(len2<len1){
        return 1;
    }

}

int main(){

int i = 0;

while(scanf("%s", string[i]) != EOF) i++;

qsort(string,i,105,cmp);

for(int j = 0; j < i; j++) printf("%s\n", string[j]);

}