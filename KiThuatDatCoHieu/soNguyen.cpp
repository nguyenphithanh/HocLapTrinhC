#include<stdio.h>
int laSoNguyenTo(int n){
    int flag=1;
    for(int i=2; i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
// 2 3 4 5 4 ban dau: 0 co so nguyen to => 2 la so nguyen to => co so nguyen to
int coPhanTuKhong(int a[], int n){
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0){
            flag = 1;
            break;
        }
    }
    return flag;
}
// 2 3 4 3 6 => dung la mang lien tiep => 4 3 bi sai => sai luon
int laMangLienTiepTang(int a[], int n){
    int flag=1;
    for(int i=0;i<n-1;i++){
        if(a[i+1]!=a[i]+1){
            flag = 0;
            break;
        }
    }
    return flag;
}
int laSoHoanThien(int n){
    int tich = 1;
    // nhan ket qua cua uoc so 
    // kiem tra bang n
    for(int i = 2; i< n; i++){
        if(n%i==0){
            tich*=i;
        }
    }
    return tich == n;
}
int demSoLuongChuSo(int n){
    int count = 0;
    while (n!=0)
    {
        count++;
        n/=10;   
    }
    
    return count;
}
int laDoiXung(int n){
    int flag = 1;
    // 212, 3223,432234 
    int dem = demSoLuongChuSo(n);
    int chuso[100];
    int i=0;
    // luu vao mang
     while (n!=0)
    {
        chuso[i] = n%10;
        i++;
        n/=10;   
    }
    // kiem tra doi xung
    for(int i=0; i< dem;i++){
        if(chuso[i]!=chuso[dem-1-i]){
            flag = 0;
            break;
       }
    }
    return flag;
}
int laMangChan(int a[], int n){
    int flag = 1;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            flag = 0;
            break;
        }
    }
    return flag;
}
int laMangLienTiepGiam(int a[], int n){
    int flag=1;
    for(int i=1;i<n;i++){
        if(a[i-1]!=a[i]-1){
            flag = 0;
            break;
        }
    }
    return flag;
}
int coPhanTuDoiXung(int a[],int n){
    int flag = 0;
    for(int i=0; i<n;i++){
        if(laDoiXung(a[i])){
            flag = 1;
            break;
        }
    }
    return flag;
}
int tonTaiGiaTriChan(int a[], int n){
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0){
            flag = 1;
            break;
        }
    }
    
    return flag;
}
int tonTaiGiaTriLe(int a[],int n){
    int flag = 0;
    for(int i=0;i< n;i++){
        if(a[i]%2!=0){
            flag = 1;
            break;
        }
    }
    return flag;
}
int tonTaiSoNguyenTo(int a[],int n){
    int flag = 0;
    for(int i=0;i<n;i++){
        if(laSoNguyenTo(a[i])){
            flag = 1;
            break;
        }
    }
    return flag;
}
int tonTaiSoHoanThien(int a[],int n){
    int flag = 0;
    for(int i=0;i<n;i++){
        if(laSoHoanThien(a[i])){
            flag = 1;
            break;
        }
    }
    return flag;
}
void xuatPhanTuKhong(int a[], int n){
    if(coPhanTuKhong(a,n)){
        printf("mang co phan tu khong!");
    }else
    {
       printf("khong co phan tu khong!");
    }
    
}
void xuatLienTiep(int a[],int n){
    if(laMangLienTiepTang(a,n)|| laMangLienTiepGiam(a,n)){
          printf("mang lien tiep!");
    }
    else
    {
        printf("mang khong lien tiep!");
    }
}
void xuatTonTaiGiaTriChan(int a[],int n){
    if(tonTaiGiaTriChan(a,n)){
        printf("ton tai gia tri chan!");
    } else
    {
        printf("khong ton tai gia tri chan!");
    }
    
}
int main(){
    int a[100] = {4,5,9,0,2};
    int n = 5;
    xuatPhanTuKhong(a,n);
    return 0;
}