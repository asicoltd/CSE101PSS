int main(){
    int b, i, c, max = -9999999, pos;
    printf("Array Size: ");
    scanf("%d",&b);
    int a[b];
    printf("Input Array: ");
    for( i = 0; i < b; i++){
        scanf("%d",&a[i]);
    }
    for( i = 0; i < b-1; i++){
            c = a[i] -a[i+1];
            if( c < 0){
                c*=-1;
            }
            if( c > max){
                max = c ;
                pos = i;
            }
    }
    printf("%d,%d", pos, pos+1);
    return 0 ;
}
