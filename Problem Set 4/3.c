int main(){
    int b, c = 0, i;
    printf("Array Size: ");
    scanf("%d",&b);
    int a[b];
    printf("Input Array: ");
    for( i = 0; i < b; i++){
        scanf("%d",&a[i]);
        if( a[i] < 0 ){
            c++;
        }
    }
    printf("%d\n",c);
    return 0 ;
}
