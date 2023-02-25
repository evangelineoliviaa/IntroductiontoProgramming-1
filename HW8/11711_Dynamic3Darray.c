unsigned*** new_3d_array(unsigned n, unsigned m, unsigned k){
    unsigned*** ptr1 = (unsigned***)malloc(sizeof(unsigned**)*n+sizeof(unsigned*)*m*n+sizeof(unsigned)*m*n*k);
    unsigned** ptr2 = (unsigned**)(ptr1+n);
    unsigned* ptr3 = (unsigned*)(ptr1+n+n*m);
    for (int i=0; i<n; i++){
        ptr1[i] = &ptr2[i*m];
        for (int j=0; j<m; j++){
            ptr1[i][j] = &ptr3[i*m*k+j*k];
        }
    }
    return ptr1;
}

unsigned*** new_trid_array(unsigned n, unsigned m, unsigned k){
    unsigned*** ptr1 = (unsigned***)malloc(sizeof(unsigned**)*n);
    for (int i=0; i<n; i++){
        unsigned** ptr2 = (unsigned**)malloc(sizeof(unsigned*)*m);
        ptr1[i]=ptr2;
        for (int j=0; j<m; j++){
            unsigned* ptr3 = (unsigned*)malloc(sizeof(unsigned)*k);
            ptr2[i]=ptr3;
        }
    }
    return ptr1;
}
void delete_3d_array(unsigned***arr){
    free(arr);
}