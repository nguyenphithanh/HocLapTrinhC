// giaithuacua1=1
// giai thua cua 3= giaithua2*3
// giai thua cua n = giaithua(n-1)*n
float giaithua(int n){
    if(n==1){
        return 1;
    }
    else
    {
        return n* giaithua(n-1);
    }
}
int main(){
    return 0;
}