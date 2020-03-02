int main(){
    int b, i, c = 0;
    printf("Array Size: ");
    scanf("%d",&b);
    int a[b];
    printf("Input Array: ");
    for( i = 0; i < b; i++){
        scanf("%d",&a[i]);
        }
    for( i = 0; i < b; i++){
        if( a[i] != a[b-i-1] ){
            c = -1;
        }
        }
        if( c == -1){
            printf("NO\n");
            }
        else
            printf("YES\n");

        return 0;
}
