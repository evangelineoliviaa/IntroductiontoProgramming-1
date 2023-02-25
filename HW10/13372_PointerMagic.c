#include<stdio.h>
#include <stdlib.h>


void Swap(int*, int*);

void Replace(int*, int*);

void Switch(int**, int**);

void PrintArrays(int *A, int *B, int size){
    for(int i = 0; i < size; i++){
        if(i != 0) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");

    for(int j = 0; j < size; j++){
        if(j != 0) printf(" ");
        printf("%d", B[j]);
    }
    printf("\n");
    return;
}

int main(){
    char str[10];
    int size;
    scanf("%d", &size);

    int *A = (int*)malloc(sizeof(int)*size);
    int *B = (int*)malloc(sizeof(int)*size);

    for(int i = 0; i < size; i++){
        int num;
        scanf("%d", &num);
        A[i] = num;
    }

    for(int j = 0; j < size; j++){
        int num;
        scanf("%d", &num);
        B[j] = num;
    }

    while(1){
        scanf("%s", str);
        if(str[2] == 'A') Swap(A, B);//Swap
        else if(str[2] == 'I') Switch(&A, &B);//Switch
        else if(str[2] == 'P') Replace(A, B);//Replace
        else if(str[2] == 'O') break;//Stop
    }

    PrintArrays(A, B, size);

    return 0;
}

void Swap(int* A, int* B)
{
	char asal[2], tuju[2];
	int idx1, idx2;
	scanf("%s",&asal);
	scanf("%s",&tuju);
	scanf("%d",&idx1);
	scanf("%d",&idx2);
	int *p, *pp;
	if (asal[0]=='A')
	{
		p = A + idx1;
	}else if(asal[0] == 'B')
	{
		p = B + idx1;
	}
	if (tuju[0]=='A')
	{
		pp = A + idx2;
	}else if(tuju[0] == 'B')
	{
		pp = B + idx2;
	}
	int temp = *p;
	*p  = *pp;
	*pp = temp;
}

void Replace(int* A, int*B)
{
	char asal[2];
	int idx1, nilaibaru;
	int *p;
	scanf("%s",&asal);
	scanf("%d",&idx1);
	scanf("%d",&nilaibaru);
	if (asal[0]=='A')
	{
		p = A + idx1;
	}else if(asal[0] == 'B')
	{
		p = B + idx1;
	}
	*p = nilaibaru;
}

void Switch(int** A, int** B)
{
	int *tmp = *A;
    *A = *B;
    *B = tmp;
}
/*

5
1 2 3 4 5
6 7 8 9 0
SWAP
A B 1 1
SWITCH
REPLACE
A 3 100
STOP
*/
