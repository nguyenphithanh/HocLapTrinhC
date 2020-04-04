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
// 432423
int timChuSoLonNhat(int n){
    int max = n%10;
    n/=10;
    while (n!=0)
    {
        if(n%10>max){
            max = n%10;
        }
        n/=10;
    }
    return max;
}
// 432423
int timChuSoNhoNhat(int n){
   int min = n%10;
   n/=10;// so sanh tu hang chuc tro ve
    while(n!=0){
        if(n%10<min){
            min=n%10;
        }
        n/=10;
    }
}
int demChuSoThoaMan(int n, int dieukien){
    int count=0;
    while (n!=0){
        if(n%10==dieukien){
            count++;
        }
        n/=10;
    }
    return count;
}
 // 4234233 => max =4, count= 2
int demSoLuongChuSoLonNhat(int n){
    int count =0;
    int max=timChuSoLonNhat(n); // n=4234233 => max = 3
    count = demChuSoThoaMan(n, max);
    return count;
}
//n=34554
int demSoLuongChuSoNhoNhat(int n){
    int count = 0;
    int min=timChuSoNhoNhat(n);
    count= demChuSoThoaMan(n,min);
    return count;
}
void xuat(int n){
    printf("so %d co %d chu so\n",n,demSoLuongChuSo(n));
    printf("so %d co %d chu so nho nhat\n",n,demSoLuongChuSoNhoNhat(n));
    printf("so %d co %d chu so lon nhat\n",n,demSoLuongChuSoLonNhat(n));
    printf("so %d co %d chu so chan\n",n,demSoLuongChuSoChan(n));
    printf("so %d co %d chu so le\n",n,demSoLuongChuSoLe(n));
}
int main(){
    int n= 67809;
    xuat(n);
    return 0;
}
