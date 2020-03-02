int main(){
    int b, i;
    printf("Array Size: ");
    scanf("%d",&b);
    int a[b];
    printf("Input Array: ");
    for( i = 0; i < b; i++){
        scanf("%d",&a[i]);
        if( i % 2 == 0 ){
            a[i]+=2;
        }
        else if( i % 2 != 0 ){
            a[i]+=3;
        }
    }
    printf("Output Array: ");
    for( i = 0; i < b; i++){
    printf("%d  ",a[i]);
    }
    return 0 ;
}
