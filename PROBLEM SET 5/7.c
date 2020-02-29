int main(){
    int i, j, M, N, O, P, Q, R;
    scanf("%d%d",&M,&N);
    int a[M][N];
    for( i = 0 ; i < M ; i++){
        for( j = 0 ; j < N ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&O,&P);
    int b[O][P];
    for( i = 0 ; i < O ; i++){
        for( j = 0 ; j < P ; j++){
            scanf("%d",&b[i][j]);
        }
    }
    if( M == O ){
        R = N + P;
        Q = M;
    }
    else{
        printf("Not possible to horizontally stack the two arrays\n");
        return 0;
    }

////////////////////////////////////////
    int c[Q][R];
    for( i = 0 ; i < Q ; i++){
        for( j = 0 ; j < N ; j++){
            printf("%d ",a[i][j]);
            }
        for( j = 0 ; j < P ; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
