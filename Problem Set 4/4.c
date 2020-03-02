int main(){
    int b, i, pos = 0 , neg = 0;
    printf("Array Size: ");
    scanf("%d",&b);
    int a[b];
    printf("Input Array: ");
    for( i = 0; i < b; i++){
        scanf("%d",&a[i]);
        if( a[i] > 0 ){
            pos++;
        }
        else if( a[i] < 0 ){
            neg++;
        }
    }
    if( pos > neg){
    printf("Major Positive \n");
    }
    else if( pos < neg){
    printf("Major Negative \n");
    }
    else {
    printf("Neutral \n");
    }
    return 0 ;
}

