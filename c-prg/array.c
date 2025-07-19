int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int main(){
    int x = 5, y = 10;
    printf("%d\n",add(x,y));
    printf("%d\n",sub(x,y));
    printf("%d\n", mul(x,y));
    printf("%d\n", div(x,y));

    printf("%d\n", add(x,y)+sub(x,y));
    return 0;
}