int main(){
    int b, i, j, c;
    printf("Array Size: ");
    scanf("%d",&b);
    int a[b];
    printf("Input Array: ");
    for( i = 0; i < b; i++){
        scanf("%d",&a[i]);
    }
    for( i = 0; i < b; i++){
            for( j = i+1 ; j < b; j++){
                if( a[i] == a[j] ){
                    c = j;
                }
            }
    }
    printf("%d",c);
    return 0 ;
}
