#include<stdio.h>
#include<string.h>
/*
all 2 4
place 1 3
1 2 3
print
exit
*/
int main()
{
   int *arr[10];//punya c
   int jum[10]={0};
   for (int i=0; i<10; i++)
   {
       arr[i] = (int *) malloc(sizeof(int)*10000);
   }
   char cmd[100];
   int selesai = 0;
   while(selesai == 0)
   {
       scanf("%s", &cmd);
       if (strcmp(cmd,"exit")==0){
           selesai = 1;
       }
       else if (strcmp(cmd,"print")==0){
            for (int i=0; i<10; i++)
            {
                if (jum[i]==0){
                    printf("%d: No card",i);
                }else{
                    printf("%d: ",i);
                    for (int j=0; j<jum[i]; j++){
                        if (j<jum[i]-1){
                            printf("%d ",*(arr[i]+j));
                        }else{
                            printf("%d",*(arr[i]+j));
                        }
                    }
                }
                printf("\n");
            }
       }else if (strcmp(cmd,"all")==0){
           int angka,banyak;
           scanf("%d %d",&angka,&banyak);
           for (int i=0;i<10;i++)
           {
               for (int j=0;j<banyak;j++)
               {
                   *(arr[i]+j)=angka;
               }
               jum[i]=banyak;
           }
       }else if (strcmp(cmd,"place")==0){
           int notab,banyak, angka;
           scanf("%d %d",&notab,&banyak);
           for (int j=0;j<banyak;j++)
           {
               scanf("%d",&angka);
               *(arr[notab]+j)=angka;
           }
           jum[notab]=banyak;
       }else if (strcmp(cmd,"swap")==0){
           int dari,dgn;
           scanf("%d %d",&dari,&dgn);
           int *temp = arr[dari];
           arr[dari] = arr[dgn];
           arr[dgn]  = temp;
           int a = jum[dari];
           jum[dari] = jum[dgn];
           jum[dgn]=a;
       }else if (strcmp(cmd,"clear")==0){
           for (int i=0; i<10; i++)
           {
               jum[i] = 0;
           }
       }
   }
}