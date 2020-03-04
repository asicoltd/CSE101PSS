int main(){
    int b, i, j, c, flag = 0;
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
                    flag = 1;
		   a[i]=c;
		    break;
                }
		if( flag = 1 ){
		break;
            }
    }
    printf("%d",c);
    return 0 ;
}
