// f(n)= f(n-1)+ f(n-2), f(1) = 1, f(2)= 1
int f(int n){
    if(n==1 || n == 2){
        return 1;
    }
    else
    {
        return f(n-1) + f(n-2);
    }
    
}
int main(){
    return 0;
}