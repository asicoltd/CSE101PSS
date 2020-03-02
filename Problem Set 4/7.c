int main(){
    int b, i, min = 999999999, min2 = 999999999, skip;
    printf("Array Size: ");
    scanf("%d",&b);
    int a[b];
    printf("Input Array: ");
    for( i = 0; i < b; i++){
        scanf("%d",&a[i]);
        if( a[i] < min){
            min = a[i];
            skip = i;
        }
    }
    for( i = 0; i < b; i++){
        if( a[i] < min2 && i != skip){
            min2 = a[i];
        }
    }
    printf("min = %d, min2 = %d\n",min,min2);

    return 0 ;
}
