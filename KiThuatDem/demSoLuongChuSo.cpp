// 123 => so co 3 chu so
// 1234 => so co 4 chu so (((1*10) +2)*10 +3)*10 +4
//1 => so co 1 chu so
#include<stdio.h>
int laSoChan(int n){
    return n%2==0;
}
int demSoLuongChuSo(int n){
    int dem=0;
    while(n!=0){// tim so luong chu so
        dem++;
        n=n/10;
    }
    return dem;
}
int demSoLuongChuSoLe(int n){
    int count = 0;
    while(n!=0){
        if(!laSoChan(n)){
            count++;
        }
        n/=10;
    }
    return count;
}
int demSoLuongChuSoChan(int n){
    int count = 0;
    while(n!=0){
        if(laSoChan(n)){
            count++;
        }
        n/=10;
    }
    return count;
}
void xuat(int n){
    printf("so %d co %d chu so\n",n,demSoLuongChuSo(n));
}
int main(){
    int n= 67809;
    xuat(n);
    return 0;
