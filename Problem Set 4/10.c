int main(){
    int b, d, i, j = 1;
    printf("Array Size: ");
    scanf("%d",&b);
    int a[b];
    printf("Input Array: ");
    for( i = 0; i < b; i++){
        scanf("%d",&a[i]);
    }
    printf("Array Size: ");
    scanf("%d",&d);
    int c[d];
    printf("Input Array: ");
    for( i = 0; i < d; i++){
        scanf("%d",&c[i]);
    }

    if( j == -1){
        printf("Equal\n");
    }
    else if(j == 1){
        printf("Not Equal\n");
    }
    return 0;
}
