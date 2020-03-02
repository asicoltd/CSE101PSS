int main(){
    int a, i, j, k, l = 1;
    scanf("%d",&a);
    for( i = a ; i > 0 ; i-- ){
        for( j = 0 ; j < a ; j++ ){
            printf(" ");
        }

        for( k = 0 ; k < l ; k++){
            printf("*");
        }
            printf("\n");
            l+=2;
            a--;
    }
    return 0;
}
