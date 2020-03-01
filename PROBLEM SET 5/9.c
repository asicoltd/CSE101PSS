int main(){
    int i, j, M, N;
    scanf("%d%d",&M,&N);
    int a[M][N];
    for( i = 0 ; i < M ; i++){
        for( j = 0 ; j < N ; j++){
            scanf("%d",&a[i][j]);
        }
    }
int k = M - 1;
i = M-1; j = 0;

        x:
    i = k;
    j = 0;
while( i > j){

    if( M > N && j == N ){
        printf("\n");
        break;
    }
    else if( M < N && j == N ){
        printf("\n");
        break;
    }
    printf("%d ",a[i][j]);
    if( i == M - 1){
        printf("\n");
        k--;
        goto x;
    }
    i++;
    j++;
}

i = j = 0;
while( i == j && i*j < M*N ){
    printf("%d ",a[i][j]);
    i++;
    j++;
    if( M > N ){
        if( j == N){
            break;
        }
    }
    else if( M < N ){
        if( i == M){
            break;
        }
    }
}
k = 1;
z:
    i = 0;
    j = k;
printf("\n");
while( j > i ){
    if( M > N && j == N ){
        break;
    }
    else if( M < N && j == N ){
        break;
    }
    else if( M == N && i == 0 && j == N  ){
        break;
    }
    printf("%d ",a[i][j]);
    if( j == N-1 ){

        k++;
        goto z;

    }
    i++;
    j++;
}
    return 0;
}




