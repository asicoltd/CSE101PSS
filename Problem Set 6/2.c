int main(){
    int a, i,j = 1, flag = 0;
    scanf("%d",&a);
while( j <= a ){

    printf("%d: ",j);
        for( i = 1; i <= j ; i++){
            if( j % i == 0 ){
                    if( i > 1 && i < j){
                flag = 1;
            }
        }
        }
        if( flag == 1){
            printf("Composite\n");
        }
        else printf("Not Composite\n");
        j++;
        flag = 0;
}

    return 0;
}
