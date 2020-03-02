int main(){
    int a, i, j, k=1, l, m;
    scanf("%d",&a);
        i = a - k;

    for( k = 1 ; k <= a; k++){
        for( l = 0 ; l < i; l++)
        printf(" ");
        for( m = 0 ; m < j; m++){
            printf("*");
        }
        printf("\n");
        j+=2;
    }
    return 0;
}
