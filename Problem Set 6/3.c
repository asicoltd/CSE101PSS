int main(){
    int a, i, j = 1, m = 1;
    scanf("%d",&a);
while( j <= a ){
    printf("Factorial of %d = ",j);
        for( i = 1; i <= j ; i++){
               m*=i;
            }
        printf("%d\n",m);
        j++;
        m = 1;
}
    return 0;
}
