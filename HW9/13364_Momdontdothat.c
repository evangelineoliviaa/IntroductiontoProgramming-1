#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int t = 0; t<T; t++){
        int salah = 0;
        char temp[5010];
        char temp2[5010];
        char * list[55];
        scanf("%s",temp);
        int len = strlen(temp);
        int idx = 0;
        int id = 0;
        int ctk = 0;

        for(int i = 1; i<len;i++){
            if(temp[i]!='/'){
                temp2[id]=temp[i];
                id++;
            }else{
                temp2[id] = '\0';
                id++;
                list[idx]=(char*)malloc(id*sizeof(char));
                strcpy(list[idx],temp2);
                idx++;
                id = 0;
            }
        }
        
        temp2[id] = '\0';
        id++;
        list[idx]=(char*)malloc(id*sizeof(char));
        strcpy(list[idx],temp2);
        idx++;
        id = 0;
        
        scanf("%s",temp);
        int len2 = strlen(temp);
        ctk = 1;
        for(int i = 1; i<len2;i++){
            if(temp[i]!='/'){
                temp2[id]=temp[i];
                id++;
            }else{
                temp2[id] = '\0';
                id++;
                //printf("%s\n",temp2);
                for(int x = 0; x<idx ; x++){
                    if(strcmp(temp2,list[x])==0){
                        ctk = 1;
                        break;
                    }else{
                        ctk = 0;
                    }
                }//printf("%d\n",ctk);
                if(ctk==0){
                    break;
                }id =0;
            }
        }
        if(ctk==1){
            //printf("%d",id);
            temp2[id] = '\0';
            //printf("%s\n",temp2);
            for(int x = 0; x<idx ; x++){
                if(strcmp(temp2,list[x])==0){
                    ctk = 1;
                    break;
                }else{
                    ctk = 0;
                }
            }id = 0;
            //printf("%d\n",ctk);
            if(ctk == 1){
                printf("valid\n");
            }if(ctk == 0){
                printf("not valid\n");
            }
        }else{
            printf("not valid\n");
        }
    }
}
