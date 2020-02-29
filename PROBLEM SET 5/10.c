int main(){
    int r, c, i, j;
    scanf("%d%d",&r,&c);
    int a[r*c];
    for( i = 0; i < r*c; i++){

                scanf("%d",&a[i]);

    }
    int r1, c1, i1=0;
    scanf("%d%d",&r1,&c1);
    int b[r1][c1];
    if( r*c == r1*c1 ){
            for( i = 0 ; i < r1 ; i++){
                for( j = 0 ; j < c1 ; j++){
                b[i][j] = a[i1];
                i1++;
                }
            }
            for( i = 0 ; i < r1 ; i++){
                for( j = 0 ; j < c1 ; j++){
                        printf("%d ",b[i][j]);
    }
                        printf("\n");
            }
    }
    else printf("Not possible\n");
    return 0;
}
