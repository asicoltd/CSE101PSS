int main(){
    int n,counter=1,x=1;
    scanf("%d",&n);
    while(x <= n){
    if(counter % 2 != 0){
    printf("%d  ",counter);
    x++;
    }
    counter++;
    }
    return 0;
}

//DONE
