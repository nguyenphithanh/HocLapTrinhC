int max(int n){
    int max = 1;
    for(int i=2; i<=n;i++){
        if(i>max){
            max=i;
        }
    }
    return max;
}
int main(){
    return 0;
}