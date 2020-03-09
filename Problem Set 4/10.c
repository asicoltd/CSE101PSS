int main(){
    int b, d, i, j = 1,flag=0;
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

    if( b == d ){
	for(i=0;i<b;i++){
	if(a[i]!=c[i]){
	flag = 1;
	break;}
	}
        
    }
    else{
        printf("Not Equal\n");
    }
	if(flag == 1)printf("Not Equal");
	else printf("Not Equal");
    return 0;
}
