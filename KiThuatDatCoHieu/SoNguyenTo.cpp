#include<stdio.h>
int laSoNguyenTo_version1(int n){
    int dem=0;
    for(int i=2; i<n;i++){
        if(n%i==0){
            dem++;
        }
    }
    return dem==0;
}
int laSoNguyenTo_version2(int n){
    int flag=1;
    for(int i=2; i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
int coSoNguyenTo(int a[], int n){
    int flag = 0;
    for(int i=0;i<n;i++){
        if(laSoNguyenTo_version1(a[i])){
            flag = 1;
            break;
        }
    }
    return flag;
}
void xuat(int a[], int n){
    if(coSoNguyenTo(a,n)){
        printf("trong mang a co ton tai so nguyen to!");
    }
    else
    {
         printf("trong mang a khong ton tai so nguyen to!");
    }
    
}
int main(){
    int a[100] = {2, 3, 5, 6, 7};
    int n= 5;
    xuat(a,n);

