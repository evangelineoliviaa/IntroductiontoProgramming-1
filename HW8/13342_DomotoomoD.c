#include<stdio.h>
#include<string.h>
char arr[30];
int temp=0;
void foo(){
    char s = getchar();
    getchar();
    if(s>='0' && s<='9'){
        arr[temp]=s;
        temp++;
    }else{
        foo();
        foo();
        arr[temp]=s;
        temp++;
    }
}
int main(){
    foo();
    int len = strlen(arr);
    for(int i = 0;i<len-1;i++){
        printf("%c ",arr[i]);
    }printf("%c",arr[len-1]);
}