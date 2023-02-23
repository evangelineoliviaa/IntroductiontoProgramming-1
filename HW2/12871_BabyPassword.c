#include<stdio.h>

int main (){
    char c;
    int n,temp;
    scanf("%c %d",&c,&n);
    if(c>= 'a' && c<='z'){
        c+=('A'-'a');
        c = ((c-'A'-n)%26+26)%26;
        temp = c + 'A';
    }else{
        c+=('a'-'A');
        c = ((c-'a'-n)%26+26)%26;
        temp = c + 'a';
    }
    printf("%c\n",temp);
}