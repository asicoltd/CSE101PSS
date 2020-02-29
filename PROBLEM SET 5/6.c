int main(){
    int i, j, N, M, flag = 0;               // i,N == Row
                                            // j,M == Column
    scanf("%d%d",&N,&M);
    int a[N][M];
    for( i = 0 ; i < N ; i++){
        for( j = 0 ; j < M ; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for( i = 0 ; i < N ; i++){
        for( j = 0 ; j < M ; j++){
            if( i == j ){
                if( a[i][j] != 1){
                    flag = 1;

                }
            }
            else{
                if( a[i][j] != 0){
                    flag = 1;

                }
            }
        }
    }

    if( flag == 1 ){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }

    return 0;
}
