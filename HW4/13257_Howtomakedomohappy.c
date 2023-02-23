#include<stdio.h>
#include<string.h>
int main(){
    int na=0;
    int aa[101]={0},bb[101]={0};
    char b[101];
    scanf("%d",&na);
    getchar();
    for(int i=na-1;i>=0;i--){
        aa[i]=getchar()-'0';
    }
     //['1']['2']['3'] ----> [3][2][1]
    scanf("%s",&b);
    
    // bikin array yang buat dihitung jadi perlu dibalik dulu //
        int nb=0;
        for(int i = strlen(b)-1; i>=0;i--){
            bb[nb]=b[i]-48;
            nb++;
        }

        //coba cetak array nya
        /*
        for(int i=0;i<na;i++ ){
            printf("%d",aa[i]); //hasil cetak dari a yg dibalik
        }printf("\n");
        
        for(int i=0 ; i<nb; i++){
            printf("%d",bb[i]); //hasil cetak dari b yg dibalik
        }printf("\n");
        */

        //bikin array untuk output
        int cc[nb][101];
        int nbcc[101]; //jumlah angka per barisnya

        for (int i=0; i< nb;i++){
            int nc = i, carry = 0; //nc buat start masukin ny mo dari mana
            for ( int ii = 0; ii<i; ii++){ // buat bikin 0 diawalnya buat baris ke 2
                cc[i][ii] = 0;
            }for(int j =0 ; j<na;j++){
                int hitung = carry+ bb[i]*aa[j];
                cc[i][nc] = hitung%10;
                carry = hitung/10;
                nc++;
            }if (carry!=0){
                cc[i][nc]=carry; // carry terakhir dalam satu baris
                nc++;
            }
            nbcc[i]=nc;

        }
        /*for (int i=0; i<nb; i++)
        {
            for (int j=0; j<nbcc[i]; j++)
            {
                printf("%d ", cc[i][j]);
            }
            printf("\n");
        }*/
        // proses masukin 0
        int pjg = nbcc[nb-1];
        for(int i = 0 ; i<nb; i++){
            for(int j = nbcc[i]; j<pjg;j++){
                cc[i][j]=0;
            }
        }

        //proses penjumlahan
        int hasil[101]={0};
        int nh=0;
        int carplus=0;
        for(int i =0; i<pjg;i++){
            int total = 0;
            for (int j =0; j<nb; j++){
                total += carplus + cc[j][i];
                carplus = 0;
            }hasil[nh]= total%10; 
            nh++;
            carplus = total/10;
        }for (int i = nh-1;i>=0;i--){
            if(hasil[nh-1]==0){
                if (hasil[i]!=0){
                printf("%d",hasil[i]);
                }
            }else{
                printf("%d",hasil[i]);
            }
        }
        
}
