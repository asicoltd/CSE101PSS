int main(){
    int i, j, N, M;             // i,N == Row
                                     // j,M == Column
    scanf("%d%d",&N,&M);
    float a[N][M], s = 0;
    for( i = 0 ; i < N ; i++){
        for( j = 0 ; j < M ; j++){
            scanf("%f",&a[i][j]);
            if( a[i][j] == 0 ){
                s++;
            }
        }
    }
    s = s / (i * j);
    printf("Sparsity = %.2f\nDensity = %.2f\n",s,1-s);
    return 0;
}
