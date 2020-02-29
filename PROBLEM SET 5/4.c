int main(){
    int i, j, N, M ;             // i,N == Row
                                     // j,M == Column
    scanf("%d%d",&N,&M);
    int a[N][M];
    for( i = 0 ; i < N ; i++){
        for( j = 0 ; j < M ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&N,&M);
    for( i = 0 ; i < N ; i++){
        for( j = 0 ; j < M ; j++){
            printf("%d ",a[i][j]);
        }
            printf("\n");
    }
    return 0;
}
