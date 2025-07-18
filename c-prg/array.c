int main(){
    int a = 5;
    int i;
    for(i=0; i<=5; i++){
        printf("%d\n", a);
    }
    display(2,4);
    return 0;
}

int display(int a, int p){
    int i;
    for(i=0; i<=p; i++){
        printf("%d ",a);
    }
    return 0;
}