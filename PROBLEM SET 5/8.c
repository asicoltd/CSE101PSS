int main(){
    int i, j, M, N, temp ;             // i,N == Row
                                     // j,M == Column
    scanf("%d%d",&M,&N);
    int a[M][N];
    for( i = 0 ; i < M ; i++){
        for( j = 0 ; j < N ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for( i = 0 ; i < M ; i++){
        for( j = 0 ; j < N ; j++){
        if( j < N /2 ){
        temp = a[i][j];
        a[i][j] = a[i][N-j-1];
        a[i][N-j-1] = temp;
        }
        }
    }
    printf("After flipping:\n");
      for( i = 0 ; i < M ; i++){
        for( j = 0 ; j < N ; j++){
            printf("%d ",a[i][j]);
        }
            printf("\n");
    }
    printf("After inverting:\n");
          for( i = 0 ; i < M ; i++){
        for( j = 0 ; j < N ; j++){
            if( a[i][j] == 0){
                a[i][j] = 1;
            }
            else a[i][j] = 0;
            printf("%d ",a[i][j]);
        }
            printf("\n");
    }
    return 0;
}
