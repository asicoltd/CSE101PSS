int main(){
    int i, j, N, M, Max;             // i,N == Row
                                // j,M == Column
    scanf("%d%d",&N,&M);
    int a[N][M];
    for( i = 0 ; i < N ; i++){
        for( j = 0 ; j < M ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for( i = 0 ; i < N ; i++){
    Max = 0;
        for( j = 0 ; j < M ; j++){
            if( a[i][j] > Max){
                Max = a[i][j];

            }
        }
    printf("Max element of row %d: %d\n",i,Max);
    }

    return 0;
}
