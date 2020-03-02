int main(){
    printf("Array Size: ");
    int b, i, sum = 0;;
    scanf("%d",&b);
    int a[b];
    printf("Input Array: ");
    for( i = 0; i < b; i++){
        scanf("%d",&a[i]);
        sum += a[i];
        }

    printf("Sum = %d, Ave = %.2f\n",sum,(float)sum/b);
    return 0 ;
}
